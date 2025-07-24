
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestCaseAttachmentInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestCaseAttachmentInfo_H_


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
/// 对外附件
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  TestCaseAttachmentInfo
    : public ModelBase
{
public:
    TestCaseAttachmentInfo();
    virtual ~TestCaseAttachmentInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TestCaseAttachmentInfo members

    /// <summary>
    /// 附件是否要被覆盖
    /// </summary>

    bool isOverride() const;
    bool overrideIsSet() const;
    void unsetoverride();
    void setOverride(bool value);

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
    /// 文件大小
    /// </summary>

    std::string getFileSize() const;
    bool fileSizeIsSet() const;
    void unsetfileSize();
    void setFileSize(const std::string& value);

    /// <summary>
    /// 重复用例ID
    /// </summary>

    std::string getOverrideId() const;
    bool overrideIdIsSet() const;
    void unsetoverrideId();
    void setOverrideId(const std::string& value);

    /// <summary>
    /// 相关类型
    /// </summary>

    std::string getRelatedType() const;
    bool relatedTypeIsSet() const;
    void unsetrelatedType();
    void setRelatedType(const std::string& value);

    /// <summary>
    /// 保存文件名
    /// </summary>

    std::string getStoreFileName() const;
    bool storeFileNameIsSet() const;
    void unsetstoreFileName();
    void setStoreFileName(const std::string& value);

    /// <summary>
    /// 系统区分
    /// </summary>

    std::string getSystemType() const;
    bool systemTypeIsSet() const;
    void unsetsystemType();
    void setSystemType(const std::string& value);

    /// <summary>
    /// 区分文件存储系统
    /// </summary>

    std::string getStorageSystem() const;
    bool storageSystemIsSet() const;
    void unsetstorageSystem();
    void setStorageSystem(const std::string& value);


protected:
    bool override_;
    bool overrideIsSet_;
    std::string docId_;
    bool docIdIsSet_;
    std::string fileName_;
    bool fileNameIsSet_;
    std::string filePath_;
    bool filePathIsSet_;
    std::string fileType_;
    bool fileTypeIsSet_;
    std::string fileSize_;
    bool fileSizeIsSet_;
    std::string overrideId_;
    bool overrideIdIsSet_;
    std::string relatedType_;
    bool relatedTypeIsSet_;
    std::string storeFileName_;
    bool storeFileNameIsSet_;
    std::string systemType_;
    bool systemTypeIsSet_;
    std::string storageSystem_;
    bool storageSystemIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestCaseAttachmentInfo_H_
