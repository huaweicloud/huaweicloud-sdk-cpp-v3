
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_CommitParams_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_CommitParams_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codehub/v4/model/ActionDto.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 提交信息参数。
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  CommitParams
    : public ModelBase
{
public:
    CommitParams();
    virtual ~CommitParams();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CommitParams members

    /// <summary>
    /// **参数解释：** 分支名称。 **取值范围：** 不涉及。
    /// </summary>

    std::string getBranch() const;
    bool branchIsSet() const;
    void unsetbranch();
    void setBranch(const std::string& value);

    /// <summary>
    /// **参数解释：** 提交信息。 **取值范围：** 不涉及。
    /// </summary>

    std::string getCommitMessage() const;
    bool commitMessageIsSet() const;
    void unsetcommitMessage();
    void setCommitMessage(const std::string& value);

    /// <summary>
    /// **参数解释：** 在提交时执行的操作。 **取值范围：** 不涉及。
    /// </summary>

    std::vector<ActionDto>& getActions();
    bool actionsIsSet() const;
    void unsetactions();
    void setActions(const std::vector<ActionDto>& value);

    /// <summary>
    /// **参数解释：** 从该分支开始新的提交。  **取值范围：** 不涉及。
    /// </summary>

    std::string getStartBranch() const;
    bool startBranchIsSet() const;
    void unsetstartBranch();
    void setStartBranch(const std::string& value);

    /// <summary>
    /// **参数解释：** 作者邮箱。  **取值范围：** 不涉及。
    /// </summary>

    std::string getAuthorEmail() const;
    bool authorEmailIsSet() const;
    void unsetauthorEmail();
    void setAuthorEmail(const std::string& value);

    /// <summary>
    /// **参数解释：** 作者名称。  **取值范围：** 不涉及。
    /// </summary>

    std::string getAuthorName() const;
    bool authorNameIsSet() const;
    void unsetauthorName();
    void setAuthorName(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否包括提交统计信息。 **取值范围：** - true，包括提交统计信息。 - false，不包括提交统计信息
    /// </summary>

    bool isStats() const;
    bool statsIsSet() const;
    void unsetstats();
    void setStats(bool value);

    /// <summary>
    /// **参数解释：** 是否强制提交。 **取值范围：** - true，强制提交。 - false，非强制提交
    /// </summary>

    bool isForce() const;
    bool forceIsSet() const;
    void unsetforce();
    void setForce(bool value);


protected:
    std::string branch_;
    bool branchIsSet_;
    std::string commitMessage_;
    bool commitMessageIsSet_;
    std::vector<ActionDto> actions_;
    bool actionsIsSet_;
    std::string startBranch_;
    bool startBranchIsSet_;
    std::string authorEmail_;
    bool authorEmailIsSet_;
    std::string authorName_;
    bool authorNameIsSet_;
    bool stats_;
    bool statsIsSet_;
    bool force_;
    bool forceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_CommitParams_H_
