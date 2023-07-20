
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_RestorePoint_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_RestorePoint_H_

#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  RestorePoint
    : public ModelBase
{
public:
    RestorePoint();
    virtual ~RestorePoint();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RestorePoint members

    /// <summary>
    /// 实例ID，可以调用“查询实例列表和详情”接口获取。如果未申请实例，可以调用“创建实例”接口创建。当type为“backup”，为非必选。当type为“timestamp”，为必选。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 恢复方式，枚举值： - “backup”，表示使用备份文件恢复，按照此方式恢复时，当“type”字段为非必选时，“backup_id”必选。 - “timestamp”，表示按时间点恢复，按照此方式恢复时，当“type”字段必选时，“restore_time”必选。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 用于恢复的备份ID。当使用备份文件恢复时需要指定该参数。当“type”字段为非必选时，“backup_id”必选。
    /// </summary>

    std::string getBackupId() const;
    bool backupIdIsSet() const;
    void unsetbackupId();
    void setBackupId(const std::string& value);

    /// <summary>
    /// 恢复数据的时间点，格式为UNIX时间戳，单位是毫秒，时区为UTC。须知：当“type”字段必选时，“restore_time”必选。
    /// </summary>

    std::string getRestoreTime() const;
    bool restoreTimeIsSet() const;
    void unsetrestoreTime();
    void setRestoreTime(const std::string& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string backupId_;
    bool backupIdIsSet_;
    std::string restoreTime_;
    bool restoreTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_RestorePoint_H_
