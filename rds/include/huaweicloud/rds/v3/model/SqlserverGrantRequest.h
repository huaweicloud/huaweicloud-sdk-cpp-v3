
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_SqlserverGrantRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_SqlserverGrantRequest_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/SqlserverUserWithPrivilege.h>
#include <string>
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
class HUAWEICLOUD_RDS_V3_EXPORT  SqlserverGrantRequest
    : public ModelBase
{
public:
    SqlserverGrantRequest();
    virtual ~SqlserverGrantRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SqlserverGrantRequest members

    /// <summary>
    /// 数据库名称。
    /// </summary>

    std::string getDbName() const;
    bool dbNameIsSet() const;
    void unsetdbName();
    void setDbName(const std::string& value);

    /// <summary>
    /// 每个元素都是与数据库相关联的帐号。单次请求最多支持50个元素。
    /// </summary>

    std::vector<SqlserverUserWithPrivilege>& getUsers();
    bool usersIsSet() const;
    void unsetusers();
    void setUsers(const std::vector<SqlserverUserWithPrivilege>& value);


protected:
    std::string dbName_;
    bool dbNameIsSet_;
    std::vector<SqlserverUserWithPrivilege> users_;
    bool usersIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_SqlserverGrantRequest_H_
