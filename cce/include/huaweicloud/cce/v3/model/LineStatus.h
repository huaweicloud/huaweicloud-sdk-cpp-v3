
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_LineStatus_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_LineStatus_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/Point.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  LineStatus
    : public ModelBase
{
public:
    LineStatus();
    virtual ~LineStatus();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LineStatus members

    /// <summary>
    /// 
    /// </summary>

    Point getStartPoint() const;
    bool startPointIsSet() const;
    void unsetstartPoint();
    void setStartPoint(const Point& value);

    /// <summary>
    /// 
    /// </summary>

    Point getEndPoint() const;
    bool endPointIsSet() const;
    void unsetendPoint();
    void setEndPoint(const Point& value);

    /// <summary>
    /// 表示是否为关键线路（关键线路未执行无法取消升级流程）
    /// </summary>

    std::string getCritical() const;
    bool criticalIsSet() const;
    void unsetcritical();
    void setCritical(const std::string& value);


protected:
    Point startPoint_;
    bool startPointIsSet_;
    Point endPoint_;
    bool endPointIsSet_;
    std::string critical_;
    bool criticalIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_LineStatus_H_
