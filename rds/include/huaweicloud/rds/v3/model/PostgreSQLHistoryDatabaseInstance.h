
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_PostgreSQLHistoryDatabaseInstance_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_PostgreSQLHistoryDatabaseInstance_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/rds/v3/model/PostgreSQLHistoryDatabaseInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// PostgreSQL查询可恢复库的实例信息
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  PostgreSQLHistoryDatabaseInstance
    : public ModelBase
{
public:
    PostgreSQLHistoryDatabaseInstance();
    virtual ~PostgreSQLHistoryDatabaseInstance();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PostgreSQLHistoryDatabaseInstance members

    /// <summary>
    /// 实例ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 实例名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 表的个数
    /// </summary>

    int32_t getTotalTables() const;
    bool totalTablesIsSet() const;
    void unsettotalTables();
    void setTotalTables(int32_t value);

    /// <summary>
    /// 数据库信息
    /// </summary>

    std::vector<PostgreSQLHistoryDatabaseInfo>& getDatabases();
    bool databasesIsSet() const;
    void unsetdatabases();
    void setDatabases(const std::vector<PostgreSQLHistoryDatabaseInfo>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    int32_t totalTables_;
    bool totalTablesIsSet_;
    std::vector<PostgreSQLHistoryDatabaseInfo> databases_;
    bool databasesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_PostgreSQLHistoryDatabaseInstance_H_
