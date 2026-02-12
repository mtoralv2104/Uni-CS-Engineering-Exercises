#include <iostream>
using namespace std;

float gravity(float m1, float m2, float d) {
    const float G = 6.67428e-11f;
    return G * m1 * m2 / (d * d);
}

int main() {
    float m_body = 1.0f;

    cout << "--- Earth Surface ---" << endl;
    float m_earth = 5.974e24f;
    float r_earth = 6378140.0f;
    float force_earth = gravity(m_earth, m_body, r_earth);
    cout << "Acceleration on 1kg body: " << force_earth / m_body << " m/s^2" << endl;

    cout << "--- Geostationary (35,786 km altitude) ---" << endl;
    float d_geo = r_earth + 35786000.0f;
    float force_geo = gravity(m_earth, m_body, d_geo);
    cout << "Acceleration on 1kg body: " << force_geo / m_body << " m/s^2" << endl;

    cout << "--- Bennu Surface ---" << endl;
    float m_bennu = 7.329e10f;
    float r_bennu = 245.0f;
    float force_bennu = gravity(m_bennu, m_body, r_bennu);
    cout << "Acceleration on 1kg body: " << force_bennu / m_body << " m/s^2" << endl;

    cout << "\n--- Centrifugal accelerations (for context) ---" << endl;
    cout << "Earth equator: 0.03373 m/s^2" << endl;
    cout << "Bennu equator: 0.00004082 m/s^2" << endl;

    return 0;
}