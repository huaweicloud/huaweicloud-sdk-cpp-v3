
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_UsersDetailsResult_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_UsersDetailsResult_H_


#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/csms/v1/model/UserOrgRelationListResult.h>
#include <string>
#include <vector>

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
class HUAWEICLOUD_CSMS_V1_EXPORT  UsersDetailsResult
    : public ModelBase
{
public:
    UsersDetailsResult();
    virtual ~UsersDetailsResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UsersDetailsResult members

    /// <summary>
    /// 用户id。
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);

    /// <summary>
    /// 用户所属组织。
    /// </summary>

    std::string getOrgId() const;
    bool orgIdIsSet() const;
    void unsetorgId();
    void setOrgId(const std::string& value);

    /// <summary>
    /// 用户名。
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// 姓名。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 手机号。
    /// </summary>

    std::string getMobile() const;
    bool mobileIsSet() const;
    void unsetmobile();
    void setMobile(const std::string& value);

    /// <summary>
    /// 邮箱。
    /// </summary>

    std::string getEmail() const;
    bool emailIsSet() const;
    void unsetemail();
    void setEmail(const std::string& value);

    /// <summary>
    /// 首次登录是否强制修改密码。
    /// </summary>

    bool isPwdMustModify() const;
    bool pwdMustModifyIsSet() const;
    void unsetpwdMustModify();
    void setPwdMustModify(bool value);

    /// <summary>
    /// 密码修改时间。
    /// </summary>

    std::string getPwdChangeAt() const;
    bool pwdChangeAtIsSet() const;
    void unsetpwdChangeAt();
    void setPwdChangeAt(const std::string& value);

    /// <summary>
    /// 创建时间。
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// 最后一次修改时间。
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);

    /// <summary>
    /// 是否禁用。
    /// </summary>

    std::string getDisabled() const;
    bool disabledIsSet() const;
    void unsetdisabled();
    void setDisabled(const std::string& value);

    /// <summary>
    /// 可信等级。
    /// </summary>

    std::string getGrade() const;
    bool gradeIsSet() const;
    void unsetgrade();
    void setGrade(const std::string& value);

    /// <summary>
    /// 是否锁定。
    /// </summary>

    std::string getLocked() const;
    bool lockedIsSet() const;
    void unsetlocked();
    void setLocked(const std::string& value);

    /// <summary>
    /// 自定义扩展属性。
    /// </summary>

    std::string getExtension() const;
    bool extensionIsSet() const;
    void unsetextension();
    void setExtension(const std::string& value);

    /// <summary>
    /// 用户组织关系集合。
    /// </summary>

    std::vector<UserOrgRelationListResult>& getUserOrgRelationList();
    bool userOrgRelationListIsSet() const;
    void unsetuserOrgRelationList();
    void setUserOrgRelationList(const std::vector<UserOrgRelationListResult>& value);


protected:
    std::string userId_;
    bool userIdIsSet_;
    std::string orgId_;
    bool orgIdIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string mobile_;
    bool mobileIsSet_;
    std::string email_;
    bool emailIsSet_;
    bool pwdMustModify_;
    bool pwdMustModifyIsSet_;
    std::string pwdChangeAt_;
    bool pwdChangeAtIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;
    std::string disabled_;
    bool disabledIsSet_;
    std::string grade_;
    bool gradeIsSet_;
    std::string locked_;
    bool lockedIsSet_;
    std::string extension_;
    bool extensionIsSet_;
    std::vector<UserOrgRelationListResult> userOrgRelationList_;
    bool userOrgRelationListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_UsersDetailsResult_H_
