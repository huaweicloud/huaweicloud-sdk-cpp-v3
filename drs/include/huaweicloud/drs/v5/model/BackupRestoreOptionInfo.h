
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_BackupRestoreOptionInfo_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_BackupRestoreOptionInfo_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 备份迁移参数。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  BackupRestoreOptionInfo
    : public ModelBase
{
public:
    BackupRestoreOptionInfo();
    virtual ~BackupRestoreOptionInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BackupRestoreOptionInfo members

    /// <summary>
    /// 是否覆盖目标数据库，不填默认为false。  值为“true”表示覆盖。  值为“false”表示不覆盖。
    /// </summary>

    bool isIsCover() const;
    bool isCoverIsSet() const;
    void unsetisCover();
    void setIsCover(bool value);

    /// <summary>
    /// 是否默认恢复，默认恢复所有数据库。  “true”是代表默认恢复还原备份文件中的全部数据库。  “false”代表需要在db_names这个字段中指定需要恢复的数据库名。
    /// </summary>

    bool isIsDefaultRestore() const;
    bool isDefaultRestoreIsSet() const;
    void unsetisDefaultRestore();
    void setIsDefaultRestore(bool value);

    /// <summary>
    /// 一次典型的增量恢复过程，会涉及多次恢复增量备份。每个增量备份恢复均会使目标数据库保持还原中状态，此时数据库不可读写，直至最后一个增量备份恢复完成后，数据库才能变成可用状态。此后数据库将无法继续进行增量恢复，所以确定为最后一个备份的场景有：  一次性全量迁移，后续将不再进行增量恢复时，设置该字段值为“true”。  增量恢复流程中，确定为最后割接阶段的最后一个增量备份时，设置该字段值为“false”。
    /// </summary>

    bool isIsLastBackup() const;
    bool isLastBackupIsSet() const;
    void unsetisLastBackup();
    void setIsLastBackup(bool value);

    /// <summary>
    /// 是否执行预校验。 true：执行。 false：不执行。
    /// </summary>

    bool isIsPrecheck() const;
    bool isPrecheckIsSet() const;
    void unsetisPrecheck();
    void setIsPrecheck(bool value);

    /// <summary>
    /// 恢复模式：  “full”表示全量迁移。  “incre”表示增量迁移 。
    /// </summary>

    std::string getRecoveryMode() const;
    bool recoveryModeIsSet() const;
    void unsetrecoveryMode();
    void setRecoveryMode(const std::string& value);

    /// <summary>
    /// 数据库名称。
    /// </summary>

    std::vector<std::string>& getDbNames();
    bool dbNamesIsSet() const;
    void unsetdbNames();
    void setDbNames(const std::vector<std::string>& value);

    /// <summary>
    /// 该字段为一个map，目前使用格式key是\&quot;\&quot;，value是新数据库名字。 该功能将忽略备份文件中原有的数据库名，通过DRS将其恢复为指定的新数据库名。 使用条件： - 备份文件中只有一个数据库。 - 备份文件是全量备份类型（待恢复备份类型选择：全量备份），且是一次性恢复（最后一个备份选择：是）。
    /// </summary>

    std::map<std::string, std::string>& getResetDbNameMap();
    bool resetDbNameMapIsSet() const;
    void unsetresetDbNameMap();
    void setResetDbNameMap(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 该参数控制使用OBS桶中备份文件恢复时，当任务结束时是否删除下载到RDS for SQL server磁盘中的OBS备份文件，默认删除。 - true 删除 - false 不删除
    /// </summary>

    bool isIsDeleteBackupFile() const;
    bool isDeleteBackupFileIsSet() const;
    void unsetisDeleteBackupFile();
    void setIsDeleteBackupFile(bool value);


protected:
    bool isCover_;
    bool isCoverIsSet_;
    bool isDefaultRestore_;
    bool isDefaultRestoreIsSet_;
    bool isLastBackup_;
    bool isLastBackupIsSet_;
    bool isPrecheck_;
    bool isPrecheckIsSet_;
    std::string recoveryMode_;
    bool recoveryModeIsSet_;
    std::vector<std::string> dbNames_;
    bool dbNamesIsSet_;
    std::map<std::string, std::string> resetDbNameMap_;
    bool resetDbNameMapIsSet_;
    bool isDeleteBackupFile_;
    bool isDeleteBackupFileIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_BackupRestoreOptionInfo_H_
