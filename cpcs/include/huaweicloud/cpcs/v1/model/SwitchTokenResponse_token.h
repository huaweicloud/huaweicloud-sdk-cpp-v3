
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_SwitchTokenResponse_token_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_SwitchTokenResponse_token_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cpcs/v1/model/SwitchTokenResponse_token_roles.h>
#include <string>
#include <huaweicloud/cpcs/v1/model/SwitchTokenResponse_token_user.h>
#include <huaweicloud/cpcs/v1/model/SwitchTokenResponse_token_app.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 换取的token实例
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  SwitchTokenResponse_token
    : public ModelBase
{
public:
    SwitchTokenResponse_token();
    virtual ~SwitchTokenResponse_token();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SwitchTokenResponse_token members

    /// <summary>
    /// 
    /// </summary>

    SwitchTokenResponse_token_app getApp() const;
    bool appIsSet() const;
    void unsetapp();
    void setApp(const SwitchTokenResponse_token_app& value);

    /// <summary>
    /// 过期时间
    /// </summary>

    std::string getExpiresAt() const;
    bool expiresAtIsSet() const;
    void unsetexpiresAt();
    void setExpiresAt(const std::string& value);

    /// <summary>
    /// 角色列表
    /// </summary>

    std::vector<SwitchTokenResponse_token_roles>& getRoles();
    bool rolesIsSet() const;
    void unsetroles();
    void setRoles(const std::vector<SwitchTokenResponse_token_roles>& value);

    /// <summary>
    /// 签发时间
    /// </summary>

    std::string getIssuedAt() const;
    bool issuedAtIsSet() const;
    void unsetissuedAt();
    void setIssuedAt(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    SwitchTokenResponse_token_user getUser() const;
    bool userIsSet() const;
    void unsetuser();
    void setUser(const SwitchTokenResponse_token_user& value);


protected:
    SwitchTokenResponse_token_app app_;
    bool appIsSet_;
    std::string expiresAt_;
    bool expiresAtIsSet_;
    std::vector<SwitchTokenResponse_token_roles> roles_;
    bool rolesIsSet_;
    std::string issuedAt_;
    bool issuedAtIsSet_;
    SwitchTokenResponse_token_user user_;
    bool userIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_SwitchTokenResponse_token_H_
