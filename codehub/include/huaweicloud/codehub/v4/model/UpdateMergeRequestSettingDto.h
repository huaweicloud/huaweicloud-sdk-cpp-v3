
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_UpdateMergeRequestSettingDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_UpdateMergeRequestSettingDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新合并请求设置请求体
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  UpdateMergeRequestSettingDto
    : public ModelBase
{
public:
    UpdateMergeRequestSettingDto();
    virtual ~UpdateMergeRequestSettingDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateMergeRequestSettingDto members

    /// <summary>
    /// **参数解释：** 合入模式
    /// </summary>

    std::string getReviewMode() const;
    bool reviewModeIsSet() const;
    void unsetreviewMode();
    void setReviewMode(const std::string& value);

    /// <summary>
    /// **参数解释：** 评审问题全部解决才能合入
    /// </summary>

    bool isOnlyAllowMergeIfAllDiscussionsAreResolved() const;
    bool onlyAllowMergeIfAllDiscussionsAreResolvedIsSet() const;
    void unsetonlyAllowMergeIfAllDiscussionsAreResolved();
    void setOnlyAllowMergeIfAllDiscussionsAreResolved(bool value);

    /// <summary>
    /// **参数解释：** 必须与CodeArts Req关联
    /// </summary>

    bool isMustRelateIssue() const;
    bool mustRelateIssueIsSet() const;
    void unsetmustRelateIssue();
    void setMustRelateIssue(bool value);

    /// <summary>
    /// **参数解释：** 只能关联一个单号
    /// </summary>

    bool isOnlyAllowOneIssueCheckPassed() const;
    bool onlyAllowOneIssueCheckPassedIsSet() const;
    void unsetonlyAllowOneIssueCheckPassed();
    void setOnlyAllowOneIssueCheckPassed(bool value);

    /// <summary>
    /// **参数解释：** 必须与CodeArts Req关联-所有E2E单号校验必须通过
    /// </summary>

    bool isNeedAllIssuesCheckPassed() const;
    bool needAllIssuesCheckPassedIsSet() const;
    void unsetneedAllIssuesCheckPassed();
    void setNeedAllIssuesCheckPassed(bool value);

    /// <summary>
    /// **参数解释：** 必须与CodeArts Req关联-选择目标分支配置合并请求策略(分支以逗号分支的字符串)
    /// </summary>

    std::string getNeedRelateIssueBranches() const;
    bool needRelateIssueBranchesIsSet() const;
    void unsetneedRelateIssueBranches();
    void setNeedRelateIssueBranches(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否将星级评价作为合入门禁
    /// </summary>

    bool isEvaluationMergeGate() const;
    bool evaluationMergeGateIsSet() const;
    void unsetevaluationMergeGate();
    void setEvaluationMergeGate(bool value);

    /// <summary>
    /// **参数解释：** 是否将星级评价作为合入门禁-参与星级评价角色。 29：勾选开发者 30：勾选开发者，Committer 35：勾选Committer 40：都不勾选
    /// </summary>

    int32_t getEvaluationRole() const;
    bool evaluationRoleIsSet() const;
    void unsetevaluationRole();
    void setEvaluationRole(int32_t value);

    /// <summary>
    /// **参数解释：** 禁止合入自己创建的合并请求
    /// </summary>

    bool isDisableMergeBySelf() const;
    bool disableMergeBySelfIsSet() const;
    void unsetdisableMergeBySelf();
    void setDisableMergeBySelf(bool value);

    /// <summary>
    /// **参数解释：** 禁止审核自己创建的合并请求
    /// </summary>

    bool isDisableApproveBySelf() const;
    bool disableApproveBySelfIsSet() const;
    void unsetdisableApproveBySelf();
    void setDisableApproveBySelf(bool value);

    /// <summary>
    /// **参数解释：** 禁止检视自己创建的合并请求
    /// </summary>

    bool isDisableReviewBySelf() const;
    bool disableReviewBySelfIsSet() const;
    void unsetdisableReviewBySelf();
    void setDisableReviewBySelf(bool value);

    /// <summary>
    /// **参数解释：** 允许仓库管理员及项目经理强制合入
    /// </summary>

    bool isCanForceMerge() const;
    bool canForceMergeIsSet() const;
    void unsetcanForceMerge();
    void setCanForceMerge(bool value);

    /// <summary>
    /// **参数解释：** 允许合并请求合并或关闭后继续做代码检视和评论
    /// </summary>

    bool isAddNotesAfterMerged() const;
    bool addNotesAfterMergedIsSet() const;
    void unsetaddNotesAfterMerged();
    void setAddNotesAfterMerged(bool value);

    /// <summary>
    /// **参数解释：** 是否将自动合并的MR状态标记为关闭状态
    /// </summary>

    bool isMarkAutoMergedMrAsClosed() const;
    bool markAutoMergedMrAsClosedIsSet() const;
    void unsetmarkAutoMergedMrAsClosed();
    void setMarkAutoMergedMrAsClosed(bool value);

    /// <summary>
    /// **参数解释：** 不能重新打开一个已经关闭的合并请求
    /// </summary>

    bool isCanReopen() const;
    bool canReopenIsSet() const;
    void unsetcanReopen();
    void setCanReopen(bool value);

    /// <summary>
    /// **参数解释：** 新建合并请求，默认开启合并后删除源分支
    /// </summary>

    bool isDeleteSourceBranchWhenMerged() const;
    bool deleteSourceBranchWhenMergedIsSet() const;
    void unsetdeleteSourceBranchWhenMerged();
    void setDeleteSourceBranchWhenMerged(bool value);

    /// <summary>
    /// **参数解释：** 禁止Squash合并（合入MR时禁止Squash合并）
    /// </summary>

    bool isDisableSquashMerge() const;
    bool disableSquashMergeIsSet() const;
    void unsetdisableSquashMerge();
    void setDisableSquashMerge(bool value);

    /// <summary>
    /// **参数解释：** 新建合并请求，默认开启Squash合并
    /// </summary>

    bool isAutoSquashMerge() const;
    bool autoSquashMergeIsSet() const;
    void unsetautoSquashMerge();
    void setAutoSquashMerge(bool value);

    /// <summary>
    /// **参数解释：** 合并模式。 merge：通过 Merge Commit 合并 rebase_merge：通过 Merge Commit 合并(记录半线性历史) ff：Fast-forward 合并
    /// </summary>

    std::string getMergeMethod() const;
    bool mergeMethodIsSet() const;
    void unsetmergeMethod();
    void setMergeMethod(const std::string& value);

    /// <summary>
    /// **参数解释：** Squash合并不产生Merge节点
    /// </summary>

    bool isSquashMergeWithNoMergeCommit() const;
    bool squashMergeWithNoMergeCommitIsSet() const;
    void unsetsquashMergeWithNoMergeCommit();
    void setSquashMergeWithNoMergeCommit(bool value);

    /// <summary>
    /// **参数解释：** merged_by：使用MR合入者生成Merge Commit created_by：使用MR创建者生成Merge Commit
    /// </summary>

    std::string getMergedCommitAuthor() const;
    bool mergedCommitAuthorIsSet() const;
    void unsetmergedCommitAuthor();
    void setMergedCommitAuthor(const std::string& value);

    /// <summary>
    /// **参数解释：** 启用MR自定义评价维度分类（MR评价设置）
    /// </summary>

    bool isEnableCustomEvaluation() const;
    bool enableCustomEvaluationIsSet() const;
    void unsetenableCustomEvaluation();
    void setEnableCustomEvaluation(bool value);

    /// <summary>
    /// **参数解释：** 评价维度（MR评价设置）
    /// </summary>

    std::vector<std::string>& getEvaluationTypes();
    bool evaluationTypesIsSet() const;
    void unsetevaluationTypes();
    void setEvaluationTypes(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释：** 打分模式最低合入分数。
    /// </summary>

    int32_t getOnlyAllowMergeIfVoteBiggerThan() const;
    bool onlyAllowMergeIfVoteBiggerThanIsSet() const;
    void unsetonlyAllowMergeIfVoteBiggerThan();
    void setOnlyAllowMergeIfVoteBiggerThan(int32_t value);

    /// <summary>
    /// **参数解释：** 仅合并人和合并合并请求。
    /// </summary>

    bool isOnlyAssigneeCanMerge() const;
    bool onlyAssigneeCanMergeIsSet() const;
    void unsetonlyAssigneeCanMerge();
    void setOnlyAssigneeCanMerge(bool value);


protected:
    std::string reviewMode_;
    bool reviewModeIsSet_;
    bool onlyAllowMergeIfAllDiscussionsAreResolved_;
    bool onlyAllowMergeIfAllDiscussionsAreResolvedIsSet_;
    bool mustRelateIssue_;
    bool mustRelateIssueIsSet_;
    bool onlyAllowOneIssueCheckPassed_;
    bool onlyAllowOneIssueCheckPassedIsSet_;
    bool needAllIssuesCheckPassed_;
    bool needAllIssuesCheckPassedIsSet_;
    std::string needRelateIssueBranches_;
    bool needRelateIssueBranchesIsSet_;
    bool evaluationMergeGate_;
    bool evaluationMergeGateIsSet_;
    int32_t evaluationRole_;
    bool evaluationRoleIsSet_;
    bool disableMergeBySelf_;
    bool disableMergeBySelfIsSet_;
    bool disableApproveBySelf_;
    bool disableApproveBySelfIsSet_;
    bool disableReviewBySelf_;
    bool disableReviewBySelfIsSet_;
    bool canForceMerge_;
    bool canForceMergeIsSet_;
    bool addNotesAfterMerged_;
    bool addNotesAfterMergedIsSet_;
    bool markAutoMergedMrAsClosed_;
    bool markAutoMergedMrAsClosedIsSet_;
    bool canReopen_;
    bool canReopenIsSet_;
    bool deleteSourceBranchWhenMerged_;
    bool deleteSourceBranchWhenMergedIsSet_;
    bool disableSquashMerge_;
    bool disableSquashMergeIsSet_;
    bool autoSquashMerge_;
    bool autoSquashMergeIsSet_;
    std::string mergeMethod_;
    bool mergeMethodIsSet_;
    bool squashMergeWithNoMergeCommit_;
    bool squashMergeWithNoMergeCommitIsSet_;
    std::string mergedCommitAuthor_;
    bool mergedCommitAuthorIsSet_;
    bool enableCustomEvaluation_;
    bool enableCustomEvaluationIsSet_;
    std::vector<std::string> evaluationTypes_;
    bool evaluationTypesIsSet_;
    int32_t onlyAllowMergeIfVoteBiggerThan_;
    bool onlyAllowMergeIfVoteBiggerThanIsSet_;
    bool onlyAssigneeCanMerge_;
    bool onlyAssigneeCanMergeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_UpdateMergeRequestSettingDto_H_
