
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_FileContentInfo_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_FileContentInfo_H_


#include <huaweicloud/codehub/v3/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V3_EXPORT  FileContentInfo
    : public ModelBase
{
public:
    FileContentInfo();
    virtual ~FileContentInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FileContentInfo members

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
    /// 文件大小
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);

    /// <summary>
    /// 文件编码
    /// </summary>

    std::string getEncoding() const;
    bool encodingIsSet() const;
    void unsetencoding();
    void setEncoding(const std::string& value);

    /// <summary>
    /// sha256编码的文件内容
    /// </summary>

    std::string getContentSha256() const;
    bool contentSha256IsSet() const;
    void unsetcontentSha256();
    void setContentSha256(const std::string& value);

    /// <summary>
    /// 分支名
    /// </summary>

    std::string getRef() const;
    bool refIsSet() const;
    void unsetref();
    void setRef(const std::string& value);

    /// <summary>
    /// blob sha
    /// </summary>

    std::string getBlobId() const;
    bool blobIdIsSet() const;
    void unsetblobId();
    void setBlobId(const std::string& value);

    /// <summary>
    /// 提交对应的SHA id
    /// </summary>

    std::string getCommitId() const;
    bool commitIdIsSet() const;
    void unsetcommitId();
    void setCommitId(const std::string& value);

    /// <summary>
    /// 最后一个提交对应的SHA id
    /// </summary>

    std::string getLastCommitId() const;
    bool lastCommitIdIsSet() const;
    void unsetlastCommitId();
    void setLastCommitId(const std::string& value);

    /// <summary>
    /// base64编码的文件内容
    /// </summary>

    std::string getContent() const;
    bool contentIsSet() const;
    void unsetcontent();
    void setContent(const std::string& value);


protected:
    std::string fileName_;
    bool fileNameIsSet_;
    std::string filePath_;
    bool filePathIsSet_;
    int32_t size_;
    bool sizeIsSet_;
    std::string encoding_;
    bool encodingIsSet_;
    std::string contentSha256_;
    bool contentSha256IsSet_;
    std::string ref_;
    bool refIsSet_;
    std::string blobId_;
    bool blobIdIsSet_;
    std::string commitId_;
    bool commitIdIsSet_;
    std::string lastCommitId_;
    bool lastCommitIdIsSet_;
    std::string content_;
    bool contentIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_FileContentInfo_H_
