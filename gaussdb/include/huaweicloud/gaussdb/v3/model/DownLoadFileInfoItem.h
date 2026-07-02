
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DownLoadFileInfoItem_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DownLoadFileInfoItem_H_


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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  DownLoadFileInfoItem
    : public ModelBase
{
public:
    DownLoadFileInfoItem();
    virtual ~DownLoadFileInfoItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DownLoadFileInfoItem members

    /// <summary>
    /// **参数解释**：  日志文件ID。  **取值范围**：  不涉及。 
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**：  日志文件名称。  **取值范围**：  不涉及。 
    /// </summary>

    std::string getFileName() const;
    bool fileNameIsSet() const;
    void unsetfileName();
    void setFileName(const std::string& value);

    /// <summary>
    /// **参数解释**：  日志文件大小，单位为字节。  **取值范围**：  不涉及。 
    /// </summary>

    int32_t getFileSize() const;
    bool fileSizeIsSet() const;
    void unsetfileSize();
    void setFileSize(int32_t value);

    /// <summary>
    /// **参数解释**：  日志下载链接。  **取值范围**：  不涉及。 
    /// </summary>

    std::string getDownloadUrl() const;
    bool downloadUrlIsSet() const;
    void unsetdownloadUrl();
    void setDownloadUrl(const std::string& value);

    /// <summary>
    /// **参数解释**：  下载链接过期时间，格式为\&quot;yyyy-MM-dd HH:mm:ss\&quot;。  **取值范围**：  不涉及。 
    /// </summary>

    std::string getExpireTime() const;
    bool expireTimeIsSet() const;
    void unsetexpireTime();
    void setExpireTime(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string fileName_;
    bool fileNameIsSet_;
    int32_t fileSize_;
    bool fileSizeIsSet_;
    std::string downloadUrl_;
    bool downloadUrlIsSet_;
    std::string expireTime_;
    bool expireTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DownLoadFileInfoItem_H_
