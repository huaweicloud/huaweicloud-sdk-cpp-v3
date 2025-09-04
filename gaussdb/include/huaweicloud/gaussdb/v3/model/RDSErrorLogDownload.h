
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_RDSErrorLogDownload_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_RDSErrorLogDownload_H_


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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  RDSErrorLogDownload
    : public ModelBase
{
public:
    RDSErrorLogDownload();
    virtual ~RDSErrorLogDownload();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RDSErrorLogDownload members

    /// <summary>
    /// **参数解释**：  任务ID。  **取值范围**：  不涉及。 
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// **参数解释**：  日志文件名称。  **取值范围**：  不涉及。 
    /// </summary>

    std::string getFileName() const;
    bool fileNameIsSet() const;
    void unsetfileName();
    void setFileName(const std::string& value);

    /// <summary>
    /// **参数解释**：  状态。  **取值范围**：  不涉及。 
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**：  文件大小。  **取值范围**：  不涉及。 
    /// </summary>

    std::string getFileSize() const;
    bool fileSizeIsSet() const;
    void unsetfileSize();
    void setFileSize(const std::string& value);

    /// <summary>
    /// **参数解释**：  文件下载链接。  **取值范围**：  不涉及。 
    /// </summary>

    std::string getFileLink() const;
    bool fileLinkIsSet() const;
    void unsetfileLink();
    void setFileLink(const std::string& value);

    /// <summary>
    /// **参数解释**：  创建时间。  **取值范围**：  不涉及。 
    /// </summary>

    int64_t getCreateAt() const;
    bool createAtIsSet() const;
    void unsetcreateAt();
    void setCreateAt(int64_t value);

    /// <summary>
    /// **参数解释**：  更新时间。  **取值范围**：  不涉及。 
    /// </summary>

    int64_t getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(int64_t value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string fileName_;
    bool fileNameIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string fileSize_;
    bool fileSizeIsSet_;
    std::string fileLink_;
    bool fileLinkIsSet_;
    int64_t createAt_;
    bool createAtIsSet_;
    int64_t updatedAt_;
    bool updatedAtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_RDSErrorLogDownload_H_
