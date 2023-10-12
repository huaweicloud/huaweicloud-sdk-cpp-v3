
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ScaleProxyRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ScaleProxyRequestBody_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ScaleProxyRequestBody
    : public ModelBase
{
public:
    ScaleProxyRequestBody();
    virtual ~ScaleProxyRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ScaleProxyRequestBody members

    /// <summary>
    /// 需要变更的新规格ID。
    /// </summary>

    std::string getFlavorRef() const;
    bool flavorRefIsSet() const;
    void unsetflavorRef();
    void setFlavorRef(const std::string& value);

    /// <summary>
    /// 是否延迟变更。  - true：延迟变更，将在运维时间窗内自动变更。 - false：立即变更。
    /// </summary>

    bool isDelay() const;
    bool delayIsSet() const;
    void unsetdelay();
    void setDelay(bool value);


protected:
    std::string flavorRef_;
    bool flavorRefIsSet_;
    bool delay_;
    bool delayIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ScaleProxyRequestBody_H_
