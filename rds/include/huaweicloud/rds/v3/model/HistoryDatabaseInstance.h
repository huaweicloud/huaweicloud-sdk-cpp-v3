
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_HistoryDatabaseInstance_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_HistoryDatabaseInstance_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/rds/v3/model/HistoryDatabaseInfo.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  HistoryDatabaseInstance
    : public ModelBase
{
public:
    HistoryDatabaseInstance();
    virtual ~HistoryDatabaseInstance();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HistoryDatabaseInstance members

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

    std::vector<HistoryDatabaseInfo>& getDatabases();
    bool databasesIsSet() const;
    void unsetdatabases();
    void setDatabases(const std::vector<HistoryDatabaseInfo>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    int32_t totalTables_;
    bool totalTablesIsSet_;
    std::vector<HistoryDatabaseInfo> databases_;
    bool databasesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_HistoryDatabaseInstance_H_
