#pragma once
#include "Material.hpp"
#include "Vector3.hpp"

namespace raydiant {

// 3次元空間で各ジオメトリプリミティブを表現する抽象クラス
class IGeometryPrimitive {
public:
  virtual ~IGeometryPrimitive();

  // 指定した距離の分移動する
  virtual void MoveBy(double x, double y, double z) = 0;
  virtual void MoveBy(const Vector3& v) = 0;

  // 指定した角度分回転する 
  // virtual void Rotate(double axisX, double axisY, double axisZ) = 0;

private:
  Material material;
};

}//namespace raydiant