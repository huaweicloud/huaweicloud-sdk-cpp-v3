
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowDocumentInfoResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowDocumentInfoResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/DocumentTaskInfo.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ShowDocumentInfoResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowDocumentInfoResponse();
    virtual ~ShowDocumentInfoResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowDocumentInfoResponse members

    /// <summary>
    /// 文档ID。
    /// </summary>

    std::string getDocumentId() const;
    bool documentIdIsSet() const;
    void unsetdocumentId();
    void setDocumentId(const std::string& value);

    /// <summary>
    /// 知识库ID。
    /// </summary>

    std::string getKnowledgeLibraryId() const;
    bool knowledgeLibraryIdIsSet() const;
    void unsetknowledgeLibraryId();
    void setKnowledgeLibraryId(const std::string& value);

    /// <summary>
    /// 文档名称。
    /// </summary>

    std::string getFileName() const;
    bool fileNameIsSet() const;
    void unsetfileName();
    void setFileName(const std::string& value);

    /// <summary>
    /// 文档大小，单位字节
    /// </summary>

    int64_t getFileSize() const;
    bool fileSizeIsSet() const;
    void unsetfileSize();
    void setFileSize(int64_t value);

    /// <summary>
    /// 文档类型。
    /// </summary>

    std::string getFileType() const;
    bool fileTypeIsSet() const;
    void unsetfileType();
    void setFileType(const std::string& value);

    /// <summary>
    /// 分段类型 * 1: 自动分段 * 2: 手动分段
    /// </summary>

    int32_t getSplitType() const;
    bool splitTypeIsSet() const;
    void unsetsplitType();
    void setSplitType(int32_t value);

    /// <summary>
    /// 分段长度。
    /// </summary>

    int32_t getChunkSize() const;
    bool chunkSizeIsSet() const;
    void unsetchunkSize();
    void setChunkSize(int32_t value);

    /// <summary>
    /// 分段策略，多个策略之间用逗号分割。 &gt; title:标题分割；separator:分隔符分割
    /// </summary>

    std::string getChunkType() const;
    bool chunkTypeIsSet() const;
    void unsetchunkType();
    void setChunkType(const std::string& value);

    /// <summary>
    /// 分隔符
    /// </summary>

    std::vector<std::string>& getSeparators();
    bool separatorsIsSet() const;
    void unsetseparators();
    void setSeparators(const std::vector<std::string>& value);

    /// <summary>
    /// 文档创建时间。格式遵循：RFC 3339 如\&quot;2021-01-10T08:43:17Z\&quot;。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 文档更新时间。格式遵循：RFC 3339 如\&quot;2021-01-10T08:43:17Z\&quot;。
    /// </summary>

    std::string getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    DocumentTaskInfo getDocumentTaskInfo() const;
    bool documentTaskInfoIsSet() const;
    void unsetdocumentTaskInfo();
    void setDocumentTaskInfo(const DocumentTaskInfo& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::string documentId_;
    bool documentIdIsSet_;
    std::string knowledgeLibraryId_;
    bool knowledgeLibraryIdIsSet_;
    std::string fileName_;
    bool fileNameIsSet_;
    int64_t fileSize_;
    bool fileSizeIsSet_;
    std::string fileType_;
    bool fileTypeIsSet_;
    int32_t splitType_;
    bool splitTypeIsSet_;
    int32_t chunkSize_;
    bool chunkSizeIsSet_;
    std::string chunkType_;
    bool chunkTypeIsSet_;
    std::vector<std::string> separators_;
    bool separatorsIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string updateTime_;
    bool updateTimeIsSet_;
    DocumentTaskInfo documentTaskInfo_;
    bool documentTaskInfoIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowDocumentInfoResponse_H_
