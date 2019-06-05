#pragma once
#include "Material.hpp"
#include "Vector3.hpp"

namespace raydiant {

// 3������ԂŊe�W�I���g���v���~�e�B�u��\�����钊�ۃN���X
class IGeometryPrimitive {
public:
  virtual ~IGeometryPrimitive();

  // �w�肵�������̕��ړ�����
  virtual void MoveBy(double x, double y, double z) = 0;
  virtual void MoveBy(const Vector3& v) = 0;

  // �w�肵���p�x����]���� 
  // virtual void Rotate(double axisX, double axisY, double axisZ) = 0;

private:
  Material material;
};

}//namespace raydiant