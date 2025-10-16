
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateSubscriptionInfo_initialize_info_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateSubscriptionInfo_initialize_info_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 初始化信息。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  CreateSubscriptionInfo_initialize_info
    : public ModelBase
{
public:
    CreateSubscriptionInfo_initialize_info();
    virtual ~CreateSubscriptionInfo_initialize_info();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateSubscriptionInfo_initialize_info members

    /// <summary>
    /// 初始化使用的文件源，仅支持OBS或BACKUP。
    /// </summary>

    std::string getFileSource() const;
    bool fileSourceIsSet() const;
    void unsetfileSource();
    void setFileSource(const std::string& value);

    /// <summary>
    /// 使用备份文件初始化的备份文件ID。
    /// </summary>

    std::string getBackupId() const;
    bool backupIdIsSet() const;
    void unsetbackupId();
    void setBackupId(const std::string& value);

    /// <summary>
    /// 使用OBS内备份文件恢复的bucket名称。
    /// </summary>

    std::string getBucketName() const;
    bool bucketNameIsSet() const;
    void unsetbucketName();
    void setBucketName(const std::string& value);

    /// <summary>
    /// OBS桶内备份文件的路径。
    /// </summary>

    std::string getFilePath() const;
    bool filePathIsSet() const;
    void unsetfilePath();
    void setFilePath(const std::string& value);

    /// <summary>
    /// OBS桶内备份文件的名称。
    /// </summary>

    std::string getFileName() const;
    bool fileNameIsSet() const;
    void unsetfileName();
    void setFileName(const std::string& value);

    /// <summary>
    /// 是否使用备份文件对订阅库进行覆盖还原。
    /// </summary>

    bool isOverwriteRestore() const;
    bool overwriteRestoreIsSet() const;
    void unsetoverwriteRestore();
    void setOverwriteRestore(bool value);


protected:
    std::string fileSource_;
    bool fileSourceIsSet_;
    std::string backupId_;
    bool backupIdIsSet_;
    std::string bucketName_;
    bool bucketNameIsSet_;
    std::string filePath_;
    bool filePathIsSet_;
    std::string fileName_;
    bool fileNameIsSet_;
    bool overwriteRestore_;
    bool overwriteRestoreIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateSubscriptionInfo_initialize_info_H_
