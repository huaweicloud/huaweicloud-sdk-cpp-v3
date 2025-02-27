
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_ChangeUsersPassword_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_ChangeUsersPassword_H_


#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  ChangeUsersPassword
    : public ModelBase
{
public:
    ChangeUsersPassword();
    virtual ~ChangeUsersPassword();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChangeUsersPassword members

    /// <summary>
    /// 新密码。
    /// </summary>

    std::string getPassword() const;
    bool passwordIsSet() const;
    void unsetpassword();
    void setPassword(const std::string& value);

    /// <summary>
    /// 旧密码。
    /// </summary>

    std::string getOldPassword() const;
    bool oldPasswordIsSet() const;
    void unsetoldPassword();
    void setOldPassword(const std::string& value);


protected:
    std::string password_;
    bool passwordIsSet_;
    std::string oldPassword_;
    bool oldPasswordIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_ChangeUsersPassword_H_
