
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ShowGroupSettingsInheritCfgResponse_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ShowGroupSettingsInheritCfgResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ShowGroupSettingsInheritCfgResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowGroupSettingsInheritCfgResponse();
    virtual ~ShowGroupSettingsInheritCfgResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowGroupSettingsInheritCfgResponse members

    /// <summary>
    /// **参数解释：** 是否可用。
    /// </summary>

    bool isCanUpdate() const;
    bool canUpdateIsSet() const;
    void unsetcanUpdate();
    void setCanUpdate(bool value);

    /// <summary>
    /// **参数解释：** 记录id。
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// **参数解释：** 项目id。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getProductId() const;
    bool productIdIsSet() const;
    void unsetproductId();
    void setProductId(const std::string& value);

    /// <summary>
    /// **参数解释：** 代码组id。
    /// </summary>

    int32_t getNamespaceId() const;
    bool namespaceIdIsSet() const;
    void unsetnamespaceId();
    void setNamespaceId(int32_t value);

    /// <summary>
    /// **参数解释：** 父id。
    /// </summary>

    int32_t getParentId() const;
    bool parentIdIsSet() const;
    void unsetparentId();
    void setParentId(int32_t value);

    /// <summary>
    /// **参数解释：** 排序id。
    /// </summary>

    int32_t getOwnership() const;
    bool ownershipIsSet() const;
    void unsetownership();
    void setOwnership(int32_t value);

    /// <summary>
    /// **参数解释：** 排序id。
    /// </summary>

    int32_t getPbi() const;
    bool pbiIsSet() const;
    void unsetpbi();
    void setPbi(int32_t value);

    /// <summary>
    /// **参数解释：** 保护分支策略。
    /// </summary>

    int32_t getProtectedBranches() const;
    bool protectedBranchesIsSet() const;
    void unsetprotectedBranches();
    void setProtectedBranches(int32_t value);

    /// <summary>
    /// **参数解释：** 保护tag策略。
    /// </summary>

    int32_t getProtectedTags() const;
    bool protectedTagsIsSet() const;
    void unsetprotectedTags();
    void setProtectedTags(int32_t value);

    /// <summary>
    /// **参数解释：** 推送规则策略。
    /// </summary>

    int32_t getPushRules() const;
    bool pushRulesIsSet() const;
    void unsetpushRules();
    void setPushRules(int32_t value);

    /// <summary>
    /// **参数解释：** cr策略。
    /// </summary>

    int32_t getChangeRequests() const;
    bool changeRequestsIsSet() const;
    void unsetchangeRequests();
    void setChangeRequests(int32_t value);

    /// <summary>
    /// **参数解释：** 排序id。
    /// </summary>

    int32_t getCustomCtrlItems() const;
    bool customCtrlItemsIsSet() const;
    void unsetcustomCtrlItems();
    void setCustomCtrlItems(int32_t value);

    /// <summary>
    /// **参数解释：** 排序id。
    /// </summary>

    int32_t getReviews() const;
    bool reviewsIsSet() const;
    void unsetreviews();
    void setReviews(int32_t value);

    /// <summary>
    /// **参数解释：** issue继承模式。
    /// </summary>

    int32_t getIssues() const;
    bool issuesIsSet() const;
    void unsetissues();
    void setIssues(int32_t value);

    /// <summary>
    /// **参数解释：** 排序id。
    /// </summary>

    int32_t getCrEvaluation() const;
    bool crEvaluationIsSet() const;
    void unsetcrEvaluation();
    void setCrEvaluation(int32_t value);

    /// <summary>
    /// **参数解释：** e2e策略。
    /// </summary>

    int32_t getE2eSettings() const;
    bool e2eSettingsIsSet() const;
    void unsete2eSettings();
    void setE2eSettings(int32_t value);

    /// <summary>
    /// **参数解释：** 提交策略。
    /// </summary>

    int32_t getCommitterSettings() const;
    bool committerSettingsIsSet() const;
    void unsetcommitterSettings();
    void setCommitterSettings(int32_t value);

    /// <summary>
    /// **参数解释：** webhook策略。
    /// </summary>

    int32_t getWebhookSettings() const;
    bool webhookSettingsIsSet() const;
    void unsetwebhookSettings();
    void setWebhookSettings(int32_t value);

    /// <summary>
    /// **参数解释：** 排序id。
    /// </summary>

    int32_t getStreamEventSettings() const;
    bool streamEventSettingsIsSet() const;
    void unsetstreamEventSettings();
    void setStreamEventSettings(int32_t value);

    /// <summary>
    /// **参数解释：** 排序id。
    /// </summary>

    int32_t getPipelineSettings() const;
    bool pipelineSettingsIsSet() const;
    void unsetpipelineSettings();
    void setPipelineSettings(int32_t value);

    /// <summary>
    /// **参数解释：** issue模板继承模式。
    /// </summary>

    int32_t getIssueTemplates() const;
    bool issueTemplatesIsSet() const;
    void unsetissueTemplates();
    void setIssueTemplates(int32_t value);

    /// <summary>
    /// **参数解释：** 排序id。
    /// </summary>

    int32_t getCrCommentEmplates() const;
    bool crCommentEmplatesIsSet() const;
    void unsetcrCommentEmplates();
    void setCrCommentEmplates(int32_t value);

    /// <summary>
    /// **参数解释：** 排序id。
    /// </summary>

    int32_t getMergeRequests() const;
    bool mergeRequestsIsSet() const;
    void unsetmergeRequests();
    void setMergeRequests(int32_t value);

    /// <summary>
    /// **参数解释：** 合并请求策略。
    /// </summary>

    int32_t getMrBranchPolicies() const;
    bool mrBranchPoliciesIsSet() const;
    void unsetmrBranchPolicies();
    void setMrBranchPolicies(int32_t value);

    /// <summary>
    /// **参数解释：** 仓库策略。
    /// </summary>

    int32_t getRepositorySettings() const;
    bool repositorySettingsIsSet() const;
    void unsetrepositorySettings();
    void setRepositorySettings(int32_t value);

    /// <summary>
    /// **参数解释：** 部署秘钥策略。
    /// </summary>

    int32_t getDeployKeys() const;
    bool deployKeysIsSet() const;
    void unsetdeployKeys();
    void setDeployKeys(int32_t value);

    /// <summary>
    /// **参数解释：** 水印策略。
    /// </summary>

    int32_t getWatermark() const;
    bool watermarkIsSet() const;
    void unsetwatermark();
    void setWatermark(int32_t value);

    /// <summary>
    /// **参数解释：** 创建时间。
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 更新时间。
    /// </summary>

    std::string getUpdateAt() const;
    bool updateAtIsSet() const;
    void unsetupdateAt();
    void setUpdateAt(const std::string& value);


protected:
    bool canUpdate_;
    bool canUpdateIsSet_;
    int32_t id_;
    bool idIsSet_;
    std::string productId_;
    bool productIdIsSet_;
    int32_t namespaceId_;
    bool namespaceIdIsSet_;
    int32_t parentId_;
    bool parentIdIsSet_;
    int32_t ownership_;
    bool ownershipIsSet_;
    int32_t pbi_;
    bool pbiIsSet_;
    int32_t protectedBranches_;
    bool protectedBranchesIsSet_;
    int32_t protectedTags_;
    bool protectedTagsIsSet_;
    int32_t pushRules_;
    bool pushRulesIsSet_;
    int32_t changeRequests_;
    bool changeRequestsIsSet_;
    int32_t customCtrlItems_;
    bool customCtrlItemsIsSet_;
    int32_t reviews_;
    bool reviewsIsSet_;
    int32_t issues_;
    bool issuesIsSet_;
    int32_t crEvaluation_;
    bool crEvaluationIsSet_;
    int32_t e2eSettings_;
    bool e2eSettingsIsSet_;
    int32_t committerSettings_;
    bool committerSettingsIsSet_;
    int32_t webhookSettings_;
    bool webhookSettingsIsSet_;
    int32_t streamEventSettings_;
    bool streamEventSettingsIsSet_;
    int32_t pipelineSettings_;
    bool pipelineSettingsIsSet_;
    int32_t issueTemplates_;
    bool issueTemplatesIsSet_;
    int32_t crCommentEmplates_;
    bool crCommentEmplatesIsSet_;
    int32_t mergeRequests_;
    bool mergeRequestsIsSet_;
    int32_t mrBranchPolicies_;
    bool mrBranchPoliciesIsSet_;
    int32_t repositorySettings_;
    bool repositorySettingsIsSet_;
    int32_t deployKeys_;
    bool deployKeysIsSet_;
    int32_t watermark_;
    bool watermarkIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string updateAt_;
    bool updateAtIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ShowGroupSettingsInheritCfgResponse_H_
