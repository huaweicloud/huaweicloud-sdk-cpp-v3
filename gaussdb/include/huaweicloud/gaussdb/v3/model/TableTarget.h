
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_TableTarget_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_TableTarget_H_


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
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  TableTarget
    : public ModelBase
{
public:
    TableTarget();
    virtual ~TableTarget();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TableTarget members

    /// <summary>
    /// **参数解释**：  数据库名。  获取方法请参见[查询冷热分离可归档表信息](https://support.huaweicloud.com/api-taurusdb/ListArchivableTables.html)。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getDbName() const;
    bool dbNameIsSet() const;
    void unsetdbName();
    void setDbName(const std::string& value);

    /// <summary>
    /// **参数解释**：  表名。  获取方法请参见[查询冷热分离可归档表信息](https://support.huaweicloud.com/api-taurusdb/ListArchivableTables.html)。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getTableName() const;
    bool tableNameIsSet() const;
    void unsettableName();
    void setTableName(const std::string& value);

    /// <summary>
    /// **参数解释**：  分区名。  获取方法请参见[查询冷热分离可归档表信息](https://support.huaweicloud.com/api-taurusdb/ListArchivableTables.html)。  **约束限制**：  如果指定表下存在分区，则该参数必填。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getPartitionName() const;
    bool partitionNameIsSet() const;
    void unsetpartitionName();
    void setPartitionName(const std::string& value);


protected:
    std::string dbName_;
    bool dbNameIsSet_;
    std::string tableName_;
    bool tableNameIsSet_;
    std::string partitionName_;
    bool partitionNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_TableTarget_H_
