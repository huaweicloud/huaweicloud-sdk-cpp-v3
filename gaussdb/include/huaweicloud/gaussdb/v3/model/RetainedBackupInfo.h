
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_RetainedBackupInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_RetainedBackupInfo_H_


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
/// 回收站保留备份信息。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  RetainedBackupInfo
    : public ModelBase
{
public:
    RetainedBackupInfo();
    virtual ~RetainedBackupInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RetainedBackupInfo members

    /// <summary>
    /// **参数解释**：  备份ID。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getBackupId() const;
    bool backupIdIsSet() const;
    void unsetbackupId();
    void setBackupId(const std::string& value);

    /// <summary>
    /// **参数解释**：  源实例ID（已释放实例）。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**：  备份状态。  **约束限制**：  不涉及。  **取值范围**：  Active：可用。  **默认取值**：  不涉及。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**：  备份名称。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getBackupName() const;
    bool backupNameIsSet() const;
    void unsetbackupName();
    void setBackupName(const std::string& value);

    /// <summary>
    /// **参数解释**：  备份大小，单位MB。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);

    /// <summary>
    /// **参数解释**：  备份开始时间，格式为“yyyy-mm-ddThh:mm:ssZ”。  其中，T指某个时间的开始；Z指时区偏移量，例如偏移1个小时显示为+0100。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getBeginTime() const;
    bool beginTimeIsSet() const;
    void unsetbeginTime();
    void setBeginTime(const std::string& value);

    /// <summary>
    /// **参数解释**：  备份结束时间，格式为“yyyy-mm-ddThh:mm:ssZ”，且大于备份开始时间。  其中，T指某个时间的开始；Z指时区偏移量，例如偏移1个小时显示为+0100。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// **参数解释**：  备份类型。  **约束限制**：  不涉及。  **取值范围**：  - auto：自动全量备份。 - manual：手动全量备份。 - differential：差量备份。 - sparse：稀疏备份。 - recycle: 回收站备份。  **默认取值**：  不涉及。
    /// </summary>

    std::string getBackupType() const;
    bool backupTypeIsSet() const;
    void unsetbackupType();
    void setBackupType(const std::string& value);

    /// <summary>
    /// **参数解释**：  备份级别，即备份位置。  **约束限制**：  不涉及。  **取值范围**：  - 1：一级备份。 - 2：二级备份。  **默认取值**：  不涉及。
    /// </summary>

    std::string getBackupLevel() const;
    bool backupLevelIsSet() const;
    void unsetbackupLevel();
    void setBackupLevel(const std::string& value);


protected:
    std::string backupId_;
    bool backupIdIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string backupName_;
    bool backupNameIsSet_;
    int32_t size_;
    bool sizeIsSet_;
    std::string beginTime_;
    bool beginTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string backupType_;
    bool backupTypeIsSet_;
    std::string backupLevel_;
    bool backupLevelIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_RetainedBackupInfo_H_
