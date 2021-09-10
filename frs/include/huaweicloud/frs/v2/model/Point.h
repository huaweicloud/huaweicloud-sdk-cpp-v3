
#ifndef HUAWEICLOUD_SDK_FRS_V2_MODEL_Point_H_
#define HUAWEICLOUD_SDK_FRS_V2_MODEL_Point_H_

#include <huaweicloud/frs/v2/FrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_FRS_V2_EXPORT  Point
    : public ModelBase
{
public:
    Point();
    virtual ~Point();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// Point members

    /// <summary>
    /// 坐标横轴数值。
    /// </summary>

    double getX() const;
    bool XIsSet() const;
    void unsetx();
    void setX(double value);

    /// <summary>
    /// 坐标纵轴数值。
    /// </summary>

    double getY() const;
    bool YIsSet() const;
    void unsety();
    void setY(double value);


protected:
    double x_;
    bool xIsSet_;
    double y_;
    bool yIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FRS_V2_MODEL_Point_H_
