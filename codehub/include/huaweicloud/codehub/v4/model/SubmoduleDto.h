
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_SubmoduleDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_SubmoduleDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  SubmoduleDto
    : public ModelBase
{
public:
    SubmoduleDto();
    virtual ~SubmoduleDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SubmoduleDto members

    /// <summary>
    /// **参数解释：** 仓库ID。
    /// </summary>

    int32_t getRepoId() const;
    bool repoIdIsSet() const;
    void unsetrepoId();
    void setRepoId(int32_t value);

    /// <summary>
    /// **参数解释：** 分支名。 **取值范围：** 最小1个字节，最大200字节。
    /// </summary>

    std::string getBranch() const;
    bool branchIsSet() const;
    void unsetbranch();
    void setBranch(const std::string& value);

    /// <summary>
    /// **参数解释：** 分支名。 **取值范围：** 最小1个字节，最大200字节
    /// </summary>

    std::string getPath() const;
    bool pathIsSet() const;
    void unsetpath();
    void setPath(const std::string& value);

    /// <summary>
    /// **参数解释：** 子模块Git地址。
    /// </summary>

    std::string getGitUrl() const;
    bool gitUrlIsSet() const;
    void unsetgitUrl();
    void setGitUrl(const std::string& value);

    /// <summary>
    /// **参数解释：** 子模块分支名。 **取值范围：** 最小1个字节，最大200字节。
    /// </summary>

    std::string getSubmoduleBranch() const;
    bool submoduleBranchIsSet() const;
    void unsetsubmoduleBranch();
    void setSubmoduleBranch(const std::string& value);

    /// <summary>
    /// 组织名/组织名.../仓库名
    /// </summary>

    std::string getNamespaceUuid() const;
    bool namespaceUuidIsSet() const;
    void unsetnamespaceUuid();
    void setNamespaceUuid(const std::string& value);

    /// <summary>
    /// **参数解释：** 子模块仓库ID。
    /// </summary>

    int32_t getSubmoduleRepoId() const;
    bool submoduleRepoIdIsSet() const;
    void unsetsubmoduleRepoId();
    void setSubmoduleRepoId(int32_t value);

    /// <summary>
    /// **参数解释：** 子模块仓库名称。
    /// </summary>

    std::string getRepoName() const;
    bool repoNameIsSet() const;
    void unsetrepoName();
    void setRepoName(const std::string& value);

    /// <summary>
    /// **参数解释：** 子模块仓库提交。
    /// </summary>

    std::string getSubCommitId() const;
    bool subCommitIdIsSet() const;
    void unsetsubCommitId();
    void setSubCommitId(const std::string& value);

    /// <summary>
    /// **参数解释：** 部署密钥同步状态。 **取值范围：** - 0，不同步。 - 1，同步。
    /// </summary>

    int32_t getDeployKeyStatus() const;
    bool deployKeyStatusIsSet() const;
    void unsetdeployKeyStatus();
    void setDeployKeyStatus(int32_t value);

    /// <summary>
    /// **参数解释：** 子模块状态。 **取值范围：** - 0，异常。 - 1，正常。
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);


protected:
    int32_t repoId_;
    bool repoIdIsSet_;
    std::string branch_;
    bool branchIsSet_;
    std::string path_;
    bool pathIsSet_;
    std::string gitUrl_;
    bool gitUrlIsSet_;
    std::string submoduleBranch_;
    bool submoduleBranchIsSet_;
    std::string namespaceUuid_;
    bool namespaceUuidIsSet_;
    int32_t submoduleRepoId_;
    bool submoduleRepoIdIsSet_;
    std::string repoName_;
    bool repoNameIsSet_;
    std::string subCommitId_;
    bool subCommitIdIsSet_;
    int32_t deployKeyStatus_;
    bool deployKeyStatusIsSet_;
    int32_t status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_SubmoduleDto_H_
