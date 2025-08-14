
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_UpdateApplicationInstanceStatusReqBody_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_UpdateApplicationInstanceStatusReqBody_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// UpdateApplicationInstanceStatus的请求体
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  UpdateApplicationInstanceStatusReqBody
    : public ModelBase
{
public:
    UpdateApplicationInstanceStatusReqBody();
    virtual ~UpdateApplicationInstanceStatusReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateApplicationInstanceStatusReqBody members

    /// <summary>
    /// 应用程序状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    std::string status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_UpdateApplicationInstanceStatusReqBody_H_
