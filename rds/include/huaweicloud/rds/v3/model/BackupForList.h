
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_BackupForList_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_BackupForList_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/BackupDatabase.h>
#include <string>
#include <vector>
#include <huaweicloud/rds/v3/model/BackupDatastore.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 备份信息。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  BackupForList
    : public ModelBase
{
public:
    BackupForList();
    virtual ~BackupForList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BackupForList members

    /// <summary>
    /// 备份ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 实例ID。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 备份名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 备份的数据库。
    /// </summary>

    std::vector<BackupDatabase>& getDatabases();
    bool databasesIsSet() const;
    void unsetdatabases();
    void setDatabases(const std::vector<BackupDatabase>& value);

    /// <summary>
    /// 备份开始时间，格式为“yyyy-mm-ddThh:mm:ssZ”。  其中，T指某个时间的开始；Z指时区偏移量，例如北京时间偏移显示为+0800。
    /// </summary>

    std::string getBeginTime() const;
    bool beginTimeIsSet() const;
    void unsetbeginTime();
    void setBeginTime(const std::string& value);

    /// <summary>
    /// 备份结束时间，格式为“yyyy-mm-ddThh:mm:ssZ”。  其中，T指某个时间的开始；Z指时区偏移量，例如北京时间偏移显示为+0800。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 备份状态，取值：  - BUILDING: 备份中。 - COMPLETED: 备份完成。 - FAILED：备份失败。 - DELETING：备份删除中。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 备份类型，取值：  - “auto”: 自动全量备份 - “manual”: 手动全量备份 - “fragment”: 差异全量备份 - “incremental”: 自动增量备份
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 备份大小，单位为KB。
    /// </summary>

    int64_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int64_t value);

    /// <summary>
    /// 
    /// </summary>

    BackupDatastore getDatastore() const;
    bool datastoreIsSet() const;
    void unsetdatastore();
    void setDatastore(const BackupDatastore& value);

    /// <summary>
    /// 是否已被DDM实例关联。
    /// </summary>

    bool isAssociatedWithDdm() const;
    bool associatedWithDdmIsSet() const;
    void unsetassociatedWithDdm();
    void setAssociatedWithDdm(bool value);

    /// <summary>
    /// 该备份源文件大小，用于该备份文件恢复到新实例时需要的最小磁盘空间大小。
    /// </summary>

    int32_t getMinDataVolumeCapacityForRestore() const;
    bool minDataVolumeCapacityForRestoreIsSet() const;
    void unsetminDataVolumeCapacityForRestore();
    void setMinDataVolumeCapacityForRestore(int32_t value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::vector<BackupDatabase> databases_;
    bool databasesIsSet_;
    std::string beginTime_;
    bool beginTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string type_;
    bool typeIsSet_;
    int64_t size_;
    bool sizeIsSet_;
    BackupDatastore datastore_;
    bool datastoreIsSet_;
    bool associatedWithDdm_;
    bool associatedWithDdmIsSet_;
    int32_t minDataVolumeCapacityForRestore_;
    bool minDataVolumeCapacityForRestoreIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_BackupForList_H_
