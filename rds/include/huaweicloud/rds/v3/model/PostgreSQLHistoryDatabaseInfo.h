
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_PostgreSQLHistoryDatabaseInfo_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_PostgreSQLHistoryDatabaseInfo_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// PostgreSQL查询可恢复库的数据库库信息
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  PostgreSQLHistoryDatabaseInfo
    : public ModelBase
{
public:
    PostgreSQLHistoryDatabaseInfo();
    virtual ~PostgreSQLHistoryDatabaseInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PostgreSQLHistoryDatabaseInfo members

    /// <summary>
    /// 数据库名
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


protected:
    std::string name_;
    bool nameIsSet_;
    int32_t totalTables_;
    bool totalTablesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_PostgreSQLHistoryDatabaseInfo_H_
