
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_CreateCommitRequestBody_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_CreateCommitRequestBody_H_


#include <huaweicloud/codehub/v3/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/codehub/v3/model/CommitAction.h>

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
class HUAWEICLOUD_CODEHUB_V3_EXPORT  CreateCommitRequestBody
    : public ModelBase
{
public:
    CreateCommitRequestBody();
    virtual ~CreateCommitRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateCommitRequestBody members

    /// <summary>
    /// 目标分支
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
    /// 创建分支时，新的分支名
    /// </summary>

    std::string getStartBranch() const;
    bool startBranchIsSet() const;
    void unsetstartBranch();
    void setStartBranch(const std::string& value);

    /// <summary>
    /// 提交处理列表
    /// </summary>

    std::vector<CommitAction>& getActions();
    bool actionsIsSet() const;
    void unsetactions();
    void setActions(const std::vector<CommitAction>& value);

    /// <summary>
    /// 提交作者的电子邮件地址
    /// </summary>

    std::string getAuthorEmail() const;
    bool authorEmailIsSet() const;
    void unsetauthorEmail();
    void setAuthorEmail(const std::string& value);

    /// <summary>
    /// 提交作者的名称
    /// </summary>

    std::string getAuthorName() const;
    bool authorNameIsSet() const;
    void unsetauthorName();
    void setAuthorName(const std::string& value);

    /// <summary>
    /// 是否包括提交统计信息。默认值为true
    /// </summary>

    bool isStats() const;
    bool statsIsSet() const;
    void unsetstats();
    void setStats(bool value);

    /// <summary>
    /// 是否覆盖目标分支。当true时，使用基于start_branch的新提交覆盖目标分支
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
    std::string startBranch_;
    bool startBranchIsSet_;
    std::vector<CommitAction> actions_;
    bool actionsIsSet_;
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

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_CreateCommitRequestBody_H_
