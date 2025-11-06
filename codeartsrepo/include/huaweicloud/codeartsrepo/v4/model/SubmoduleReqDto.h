
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_SubmoduleReqDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_SubmoduleReqDto_H_


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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  SubmoduleReqDto
    : public ModelBase
{
public:
    SubmoduleReqDto();
    virtual ~SubmoduleReqDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SubmoduleReqDto members

    /// <summary>
    /// **参数解释：** 分支名。 **取值范围：** 最小1个字节，最大200字节 **约束限制：** 该仓库下的已有分支。
    /// </summary>

    std::string getBranchName() const;
    bool branchNameIsSet() const;
    void unsetbranchName();
    void setBranchName(const std::string& value);

    /// <summary>
    /// 子模块在该仓库下的文件路径
    /// </summary>

    std::string getFilePath() const;
    bool filePathIsSet() const;
    void unsetfilePath();
    void setFilePath(const std::string& value);

    /// <summary>
    /// 子模块所在仓库的仓库ID
    /// </summary>

    std::string getSubrepoId() const;
    bool subrepoIdIsSet() const;
    void unsetsubrepoId();
    void setSubrepoId(const std::string& value);

    /// <summary>
    /// 提交信息
    /// </summary>

    std::string getCommitMessage() const;
    bool commitMessageIsSet() const;
    void unsetcommitMessage();
    void setCommitMessage(const std::string& value);

    /// <summary>
    /// **参数解释：** 子模块分支名。 **取值范围：** 最小1个字节，最大200字节 **约束限制：** 目标仓库下的已有分支。
    /// </summary>

    std::string getSubrepoBranch() const;
    bool subrepoBranchIsSet() const;
    void unsetsubrepoBranch();
    void setSubrepoBranch(const std::string& value);


protected:
    std::string branchName_;
    bool branchNameIsSet_;
    std::string filePath_;
    bool filePathIsSet_;
    std::string subrepoId_;
    bool subrepoIdIsSet_;
    std::string commitMessage_;
    bool commitMessageIsSet_;
    std::string subrepoBranch_;
    bool subrepoBranchIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_SubmoduleReqDto_H_
