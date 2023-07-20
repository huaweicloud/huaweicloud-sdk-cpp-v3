
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_UserMigrationInfo_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_UserMigrationInfo_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/drs/v5/model/UserMigrationRole.h>
#include <huaweicloud/drs/v5/model/UserMigrationList.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 用户迁移信息体。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  UserMigrationInfo
    : public ModelBase
{
public:
    UserMigrationInfo();
    virtual ~UserMigrationInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UserMigrationInfo members

    /// <summary>
    /// 是否迁移用户。
    /// </summary>

    bool isIsMigrateUser() const;
    bool isMigrateUserIsSet() const;
    void unsetisMigrateUser();
    void setIsMigrateUser(bool value);

    /// <summary>
    /// 是否统一重置密码。取值： - true：重置密码为统一密码。 - false：不统一重置密码。 当前支持的场景： - 实时迁移场景：MySQL迁移。
    /// </summary>

    bool isIsSetPassword() const;
    bool isSetPasswordIsSet() const;
    void unsetisSetPassword();
    void setIsSetPassword(bool value);

    /// <summary>
    /// 重置后的统一密码。统一重置密码为true时必填。 约束：密码不能为空。
    /// </summary>

    std::string getPassword() const;
    bool passwordIsSet() const;
    void unsetpassword();
    void setPassword(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<UserMigrationList>& getUserList();
    bool userListIsSet() const;
    void unsetuserList();
    void setUserList(const std::vector<UserMigrationList>& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<UserMigrationRole>& getRoleList();
    bool roleListIsSet() const;
    void unsetroleList();
    void setRoleList(const std::vector<UserMigrationRole>& value);


protected:
    bool isMigrateUser_;
    bool isMigrateUserIsSet_;
    bool isSetPassword_;
    bool isSetPasswordIsSet_;
    std::string password_;
    bool passwordIsSet_;
    std::vector<UserMigrationList> userList_;
    bool userListIsSet_;
    std::vector<UserMigrationRole> roleList_;
    bool roleListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_UserMigrationInfo_H_
