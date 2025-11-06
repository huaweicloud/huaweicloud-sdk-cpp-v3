
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_RenameFileBodyDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_RenameFileBodyDto_H_


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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  RenameFileBodyDto
    : public ModelBase
{
public:
    RenameFileBodyDto();
    virtual ~RenameFileBodyDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RenameFileBodyDto members

    /// <summary>
    /// **参数解释：** 文件路径 **取值范围：** 不涉及。
    /// </summary>

    std::string getFilePath() const;
    bool filePathIsSet() const;
    void unsetfilePath();
    void setFilePath(const std::string& value);

    /// <summary>
    /// **参数解释：** 分支名 **取值范围：** 不涉及。
    /// </summary>

    std::string getBranchName() const;
    bool branchNameIsSet() const;
    void unsetbranchName();
    void setBranchName(const std::string& value);

    /// <summary>
    /// **参数解释：** 提交信息 **取值范围：** 不涉及。
    /// </summary>

    std::string getCommitMessage() const;
    bool commitMessageIsSet() const;
    void unsetcommitMessage();
    void setCommitMessage(const std::string& value);

    /// <summary>
    /// **参数解释：** 基于分支名（即基于某分支，向其他分支进行推送） **取值范围：** 不涉及。
    /// </summary>

    std::string getStartBranch() const;
    bool startBranchIsSet() const;
    void unsetstartBranch();
    void setStartBranch(const std::string& value);

    /// <summary>
    /// **参数解释：** 作者邮箱 **取值范围：** 不涉及。
    /// </summary>

    std::string getAuthorEmail() const;
    bool authorEmailIsSet() const;
    void unsetauthorEmail();
    void setAuthorEmail(const std::string& value);

    /// <summary>
    /// **参数解释：** 作者名称 **取值范围：** 不涉及。
    /// </summary>

    std::string getAuthorName() const;
    bool authorNameIsSet() const;
    void unsetauthorName();
    void setAuthorName(const std::string& value);

    /// <summary>
    /// **参数解释：** 改名前地址 **取值范围：** 不涉及。
    /// </summary>

    std::string getPreviousPath() const;
    bool previousPathIsSet() const;
    void unsetpreviousPath();
    void setPreviousPath(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否迁移内容（与content字段不能同时为空） **取值范围：** 不涉及。
    /// </summary>

    bool isInferContent() const;
    bool inferContentIsSet() const;
    void unsetinferContent();
    void setInferContent(bool value);

    /// <summary>
    /// **参数解释：** 文件内容（与infer_content字段不能同时为空） **取值范围：** 不涉及。
    /// </summary>

    std::string getContent() const;
    bool contentIsSet() const;
    void unsetcontent();
    void setContent(const std::string& value);

    /// <summary>
    /// **参数解释：** 编码方式。 **取值范围：** - text。 - base64.
    /// </summary>

    std::string getEncoding() const;
    bool encodingIsSet() const;
    void unsetencoding();
    void setEncoding(const std::string& value);

    /// <summary>
    /// **参数解释：** 上次已知的文件提交ID。 **取值范围：** 不涉及。
    /// </summary>

    std::string getLastCommitId() const;
    bool lastCommitIdIsSet() const;
    void unsetlastCommitId();
    void setLastCommitId(const std::string& value);


protected:
    std::string filePath_;
    bool filePathIsSet_;
    std::string branchName_;
    bool branchNameIsSet_;
    std::string commitMessage_;
    bool commitMessageIsSet_;
    std::string startBranch_;
    bool startBranchIsSet_;
    std::string authorEmail_;
    bool authorEmailIsSet_;
    std::string authorName_;
    bool authorNameIsSet_;
    std::string previousPath_;
    bool previousPathIsSet_;
    bool inferContent_;
    bool inferContentIsSet_;
    std::string content_;
    bool contentIsSet_;
    std::string encoding_;
    bool encodingIsSet_;
    std::string lastCommitId_;
    bool lastCommitIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_RenameFileBodyDto_H_
