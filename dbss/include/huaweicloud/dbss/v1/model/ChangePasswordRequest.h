
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ChangePasswordRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ChangePasswordRequest_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  ChangePasswordRequest
    : public ModelBase
{
public:
    ChangePasswordRequest();
    virtual ~ChangePasswordRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChangePasswordRequest members

    /// <summary>
    /// 新密码
    /// </summary>

    std::string getNewPassword() const;
    bool newPasswordIsSet() const;
    void unsetnewPassword();
    void setNewPassword(const std::string& value);

    /// <summary>
    /// 用户名
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);


protected:
    std::string newPassword_;
    bool newPasswordIsSet_;
    std::string userName_;
    bool userNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ChangePasswordRequest_H_
