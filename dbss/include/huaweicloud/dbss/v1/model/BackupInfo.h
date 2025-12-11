
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_BackupInfo_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_BackupInfo_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  BackupInfo
    : public ModelBase
{
public:
    BackupInfo();
    virtual ~BackupInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BackupInfo members

    /// <summary>
    /// 备份失败原因
    /// </summary>

    std::string getBackupTaskFailReason() const;
    bool backupTaskFailReasonIsSet() const;
    void unsetbackupTaskFailReason();
    void setBackupTaskFailReason(const std::string& value);

    /// <summary>
    /// 备份时间,yyyy-MM-dd HH:mm:ss
    /// </summary>

    utility::datetime getBackupTime() const;
    bool backupTimeIsSet() const;
    void unsetbackupTime();
    void setBackupTime(const utility::datetime& value);

    /// <summary>
    /// 标记删除
    /// </summary>

    bool isDeleted() const;
    bool deletedIsSet() const;
    void unsetdeleted();
    void setDeleted(bool value);

    /// <summary>
    /// 备份结束时间,yyyy-MM-dd HH:mm:ss
    /// </summary>

    utility::datetime getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const utility::datetime& value);

    /// <summary>
    /// 文件大小
    /// </summary>

    int64_t getFileSize() const;
    bool fileSizeIsSet() const;
    void unsetfileSize();
    void setFileSize(int64_t value);

    /// <summary>
    /// 文件大小单位 - Byte：Byte - KB：kb - MB: mb - GB: gb
    /// </summary>

    std::string getFileSizeUnit() const;
    bool fileSizeUnitIsSet() const;
    void unsetfileSizeUnit();
    void setFileSizeUnit(const std::string& value);

    /// <summary>
    /// 备份ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 备份方式 - AUTO：自动备份
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);

    /// <summary>
    /// 备份名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 备份进度
    /// </summary>

    int32_t getPercentage() const;
    bool percentageIsSet() const;
    void unsetpercentage();
    void setPercentage(int32_t value);

    /// <summary>
    /// 进度 - CLEAN_AFTER_FAILED: 清理失败 - DELETING：删除中 - DELETED：已删除 - DELETE_FAIL：删除失败 - RESTORING_WAITING：恢复等待中 - RESTORING：恢复中 - RESTORED：已恢复 - RESTORE_FAIL：恢复失败 - BACKUP_WAITING：等待备份 - FILE_UPLOAD_WAITING：等待上传备份文件 - FILE_UPLOADING：上传中 - AUTO_BACKUPING：自动备份中 - AUTO_BACKUPED：自动备份结束 - AUTO_BACKUP_FAIL：自动备份失败 - MANUAL_BACKUPING：手动备份中 - MANUAL_BACKUPED：手动备份结束 - MANUAL_BACKUP_FAIL：手动备份失败 - ISAP_WAITING：ISAP等待备份 - ISAP_BACKUPING：ISAP备份中 - ISAP_BACKUPED：ISAP备份成功 - ISAP_BACKUP_FAIL：ISAP备份失败 - ISAP_FILE_UPLOAD_WAITING：ISAP等待上传备份文件 - ISAP_FILE_UPLOADING：ISAP上传中
    /// </summary>

    std::string getProgress() const;
    bool progressIsSet() const;
    void unsetprogress();
    void setProgress(const std::string& value);

    /// <summary>
    /// 还原失败原因
    /// </summary>

    std::string getRestoreTaskFailReason() const;
    bool restoreTaskFailReasonIsSet() const;
    void unsetrestoreTaskFailReason();
    void setRestoreTaskFailReason(const std::string& value);

    /// <summary>
    /// 文件SHA256
    /// </summary>

    std::string getSha256() const;
    bool sha256IsSet() const;
    void unsetsha256();
    void setSha256(const std::string& value);

    /// <summary>
    /// 备份开始时间,yyyy-MM-dd HH:mm:ss
    /// </summary>

    utility::datetime getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const utility::datetime& value);


protected:
    std::string backupTaskFailReason_;
    bool backupTaskFailReasonIsSet_;
    utility::datetime backupTime_;
    bool backupTimeIsSet_;
    bool deleted_;
    bool deletedIsSet_;
    utility::datetime endTime_;
    bool endTimeIsSet_;
    int64_t fileSize_;
    bool fileSizeIsSet_;
    std::string fileSizeUnit_;
    bool fileSizeUnitIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string mode_;
    bool modeIsSet_;
    std::string name_;
    bool nameIsSet_;
    int32_t percentage_;
    bool percentageIsSet_;
    std::string progress_;
    bool progressIsSet_;
    std::string restoreTaskFailReason_;
    bool restoreTaskFailReasonIsSet_;
    std::string sha256_;
    bool sha256IsSet_;
    utility::datetime startTime_;
    bool startTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_BackupInfo_H_
