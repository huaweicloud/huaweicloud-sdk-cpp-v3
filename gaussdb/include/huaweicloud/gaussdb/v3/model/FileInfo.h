
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_FileInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_FileInfo_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  FileInfo
    : public ModelBase
{
public:
    FileInfo();
    virtual ~FileInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FileInfo members

    /// <summary>
    /// 文件名。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 文件大小，单位：KB。
    /// </summary>

    int64_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int64_t value);

    /// <summary>
    /// SQL文件最后一次修改时间，格式为“yyyy-mm-ddThh:mm:ssZ”。  其中，T指某个时间的开始，Z指时区偏移量，例如偏移1个小时显示为+0100。
    /// </summary>

    std::string getUpdatedTime() const;
    bool updatedTimeIsSet() const;
    void unsetupdatedTime();
    void setUpdatedTime(const std::string& value);

    /// <summary>
    /// 文件下载链接。
    /// </summary>

    std::string getDownloadLink() const;
    bool downloadLinkIsSet() const;
    void unsetdownloadLink();
    void setDownloadLink(const std::string& value);

    /// <summary>
    /// 下载链接过期时间，格式为“yyyy-mm-ddThh:mm:ssZ”。  其中，T指某个时间的开始，Z指时区偏移量，例如偏移1个小时显示为+0100。
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
    std::string updatedTime_;
    bool updatedTimeIsSet_;
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

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_FileInfo_H_
