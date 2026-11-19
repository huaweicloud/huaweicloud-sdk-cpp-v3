
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CancelColdTableWaitingTask_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CancelColdTableWaitingTask_H_


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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  CancelColdTableWaitingTask
    : public ModelBase
{
public:
    CancelColdTableWaitingTask();
    virtual ~CancelColdTableWaitingTask();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CancelColdTableWaitingTask members

    /// <summary>
    /// **参数解释**：  数据库名。  获取方法请参见[查询冷热分离待下发任务列表](https://support.huaweicloud.com/api-taurusdb/ListColdTableWaitingTasks.html)。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getDbName() const;
    bool dbNameIsSet() const;
    void unsetdbName();
    void setDbName(const std::string& value);

    /// <summary>
    /// **参数解释**：  表名。 获取方法请参见[查询冷热分离待下发任务列表](https://support.huaweicloud.com/api-taurusdb/ListColdTableWaitingTasks.html)。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getTableName() const;
    bool tableNameIsSet() const;
    void unsettableName();
    void setTableName(const std::string& value);

    /// <summary>
    /// **参数解释**：  分区名。  获取方法请参见[查询冷热分离待下发任务列表](https://support.huaweicloud.com/api-taurusdb/ListColdTableWaitingTasks.html)。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getPartitionName() const;
    bool partitionNameIsSet() const;
    void unsetpartitionName();
    void setPartitionName(const std::string& value);

    /// <summary>
    /// **参数解释**：  任务类型。  **约束限制**：  不涉及。  **取值范围**：  - waiting_archive：待归档。 - waiting_unarchive：待回迁。  **默认取值**：  不涉及。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    std::string dbName_;
    bool dbNameIsSet_;
    std::string tableName_;
    bool tableNameIsSet_;
    std::string partitionName_;
    bool partitionNameIsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CancelColdTableWaitingTask_H_
