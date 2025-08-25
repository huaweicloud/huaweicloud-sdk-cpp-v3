
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeTemplate_login_userPassword_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeTemplate_login_userPassword_H_


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
class HUAWEICLOUD_CCE_V3_EXPORT  NodeTemplate_login_userPassword
    : public ModelBase
{
public:
    NodeTemplate_login_userPassword();
    virtual ~NodeTemplate_login_userPassword();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeTemplate_login_userPassword members

    /// <summary>
    /// 
    /// </summary>

    std::string getUsername() const;
    bool usernameIsSet() const;
    void unsetusername();
    void setUsername(const std::string& value);

    /// <summary>
    /// 
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

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeTemplate_login_userPassword_H_
