
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_DatabaseTable_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_DatabaseTable_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 备份里的库表信息。 **约束限制：** 该参数仅针对GeminiDB Cassandra。 **取值范围：** - 字段为空，表示创建实例级备份。 - 字段非空，表示创建库表级备份。 **默认取值：** 不涉及。
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  DatabaseTable
    : public ModelBase
{
public:
    DatabaseTable();
    virtual ~DatabaseTable();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DatabaseTable members

    /// <summary>
    /// **参数解释：** 数据库名称。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getDatabaseName() const;
    bool databaseNameIsSet() const;
    void unsetdatabaseName();
    void setDatabaseName(const std::string& value);

    /// <summary>
    /// **参数解释：** 数据表名称列表。 **约束限制：** 不涉及。 **取值范围：** - table_names为空的时候，表示库级别备份。 - table_names非空的时候，表示表级别备份。  **默认取值：** 不涉及。
    /// </summary>

    std::vector<std::string>& getTableNames();
    bool tableNamesIsSet() const;
    void unsettableNames();
    void setTableNames(const std::vector<std::string>& value);


protected:
    std::string databaseName_;
    bool databaseNameIsSet_;
    std::vector<std::string> tableNames_;
    bool tableNamesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_DatabaseTable_H_
