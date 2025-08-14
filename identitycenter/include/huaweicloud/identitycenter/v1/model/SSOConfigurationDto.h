
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_SSOConfigurationDto_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_SSOConfigurationDto_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/identitycenter/v1/model/SessionConfigurationDto.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// the struct of SSOConfiguration
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  SSOConfigurationDto
    : public ModelBase
{
public:
    SSOConfigurationDto();
    virtual ~SSOConfigurationDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SSOConfigurationDto members

    /// <summary>
    /// MFA生效模式
    /// </summary>

    std::string getMfaMode() const;
    bool mfaModeIsSet() const;
    void unsetmfaMode();
    void setMfaMode(const std::string& value);

    /// <summary>
    /// 未注册MFA情况下，可选择的登录行为
    /// </summary>

    std::string getNoMfaSigninBehavior() const;
    bool noMfaSigninBehaviorIsSet() const;
    void unsetnoMfaSigninBehavior();
    void setNoMfaSigninBehavior(const std::string& value);

    /// <summary>
    /// 没有密码情况下登录的行为
    /// </summary>

    std::string getNoPasswordSigninBehavior() const;
    bool noPasswordSigninBehaviorIsSet() const;
    void unsetnoPasswordSigninBehavior();
    void setNoPasswordSigninBehavior(const std::string& value);

    /// <summary>
    /// 允许的MFA类型
    /// </summary>

    std::vector<std::string>& getAllowedMfaTypes();
    bool allowedMfaTypesIsSet() const;
    void unsetallowedMfaTypes();
    void setAllowedMfaTypes(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    SessionConfigurationDto getSessionConfiguration() const;
    bool sessionConfigurationIsSet() const;
    void unsetsessionConfiguration();
    void setSessionConfiguration(const SessionConfigurationDto& value);


protected:
    std::string mfaMode_;
    bool mfaModeIsSet_;
    std::string noMfaSigninBehavior_;
    bool noMfaSigninBehaviorIsSet_;
    std::string noPasswordSigninBehavior_;
    bool noPasswordSigninBehaviorIsSet_;
    std::vector<std::string> allowedMfaTypes_;
    bool allowedMfaTypesIsSet_;
    SessionConfigurationDto sessionConfiguration_;
    bool sessionConfigurationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_SSOConfigurationDto_H_
