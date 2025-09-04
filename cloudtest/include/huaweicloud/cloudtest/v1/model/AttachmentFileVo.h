
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AttachmentFileVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AttachmentFileVo_H_


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
/// 实际的数据类型：单个对象，集合 或 NULL
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  AttachmentFileVo
    : public ModelBase
{
public:
    AttachmentFileVo();
    virtual ~AttachmentFileVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AttachmentFileVo members

    /// <summary>
    /// 附件Uri
    /// </summary>

    std::string getUri() const;
    bool uriIsSet() const;
    void unseturi();
    void setUri(const std::string& value);

    /// <summary>
    /// 文件路径
    /// </summary>

    std::string getPath() const;
    bool pathIsSet() const;
    void unsetpath();
    void setPath(const std::string& value);

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

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
    /// 文档名
    /// </summary>

    std::string getDocName() const;
    bool docNameIsSet() const;
    void unsetdocName();
    void setDocName(const std::string& value);

    /// <summary>
    /// 保存文件名
    /// </summary>

    std::string getStoreName() const;
    bool storeNameIsSet() const;
    void unsetstoreName();
    void setStoreName(const std::string& value);

    /// <summary>
    /// 文档id
    /// </summary>

    int32_t getDocId() const;
    bool docIdIsSet() const;
    void unsetdocId();
    void setDocId(int32_t value);

    /// <summary>
    /// 文档大小
    /// </summary>

    std::string getDocSize() const;
    bool docSizeIsSet() const;
    void unsetdocSize();
    void setDocSize(const std::string& value);

    /// <summary>
    /// 相关类型
    /// </summary>

    std::string getRelatedType() const;
    bool relatedTypeIsSet() const;
    void unsetrelatedType();
    void setRelatedType(const std::string& value);


protected:
    std::string uri_;
    bool uriIsSet_;
    std::string path_;
    bool pathIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string filePath_;
    bool filePathIsSet_;
    std::string fileType_;
    bool fileTypeIsSet_;
    std::string docName_;
    bool docNameIsSet_;
    std::string storeName_;
    bool storeNameIsSet_;
    int32_t docId_;
    bool docIdIsSet_;
    std::string docSize_;
    bool docSizeIsSet_;
    std::string relatedType_;
    bool relatedTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AttachmentFileVo_H_
