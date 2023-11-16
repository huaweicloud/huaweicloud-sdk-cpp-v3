
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_RevokePostgresqlDbPrivilegeRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_RevokePostgresqlDbPrivilegeRequestBody_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/rds/v3/model/RevokePostgresqlDbPrivilegeUser.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  RevokePostgresqlDbPrivilegeRequestBody
    : public ModelBase
{
public:
    RevokePostgresqlDbPrivilegeRequestBody();
    virtual ~RevokePostgresqlDbPrivilegeRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RevokePostgresqlDbPrivilegeRequestBody members

    /// <summary>
    /// 数据库名称
    /// </summary>

    std::string getDbName() const;
    bool dbNameIsSet() const;
    void unsetdbName();
    void setDbName(const std::string& value);

    /// <summary>
    /// 用户信息，最大值50个
    /// </summary>

    std::vector<RevokePostgresqlDbPrivilegeUser>& getUsers();
    bool usersIsSet() const;
    void unsetusers();
    void setUsers(const std::vector<RevokePostgresqlDbPrivilegeUser>& value);


protected:
    std::string dbName_;
    bool dbNameIsSet_;
    std::vector<RevokePostgresqlDbPrivilegeUser> users_;
    bool usersIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_RevokePostgresqlDbPrivilegeRequestBody_H_
