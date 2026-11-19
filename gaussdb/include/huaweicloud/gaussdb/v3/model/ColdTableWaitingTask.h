
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ColdTableWaitingTask_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ColdTableWaitingTask_H_


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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ColdTableWaitingTask
    : public ModelBase
{
public:
    ColdTableWaitingTask();
    virtual ~ColdTableWaitingTask();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ColdTableWaitingTask members

    /// <summary>
    /// **参数解释**：  数据库名。  **取值范围**：  不涉及。
    /// </summary>

    std::string getDbName() const;
    bool dbNameIsSet() const;
    void unsetdbName();
    void setDbName(const std::string& value);

    /// <summary>
    /// **参数解释**：  表名。  **取值范围**：  不涉及。
    /// </summary>

    std::string getTableName() const;
    bool tableNameIsSet() const;
    void unsettableName();
    void setTableName(const std::string& value);

    /// <summary>
    /// **参数解释**：  分区名。  **取值范围**：  不涉及。
    /// </summary>

    std::string getPartitionName() const;
    bool partitionNameIsSet() const;
    void unsetpartitionName();
    void setPartitionName(const std::string& value);

    /// <summary>
    /// **参数解释**：  任务状态。  **取值范围**：  - waiting_archive：等待归档。 - waiting_unarchive：等待回迁。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**：  任务创建时间，13位毫秒级时间戳。  **取值范围**：  非负整数。
    /// </summary>

    int64_t getCreateAt() const;
    bool createAtIsSet() const;
    void unsetcreateAt();
    void setCreateAt(int64_t value);


protected:
    std::string dbName_;
    bool dbNameIsSet_;
    std::string tableName_;
    bool tableNameIsSet_;
    std::string partitionName_;
    bool partitionNameIsSet_;
    std::string status_;
    bool statusIsSet_;
    int64_t createAt_;
    bool createAtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ColdTableWaitingTask_H_
