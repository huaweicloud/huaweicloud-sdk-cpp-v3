
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_RestoreToExistingInstanceRequestBody_source_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_RestoreToExistingInstanceRequestBody_source_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 恢复数据源对象。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  RestoreToExistingInstanceRequestBody_source
    : public ModelBase
{
public:
    RestoreToExistingInstanceRequestBody_source();
    virtual ~RestoreToExistingInstanceRequestBody_source();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RestoreToExistingInstanceRequestBody_source members

    /// <summary>
    /// 实例ID。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 表示恢复方式，枚举值：  - “backup”，表示使用备份文件恢复，按照此方式恢复时，“type”字段为非必选，“backup_id”必选。 - “timestamp”，表示按时间点恢复，按照此方式恢复时，“type”字段必选，“restore_time”必选。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 用于恢复的备份ID。当使用备份文件恢复时需要指定该参数。
    /// </summary>

    std::string getBackupId() const;
    bool backupIdIsSet() const;
    void unsetbackupId();
    void setBackupId(const std::string& value);

    /// <summary>
    /// 恢复数据的时间点，格式为UNIX时间戳，单位是毫秒，时区为UTC。
    /// </summary>

    int64_t getRestoreTime() const;
    bool restoreTimeIsSet() const;
    void unsetrestoreTime();
    void setRestoreTime(int64_t value);

    /// <summary>
    /// 仅适用于SQL Server引擎，当有此参数时表示支持局部恢复和重命名恢复，恢复数据以局部恢复为主。不填写该字段时，默认恢复全部数据库。 - 新数据库名称不可与源实例或目标实例数据库名称重名，新数据库名称为空，默认按照原数据库名进行恢复。 - 新数据库名不能包含rdsadmin、master、msdb、tempdb、model或resource字段（不区分大小写）。 - 数据库名称长度在1~64个字符之间，包含字母、数字、下划线或中划线，不能包含其他特殊字符。
    /// </summary>

    std::map<std::string, std::string>& getDatabaseName();
    bool databaseNameIsSet() const;
    void unsetdatabaseName();
    void setDatabaseName(const std::map<std::string, std::string>& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string backupId_;
    bool backupIdIsSet_;
    int64_t restoreTime_;
    bool restoreTimeIsSet_;
    std::map<std::string, std::string> databaseName_;
    bool databaseNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_RestoreToExistingInstanceRequestBody_source_H_
