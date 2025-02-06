
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_DatabaseBackupInfo_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_DatabaseBackupInfo_H_


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
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  DatabaseBackupInfo
    : public ModelBase
{
public:
    DatabaseBackupInfo();
    virtual ~DatabaseBackupInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DatabaseBackupInfo members

    /// <summary>
    /// 库名
    /// </summary>

    std::string getDatabaseName() const;
    bool databaseNameIsSet() const;
    void unsetdatabaseName();
    void setDatabaseName(const std::string& value);

    /// <summary>
    /// 备份文件名
    /// </summary>

    std::string getBackupFileName() const;
    bool backupFileNameIsSet() const;
    void unsetbackupFileName();
    void setBackupFileName(const std::string& value);

    /// <summary>
    /// 备份文件大小
    /// </summary>

    int64_t getBackupFileSize() const;
    bool backupFileSizeIsSet() const;
    void unsetbackupFileSize();
    void setBackupFileSize(int64_t value);


protected:
    std::string databaseName_;
    bool databaseNameIsSet_;
    std::string backupFileName_;
    bool backupFileNameIsSet_;
    int64_t backupFileSize_;
    bool backupFileSizeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_DatabaseBackupInfo_H_
