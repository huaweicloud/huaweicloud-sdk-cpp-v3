
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AttachmentInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AttachmentInfo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 附件信息
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  AttachmentInfo
    : public ModelBase
{
public:
    AttachmentInfo();
    virtual ~AttachmentInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AttachmentInfo members

    /// <summary>
    /// 文档id
    /// </summary>

    std::string getDocId() const;
    bool docIdIsSet() const;
    void unsetdocId();
    void setDocId(const std::string& value);

    /// <summary>
    /// 文件名
    /// </summary>

    std::string getFileName() const;
    bool fileNameIsSet() const;
    void unsetfileName();
    void setFileName(const std::string& value);

    /// <summary>
    /// 文件路径
    /// </summary>

    std::string getFilePath() const;
    bool filePathIsSet() const;
    void unsetfilePath();
    void setFilePath(const std::string& value);

    /// <summary>
    /// 文件类型
    /// </summary>

    std::string getFileType() const;
    bool fileTypeIsSet() const;
    void unsetfileType();
    void setFileType(const std::string& value);

    /// <summary>
    /// 保存文件名
    /// </summary>

    std::string getStoreFileName() const;
    bool storeFileNameIsSet() const;
    void unsetstoreFileName();
    void setStoreFileName(const std::string& value);

    /// <summary>
    /// 附件类型 0 本地上传  other 关联文档
    /// </summary>

    std::string getRelatedType() const;
    bool relatedTypeIsSet() const;
    void unsetrelatedType();
    void setRelatedType(const std::string& value);

    /// <summary>
    /// 文件大小
    /// </summary>

    int32_t getFileSize() const;
    bool fileSizeIsSet() const;
    void unsetfileSize();
    void setFileSize(int32_t value);


protected:
    std::string docId_;
    bool docIdIsSet_;
    std::string fileName_;
    bool fileNameIsSet_;
    std::string filePath_;
    bool filePathIsSet_;
    std::string fileType_;
    bool fileTypeIsSet_;
    std::string storeFileName_;
    bool storeFileNameIsSet_;
    std::string relatedType_;
    bool relatedTypeIsSet_;
    int32_t fileSize_;
    bool fileSizeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AttachmentInfo_H_
