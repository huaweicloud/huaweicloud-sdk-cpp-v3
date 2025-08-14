
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_UpdateApplicationInstanceSecurityConfigurationReqBody_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_UpdateApplicationInstanceSecurityConfigurationReqBody_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/identitycenter/v1/model/SecurityConfigDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// UpdateApplicationInstanceSecurityConfiguration的请求体
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  UpdateApplicationInstanceSecurityConfigurationReqBody
    : public ModelBase
{
public:
    UpdateApplicationInstanceSecurityConfigurationReqBody();
    virtual ~UpdateApplicationInstanceSecurityConfigurationReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateApplicationInstanceSecurityConfigurationReqBody members

    /// <summary>
    /// 
    /// </summary>

    SecurityConfigDto getSecurityConfig() const;
    bool securityConfigIsSet() const;
    void unsetsecurityConfig();
    void setSecurityConfig(const SecurityConfigDto& value);


protected:
    SecurityConfigDto securityConfig_;
    bool securityConfigIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_UpdateApplicationInstanceSecurityConfigurationReqBody_H_
