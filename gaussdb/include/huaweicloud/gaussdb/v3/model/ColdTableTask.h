
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ColdTableTask_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ColdTableTask_H_


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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ColdTableTask
    : public ModelBase
{
public:
    ColdTableTask();
    virtual ~ColdTableTask();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ColdTableTask members

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
    /// **参数解释**：  分区名，为空表示无分区表。  **取值范围**：  不涉及。
    /// </summary>

    std::string getPartitionName() const;
    bool partitionNameIsSet() const;
    void unsetpartitionName();
    void setPartitionName(const std::string& value);

    /// <summary>
    /// **参数解释**：  任务状态。  **取值范围**：  - BEGIN：开始。 - RUNNING：进行中。 - FINISH：已完成。 - FAIL：失败。 - REVOKE：回滚。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**：  操作类型。  **取值范围**：  - OBS：创建冷表。 - SLICE：回迁冷表。
    /// </summary>

    std::string getTargetStorage() const;
    bool targetStorageIsSet() const;
    void unsettargetStorage();
    void setTargetStorage(const std::string& value);

    /// <summary>
    /// **参数解释**：  任务进度百分比。  **取值范围**：  0-1。
    /// </summary>

    double getPercent() const;
    bool percentIsSet() const;
    void unsetpercent();
    void setPercent(double value);

    /// <summary>
    /// **参数解释**：  对象数。  **取值范围**：  非负数。
    /// </summary>

    double getTotalCnt() const;
    bool totalCntIsSet() const;
    void unsettotalCnt();
    void setTotalCnt(double value);

    /// <summary>
    /// **参数解释**：  表空间ID。  **取值范围**：  不涉及。
    /// </summary>

    std::string getSpaceId() const;
    bool spaceIdIsSet() const;
    void unsetspaceId();
    void setSpaceId(const std::string& value);

    /// <summary>
    /// **参数解释**：  冷表版本。  **取值范围**：  不涉及。
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);


protected:
    std::string dbName_;
    bool dbNameIsSet_;
    std::string tableName_;
    bool tableNameIsSet_;
    std::string partitionName_;
    bool partitionNameIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string targetStorage_;
    bool targetStorageIsSet_;
    double percent_;
    bool percentIsSet_;
    double totalCnt_;
    bool totalCntIsSet_;
    std::string spaceId_;
    bool spaceIdIsSet_;
    std::string version_;
    bool versionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ColdTableTask_H_
