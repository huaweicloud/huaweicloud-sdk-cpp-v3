
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_PostgreSQLHistorySchema_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_PostgreSQLHistorySchema_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/rds/v3/model/PostgreSQLHistoryTable.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// PostgreSQL查询可恢复表的模式信息
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  PostgreSQLHistorySchema
    : public ModelBase
{
public:
    PostgreSQLHistorySchema();
    virtual ~PostgreSQLHistorySchema();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PostgreSQLHistorySchema members

    /// <summary>
    /// 模式名
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 可恢复表的数量
    /// </summary>

    int32_t getTotalTables() const;
    bool totalTablesIsSet() const;
    void unsettotalTables();
    void setTotalTables(int32_t value);

    /// <summary>
    /// 表信息
    /// </summary>

    std::vector<PostgreSQLHistoryTable>& getTables();
    bool tablesIsSet() const;
    void unsettables();
    void setTables(const std::vector<PostgreSQLHistoryTable>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    int32_t totalTables_;
    bool totalTablesIsSet_;
    std::vector<PostgreSQLHistoryTable> tables_;
    bool tablesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_PostgreSQLHistorySchema_H_
