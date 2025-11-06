
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_FileBodyDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_FileBodyDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  FileBodyDto
    : public ModelBase
{
public:
    FileBodyDto();
    virtual ~FileBodyDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FileBodyDto members

    /// <summary>
    /// 用户名
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 文件路径
    /// </summary>

    std::string getFilePath() const;
    bool filePathIsSet() const;
    void unsetfilePath();
    void setFilePath(const std::string& value);

    /// <summary>
    /// 分支名
    /// </summary>

    std::string getBranch() const;
    bool branchIsSet() const;
    void unsetbranch();
    void setBranch(const std::string& value);

    /// <summary>
    /// 提交信息
    /// </summary>

    std::string getCommitMessage() const;
    bool commitMessageIsSet() const;
    void unsetcommitMessage();
    void setCommitMessage(const std::string& value);

    /// <summary>
    /// 作者邮箱
    /// </summary>

    std::string getAuthorEmail() const;
    bool authorEmailIsSet() const;
    void unsetauthorEmail();
    void setAuthorEmail(const std::string& value);

    /// <summary>
    /// 作者名称
    /// </summary>

    std::string getAuthorName() const;
    bool authorNameIsSet() const;
    void unsetauthorName();
    void setAuthorName(const std::string& value);

    /// <summary>
    /// 文件内容
    /// </summary>

    std::string getContent() const;
    bool contentIsSet() const;
    void unsetcontent();
    void setContent(const std::string& value);

    /// <summary>
    /// 编码方式
    /// </summary>

    std::string getEncoding() const;
    bool encodingIsSet() const;
    void unsetencoding();
    void setEncoding(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string filePath_;
    bool filePathIsSet_;
    std::string branch_;
    bool branchIsSet_;
    std::string commitMessage_;
    bool commitMessageIsSet_;
    std::string authorEmail_;
    bool authorEmailIsSet_;
    std::string authorName_;
    bool authorNameIsSet_;
    std::string content_;
    bool contentIsSet_;
    std::string encoding_;
    bool encodingIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_FileBodyDto_H_
