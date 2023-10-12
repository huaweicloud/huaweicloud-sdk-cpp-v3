
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_PostgresqlGrantRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_PostgresqlGrantRequest_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/rds/v3/model/PostgresqlUserWithPrivilege.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  PostgresqlGrantRequest
    : public ModelBase
{
public:
    PostgresqlGrantRequest();
    virtual ~PostgresqlGrantRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PostgresqlGrantRequest members

    /// <summary>
    /// 数据库名称。  数据库名称在1到63个字符之间，由字母、数字、或下划线组成，不能包含其他特殊字符，不能以“pg”和数字开头，且不能和RDS for PostgreSQL模板库重名。  RDS for PostgreSQL模板库包括postgres， template0 ，template1。
    /// </summary>

    std::string getDbName() const;
    bool dbNameIsSet() const;
    void unsetdbName();
    void setDbName(const std::string& value);

    /// <summary>
    /// 每个元素都是与数据库相关联的帐号。单次请求最多支持50个元素。
    /// </summary>

    std::vector<PostgresqlUserWithPrivilege>& getUsers();
    bool usersIsSet() const;
    void unsetusers();
    void setUsers(const std::vector<PostgresqlUserWithPrivilege>& value);


protected:
    std::string dbName_;
    bool dbNameIsSet_;
    std::vector<PostgresqlUserWithPrivilege> users_;
    bool usersIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_PostgresqlGrantRequest_H_
