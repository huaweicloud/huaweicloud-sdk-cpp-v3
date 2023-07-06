
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_UserMigrationList_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_UserMigrationList_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 用户迁移信息用户列表字段。当前支持的场景：  - 实时迁移场景：MySQL迁移，MongoDB迁移。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  UserMigrationList
    : public ModelBase
{
public:
    UserMigrationList();
    virtual ~UserMigrationList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UserMigrationList members

    /// <summary>
    /// 用户ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 用户。
    /// </summary>

    std::string getAccount() const;
    bool accountIsSet() const;
    void unsetaccount();
    void setAccount(const std::string& value);

    /// <summary>
    /// 是否重置该用户密码。当前支持的场景： - 实时迁移场景：MySQL迁移。
    /// </summary>

    bool isIsSetPassword() const;
    bool isSetPasswordIsSet() const;
    void unsetisSetPassword();
    void setIsSetPassword(bool value);

    /// <summary>
    /// 重置后的密码。统一重置密码或单个用户重置密码为true时必填，约束：密码不能为空。
    /// </summary>

    std::string getPassword() const;
    bool passwordIsSet() const;
    void unsetpassword();
    void setPassword(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string account_;
    bool accountIsSet_;
    bool isSetPassword_;
    bool isSetPasswordIsSet_;
    std::string password_;
    bool passwordIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_UserMigrationList_H_
