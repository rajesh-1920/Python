import numpy as np
import matplotlib.pyplot as plt
from sklearn.linear_model import LinearRegression
from sklearn.preprocessing import PolynomialFeatures

X = np.array([1, 2, 3, 4, 5, 6, 7, 8, 9]).reshape(-1, 1)
y = np.array([2.1, 2.9, 7.2, 7.9, 14.5, 19.6, 29.5, 40.1, 55.9])

poly = PolynomialFeatures(degree=3)
X_poly = poly.fit_transform(X)

model = LinearRegression()
model.fit(X_poly, y)

y_pred = model.predict(X_poly)

plt.scatter(X, y, color="blue")
plt.plot(X, y_pred, color="red")
plt.show()

print("Coefficients:", model.coef_)
print("Intercept:", model.intercept_)
