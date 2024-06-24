#ifndef _MATERIAL_H_
#define _MATERIAL_H_
#include <cmath>
double schlick(double cosine,double ref_idx)
{
  auto r0 = (1 - ref_idx) / (1 + ref_idx);
  r0 = r0 * r0;
  return r0 + (1 - r0) * std::pow((1 - cosine), 5);
}
class material
{
  public:
  virtual bool scatter(const ray& r_in,cost hit)
}

#endif