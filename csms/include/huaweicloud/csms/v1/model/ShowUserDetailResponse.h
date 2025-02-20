
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_ShowUserDetailResponse_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_ShowUserDetailResponse_H_


#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/csms/v1/model/UserOrgRelationListResult.h>
#include <huaweicloud/core/utils/Object.h>
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
/// Response Object
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  ShowUserDetailResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowUserDetailResponse();
    virtual ~ShowUserDetailResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowUserDetailResponse members

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
    /// 密码修改时间
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

    bool isDisabled() const;
    bool disabledIsSet() const;
    void unsetdisabled();
    void setDisabled(bool value);

    /// <summary>
    /// 可信等级。
    /// </summary>

    int32_t getGrade() const;
    bool gradeIsSet() const;
    void unsetgrade();
    void setGrade(int32_t value);

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

    Object getExtension() const;
    bool extensionIsSet() const;
    void unsetextension();
    void setExtension(const Object& value);

    /// <summary>
    /// 用户组织关系集合。
    /// </summary>

    std::vector<UserOrgRelationListResult>& getUserOrgRelationList();
    bool userOrgRelationListIsSet() const;
    void unsetuserOrgRelationList();
    void setUserOrgRelationList(const std::vector<UserOrgRelationListResult>& value);

    /// <summary>
    /// 所属租户ID
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);


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
    bool disabled_;
    bool disabledIsSet_;
    int32_t grade_;
    bool gradeIsSet_;
    std::string locked_;
    bool lockedIsSet_;
    Object extension_;
    bool extensionIsSet_;
    std::vector<UserOrgRelationListResult> userOrgRelationList_;
    bool userOrgRelationListIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_ShowUserDetailResponse_H_
