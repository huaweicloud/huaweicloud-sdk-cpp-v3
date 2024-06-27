
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ChDatabaseTablesConfigsInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ChDatabaseTablesConfigsInfo_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 表配置。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ChDatabaseTablesConfigsInfo
    : public ModelBase
{
public:
    ChDatabaseTablesConfigsInfo();
    virtual ~ChDatabaseTablesConfigsInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChDatabaseTablesConfigsInfo members

    /// <summary>
    /// 数据库表名。
    /// </summary>

    std::string getTableName() const;
    bool tableNameIsSet() const;
    void unsettableName();
    void setTableName(const std::string& value);

    /// <summary>
    /// 表配置值。  允许输入的列操作有：PARTITION BY, COLUMNS, ORDER BY, SAMPLE BY, PRIMARY KEY, TTL
    /// </summary>

    std::string getTableConfig() const;
    bool tableConfigIsSet() const;
    void unsettableConfig();
    void setTableConfig(const std::string& value);


protected:
    std::string tableName_;
    bool tableNameIsSet_;
    std::string tableConfig_;
    bool tableConfigIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ChDatabaseTablesConfigsInfo_H_
