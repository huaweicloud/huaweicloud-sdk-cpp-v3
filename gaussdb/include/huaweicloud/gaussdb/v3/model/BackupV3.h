
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_BackupV3_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_BackupV3_H_


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
/// 实例备份详细信息
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  BackupV3
    : public ModelBase
{
public:
    BackupV3();
    virtual ~BackupV3();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BackupV3 members

    /// <summary>
    /// **参数解释**： 备份ID。 **取值范围**： 不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**： 备份描述。 **取值范围**： 不涉及。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**： 实例ID。 **取值范围**： 不涉及。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**： 实例名称。 **取值范围**： 不涉及。
    /// </summary>

    std::string getInstanceName() const;
    bool instanceNameIsSet() const;
    void unsetinstanceName();
    void setInstanceName(const std::string& value);

    /// <summary>
    /// **参数解释**： 备份名称。 **取值范围**： 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 备份大小。 **取值范围**： 不涉及。
    /// </summary>

    std::string getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(const std::string& value);

    /// <summary>
    /// **参数解释**： 大小单位（KB）。 **取值范围**： 不涉及。
    /// </summary>

    std::string getSizeUnit() const;
    bool sizeUnitIsSet() const;
    void unsetsizeUnit();
    void setSizeUnit(const std::string& value);

    /// <summary>
    /// **参数解释**： 备份状态。 **取值范围**： - BUILDING：备份中。 - COMPLETED：备份完成。 - FAILED：备份失败。 - DELETING：备份删除中。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**： 创建时间。 **取值范围**： 不涉及。
    /// </summary>

    std::string getCreated() const;
    bool createdIsSet() const;
    void unsetcreated();
    void setCreated(const std::string& value);

    /// <summary>
    /// **参数解释**： 更新时间。 **取值范围**： 不涉及。
    /// </summary>

    std::string getUpdated() const;
    bool updatedIsSet() const;
    void unsetupdated();
    void setUpdated(const std::string& value);

    /// <summary>
    /// **参数解释**： 备份类型。 **取值范围**： - Db：物理备份。 - Snapshot：快照备份。
    /// </summary>

    std::string getBackupType() const;
    bool backupTypeIsSet() const;
    void unsetbackupType();
    void setBackupType(const std::string& value);

    /// <summary>
    /// **参数解释**： 备份级别。 **取值范围**： - 1：一级备份。 - 2：二级备份。
    /// </summary>

    std::string getBackupLevel() const;
    bool backupLevelIsSet() const;
    void unsetbackupLevel();
    void setBackupLevel(const std::string& value);

    /// <summary>
    /// **参数解释**： 备份方法。 **取值范围**： - Db：物理备份。 - Snapshot：快照备份。
    /// </summary>

    std::string getBackupMethod() const;
    bool backupMethodIsSet() const;
    void unsetbackupMethod();
    void setBackupMethod(const std::string& value);

    /// <summary>
    /// **参数解释**： 使用详情。 **取值范围**： 不涉及。
    /// </summary>

    std::string getUseDetail() const;
    bool useDetailIsSet() const;
    void unsetuseDetail();
    void setUseDetail(const std::string& value);

    /// <summary>
    /// **参数解释**： UTC时区。 **取值范围**： 不涉及。
    /// </summary>

    std::string getTimeZone() const;
    bool timeZoneIsSet() const;
    void unsettimeZone();
    void setTimeZone(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string instanceName_;
    bool instanceNameIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string size_;
    bool sizeIsSet_;
    std::string sizeUnit_;
    bool sizeUnitIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string created_;
    bool createdIsSet_;
    std::string updated_;
    bool updatedIsSet_;
    std::string backupType_;
    bool backupTypeIsSet_;
    std::string backupLevel_;
    bool backupLevelIsSet_;
    std::string backupMethod_;
    bool backupMethodIsSet_;
    std::string useDetail_;
    bool useDetailIsSet_;
    std::string timeZone_;
    bool timeZoneIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_BackupV3_H_
