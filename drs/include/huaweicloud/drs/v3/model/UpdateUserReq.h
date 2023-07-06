
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_UpdateUserReq_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_UpdateUserReq_H_

#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/UserRoleVO.h>
#include <string>
#include <huaweicloud/drs/v3/model/UserAccountVO.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新迁移用户请求体
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  UpdateUserReq
    : public ModelBase
{
public:
    UpdateUserReq();
    virtual ~UpdateUserReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateUserReq members

    /// <summary>
    /// 任务ID
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 全局密码。
    /// </summary>

    std::string getPassword() const;
    bool passwordIsSet() const;
    void unsetpassword();
    void setPassword(const std::string& value);

    /// <summary>
    /// 用户迁移信息，迁移用户时必填
    /// </summary>

    std::vector<UserAccountVO>& getList();
    bool listIsSet() const;
    void unsetlist();
    void setList(const std::vector<UserAccountVO>& value);

    /// <summary>
    /// 角色迁移信息，迁移用户时必填
    /// </summary>

    std::vector<UserRoleVO>& getUserRoles();
    bool userRolesIsSet() const;
    void unsetuserRoles();
    void setUserRoles(const std::vector<UserRoleVO>& value);

    /// <summary>
    /// 是否设置密码
    /// </summary>

    bool isIsSetPassword() const;
    bool isSetPasswordIsSet() const;
    void unsetisSetPassword();
    void setIsSetPassword(bool value);

    /// <summary>
    /// 是否迁移用户
    /// </summary>

    bool isIsMigrateUser() const;
    bool isMigrateUserIsSet() const;
    void unsetisMigrateUser();
    void setIsMigrateUser(bool value);

    /// <summary>
    /// 是否同步权限，不填默认为false，PG同步使用。
    /// </summary>

    bool isIsSyncObjectPrivilege() const;
    bool isSyncObjectPrivilegeIsSet() const;
    void unsetisSyncObjectPrivilege();
    void setIsSyncObjectPrivilege(bool value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string password_;
    bool passwordIsSet_;
    std::vector<UserAccountVO> list_;
    bool listIsSet_;
    std::vector<UserRoleVO> userRoles_;
    bool userRolesIsSet_;
    bool isSetPassword_;
    bool isSetPasswordIsSet_;
    bool isMigrateUser_;
    bool isMigrateUserIsSet_;
    bool isSyncObjectPrivilege_;
    bool isSyncObjectPrivilegeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_UpdateUserReq_H_
