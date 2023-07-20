
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_GetBackupDownloadLinkResponseBody_files_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_GetBackupDownloadLinkResponseBody_files_H_

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
class HUAWEICLOUD_DDS_V3_EXPORT  GetBackupDownloadLinkResponseBody_files
    : public ModelBase
{
public:
    GetBackupDownloadLinkResponseBody_files();
    virtual ~GetBackupDownloadLinkResponseBody_files();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// GetBackupDownloadLinkResponseBody_files members

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
    /// 下载链接过期时间，格式为“yyyy-mm-ddThh:mm:ssZ”。其中，T指某个时间的开始，Z指时区偏移量，例如UTC时间偏移显示为+0000。
    /// </summary>

    std::string getLinkExpiredTime() const;
    bool linkExpiredTimeIsSet() const;
    void unsetlinkExpiredTime();
    void setLinkExpiredTime(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    int64_t size_;
    bool sizeIsSet_;
    std::string downloadLink_;
    bool downloadLinkIsSet_;
    std::string linkExpiredTime_;
    bool linkExpiredTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_GetBackupDownloadLinkResponseBody_files_H_
