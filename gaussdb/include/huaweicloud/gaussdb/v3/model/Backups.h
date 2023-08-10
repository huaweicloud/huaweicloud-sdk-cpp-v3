
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_Backups_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_Backups_H_

#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/MysqlDatastoreInBackup.h>
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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  Backups
    : public ModelBase
{
public:
    Backups();
    virtual ~Backups();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// Backups members

    /// <summary>
    /// 备份ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 备份名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 备份开始时间，格式为“yyyy-mm-ddThh:mm:ssZ”。  其中，T指某个时间的开始；Z指时区偏移量，例如偏移1个小时显示为+0100。
    /// </summary>

    std::string getBeginTime() const;
    bool beginTimeIsSet() const;
    void unsetbeginTime();
    void setBeginTime(const std::string& value);

    /// <summary>
    /// 备份结束时间，格式为“yyyy-mm-ddThh:mm:ssZ”。  其中，T指某个时间的开始；Z指时区偏移量，例如偏移1个小时显示为+0100。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 备份状态，取值： - BUILDING：备份中。 - COMPLETED：备份完成。 - FAILED：备份失败。 - AVAILABLE：备份可用。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 备份花费时间(单位：minutes)
    /// </summary>

    int32_t getTakeUpTime() const;
    bool takeUpTimeIsSet() const;
    void unsettakeUpTime();
    void setTakeUpTime(int32_t value);

    /// <summary>
    /// 备份类型，取值：  - auto：自动全量备份。 - manual：手动全量备份。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 备份大小，(单位：MB)
    /// </summary>

    int64_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int64_t value);

    /// <summary>
    /// 
    /// </summary>

    MysqlDatastoreInBackup getDatastore() const;
    bool datastoreIsSet() const;
    void unsetdatastore();
    void setDatastore(const MysqlDatastoreInBackup& value);

    /// <summary>
    /// 实例ID。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 备份级别。当开启一级备份开关时，返回该参数。  取值： - 0：备份正在创建中或者备份失败。 - 1：一级备份。 - 2：二级备份。
    /// </summary>

    std::string getBackupLevel() const;
    bool backupLevelIsSet() const;
    void unsetbackupLevel();
    void setBackupLevel(const std::string& value);

    /// <summary>
    /// 备份文件描述信息
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string beginTime_;
    bool beginTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string status_;
    bool statusIsSet_;
    int32_t takeUpTime_;
    bool takeUpTimeIsSet_;
    std::string type_;
    bool typeIsSet_;
    int64_t size_;
    bool sizeIsSet_;
    MysqlDatastoreInBackup datastore_;
    bool datastoreIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string backupLevel_;
    bool backupLevelIsSet_;
    std::string description_;
    bool descriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_Backups_H_
