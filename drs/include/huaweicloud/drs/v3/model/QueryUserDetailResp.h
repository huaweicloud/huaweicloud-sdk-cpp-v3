
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryUserDetailResp_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryUserDetailResp_H_

#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
/// 迁移用户响应体
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  QueryUserDetailResp
    : public ModelBase
{
public:
    QueryUserDetailResp();
    virtual ~QueryUserDetailResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// QueryUserDetailResp members

    /// <summary>
    /// 用户账户id。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 账户。
    /// </summary>

    std::string getAccount() const;
    bool accountIsSet() const;
    void unsetaccount();
    void setAccount(const std::string& value);

    /// <summary>
    /// 说明。
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
    /// 权限
    /// </summary>

    std::string getPrivileges() const;
    bool privilegesIsSet() const;
    void unsetprivileges();
    void setPrivileges(const std::string& value);

    /// <summary>
    /// 密码。
    /// </summary>

    std::string getPassword() const;
    bool passwordIsSet() const;
    void unsetpassword();
    void setPassword(const std::string& value);

    /// <summary>
    /// 账号拥有的角色
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

    /// <summary>
    /// 无法同步的用户权限
    /// </summary>

    std::string getNoPrivileges() const;
    bool noPrivilegesIsSet() const;
    void unsetnoPrivileges();
    void setNoPrivileges(const std::string& value);

    /// <summary>
    /// 父用户
    /// </summary>

    std::string getParentAccount() const;
    bool parentAccountIsSet() const;
    void unsetparentAccount();
    void setParentAccount(const std::string& value);

    /// <summary>
    /// 无法同步父子关系的父用户
    /// </summary>

    std::string getNoParentAccount() const;
    bool noParentAccountIsSet() const;
    void unsetnoParentAccount();
    void setNoParentAccount(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string account_;
    bool accountIsSet_;
    std::string comment_;
    bool commentIsSet_;
    bool isTransfer_;
    bool isTransferIsSet_;
    std::string privileges_;
    bool privilegesIsSet_;
    std::string password_;
    bool passwordIsSet_;
    std::vector<std::string> roles_;
    bool rolesIsSet_;
    bool selected_;
    bool selectedIsSet_;
    std::string noPrivileges_;
    bool noPrivilegesIsSet_;
    std::string parentAccount_;
    bool parentAccountIsSet_;
    std::string noParentAccount_;
    bool noParentAccountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryUserDetailResp_H_
