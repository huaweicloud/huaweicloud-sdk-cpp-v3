
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_Login_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_Login_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cce/v3/model/UserPassword.h>

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
class HUAWEICLOUD_CCE_V3_EXPORT  Login
    : public ModelBase
{
public:
    Login();
    virtual ~Login();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Login members

    /// <summary>
    /// 选择密钥对方式登录时的密钥对名称。
    /// </summary>

    std::string getSshKey() const;
    bool sshKeyIsSet() const;
    void unsetsshKey();
    void setSshKey(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UserPassword getUserPassword() const;
    bool userPasswordIsSet() const;
    void unsetuserPassword();
    void setUserPassword(const UserPassword& value);

    /// <summary>
    /// **参数解释**： 更新节点池时，移除当前节点池密码方式登录的配置 **约束限制**： 仅更新节点池场景支持该参数，设置为true时不允许设置userPassword **取值范围**： 不涉及 **默认取值**： false
    /// </summary>

    bool isRemoveUserPassword() const;
    bool removeUserPasswordIsSet() const;
    void unsetremoveUserPassword();
    void setRemoveUserPassword(bool value);

    /// <summary>
    /// **参数解释**： 更新节点池时，移除当前节点池密钥对方式登录的配置 **约束限制**： 仅更新节点池场景支持该参数，设置为true时不允许设置sshKey **取值范围**： 不涉及 **默认取值**： false
    /// </summary>

    bool isRemoveSSHKey() const;
    bool removeSSHKeyIsSet() const;
    void unsetremoveSSHKey();
    void setRemoveSSHKey(bool value);


protected:
    std::string sshKey_;
    bool sshKeyIsSet_;
    UserPassword userPassword_;
    bool userPasswordIsSet_;
    bool removeUserPassword_;
    bool removeUserPasswordIsSet_;
    bool removeSSHKey_;
    bool removeSSHKeyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_Login_H_
