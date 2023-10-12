
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_UserAccountVO_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_UserAccountVO_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 用户信息
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  UserAccountVO
    : public ModelBase
{
public:
    UserAccountVO();
    virtual ~UserAccountVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UserAccountVO members

    /// <summary>
    /// 用户账户ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 用户
    /// </summary>

    std::string getAccount() const;
    bool accountIsSet() const;
    void unsetaccount();
    void setAccount(const std::string& value);

    /// <summary>
    /// 说明
    /// </summary>

    std::string getComment() const;
    bool commentIsSet() const;
    void unsetcomment();
    void setComment(const std::string& value);

    /// <summary>
    /// 是否支持迁移
    /// </summary>

    bool isIsTransfer() const;
    bool isTransferIsSet() const;
    void unsetisTransfer();
    void setIsTransfer(bool value);

    /// <summary>
    /// 权限列表
    /// </summary>

    std::vector<std::string>& getPrivileges();
    bool privilegesIsSet() const;
    void unsetprivileges();
    void setPrivileges(const std::vector<std::string>& value);

    /// <summary>
    /// 密码
    /// </summary>

    std::string getPassword() const;
    bool passwordIsSet() const;
    void unsetpassword();
    void setPassword(const std::string& value);

    /// <summary>
    /// 是否重置密码。
    /// </summary>

    bool isIsSetPassword() const;
    bool isSetPasswordIsSet() const;
    void unsetisSetPassword();
    void setIsSetPassword(bool value);

    /// <summary>
    /// 角色
    /// </summary>

    std::vector<std::string>& getRoles();
    bool rolesIsSet() const;
    void unsetroles();
    void setRoles(const std::vector<std::string>& value);

    /// <summary>
    /// 是否选择。
    /// </summary>

    bool isSelected() const;
    bool selectedIsSet() const;
    void unsetselected();
    void setSelected(bool value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string account_;
    bool accountIsSet_;
    std::string comment_;
    bool commentIsSet_;
    bool isTransfer_;
    bool isTransferIsSet_;
    std::vector<std::string> privileges_;
    bool privilegesIsSet_;
    std::string password_;
    bool passwordIsSet_;
    bool isSetPassword_;
    bool isSetPasswordIsSet_;
    std::vector<std::string> roles_;
    bool rolesIsSet_;
    bool selected_;
    bool selectedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_UserAccountVO_H_
