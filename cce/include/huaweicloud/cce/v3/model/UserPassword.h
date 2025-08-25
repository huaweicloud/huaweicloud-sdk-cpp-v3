
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_UserPassword_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_UserPassword_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_CCE_V3_EXPORT  UserPassword
    : public ModelBase
{
public:
    UserPassword();
    virtual ~UserPassword();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UserPassword members

    /// <summary>
    /// 登录帐号，默认为“root”
    /// </summary>

    std::string getUsername() const;
    bool usernameIsSet() const;
    void unsetusername();
    void setUsername(const std::string& value);

    /// <summary>
    /// 登录密码，若创建节点通过用户名密码方式，即使用该字段，则响应体中该字段作屏蔽展示。 密码复杂度要求： - 长度为8-26位。 - 密码至少必须包含大写字母、小写字母、数字和特殊字符（!@$%^-_&#x3D;+[{}]:,./?~#*）中的三种。 - 密码不能包含用户名或用户名的逆序。 创建节点时password字段需要加盐加密，具体方法请参见[创建节点时password字段加盐加密](add-salt.xml)。 
    /// </summary>

    std::string getPassword() const;
    bool passwordIsSet() const;
    void unsetpassword();
    void setPassword(const std::string& value);


protected:
    std::string username_;
    bool usernameIsSet_;
    std::string password_;
    bool passwordIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_UserPassword_H_
