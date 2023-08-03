
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_GetBackupDownloadLink_files_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_GetBackupDownloadLink_files_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  GetBackupDownloadLink_files
    : public ModelBase
{
public:
    GetBackupDownloadLink_files();
    virtual ~GetBackupDownloadLink_files();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// GetBackupDownloadLink_files members

    /// <summary>
    /// 文件名。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 文件大小，单位为KB。
    /// </summary>

    int64_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int64_t value);

    /// <summary>
    /// 文件下载链接。
    /// </summary>

    std::string getDownloadLink() const;
    bool downloadLinkIsSet() const;
    void unsetdownloadLink();
    void setDownloadLink(const std::string& value);

    /// <summary>
    /// 下载链接过期时间，格式为“yyyy-mm-ddThh:mm:ssZ”。其中，T指某个时间的开始，Z指时区偏移量，例如北京时间偏移显示为+0800。
    /// </summary>

    std::string getLinkExpiredTime() const;
    bool linkExpiredTimeIsSet() const;
    void unsetlinkExpiredTime();
    void setLinkExpiredTime(const std::string& value);

    /// <summary>
    /// 数据库名。若文件不是数据库备份，则返回空
    /// </summary>

    std::string getDatabaseName() const;
    bool databaseNameIsSet() const;
    void unsetdatabaseName();
    void setDatabaseName(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    int64_t size_;
    bool sizeIsSet_;
    std::string downloadLink_;
    bool downloadLinkIsSet_;
    std::string linkExpiredTime_;
    bool linkExpiredTimeIsSet_;
    std::string databaseName_;
    bool databaseNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_GetBackupDownloadLink_files_H_
