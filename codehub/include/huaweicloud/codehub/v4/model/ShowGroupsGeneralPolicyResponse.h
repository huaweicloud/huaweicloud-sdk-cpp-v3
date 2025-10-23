
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ShowGroupsGeneralPolicyResponse_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ShowGroupsGeneralPolicyResponse_H_


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
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ShowGroupsGeneralPolicyResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowGroupsGeneralPolicyResponse();
    virtual ~ShowGroupsGeneralPolicyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowGroupsGeneralPolicyResponse members

    /// <summary>
    /// **参数解释：** 是否禁用fork。
    /// </summary>

    bool isDisableFork() const;
    bool disableForkIsSet() const;
    void unsetdisableFork();
    void setDisableFork(bool value);

    /// <summary>
    /// **参数解释：** 是否禁止开发者创建分支。
    /// </summary>

    bool isForbiddenDeveloperCreateBranch() const;
    bool forbiddenDeveloperCreateBranchIsSet() const;
    void unsetforbiddenDeveloperCreateBranch();
    void setForbiddenDeveloperCreateBranch(bool value);

    /// <summary>
    /// **参数解释：** 是否禁用开发者创建tag。
    /// </summary>

    bool isForbiddenDeveloperCreateTag() const;
    bool forbiddenDeveloperCreateTagIsSet() const;
    void unsetforbiddenDeveloperCreateTag();
    void setForbiddenDeveloperCreateTag(bool value);

    /// <summary>
    /// **参数解释：** 禁止开发者创建标签。
    /// </summary>

    bool isForbiddenCommitterCreateBranch() const;
    bool forbiddenCommitterCreateBranchIsSet() const;
    void unsetforbiddenCommitterCreateBranch();
    void setForbiddenCommitterCreateBranch(bool value);

    /// <summary>
    /// **参数解释：** 分支名称正则表达式。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getBranchNameRegex() const;
    bool branchNameRegexIsSet() const;
    void unsetbranchNameRegex();
    void setBranchNameRegex(const std::string& value);

    /// <summary>
    /// **参数解释：** 标签名正则表达式。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getTagNameRegex() const;
    bool tagNameRegexIsSet() const;
    void unsettagNameRegex();
    void setTagNameRegex(const std::string& value);

    /// <summary>
    /// **参数解释：** 生成合并请求预合并。
    /// </summary>

    bool isGeneratePreMergeRef() const;
    bool generatePreMergeRefIsSet() const;
    void unsetgeneratePreMergeRef();
    void setGeneratePreMergeRef(bool value);

    /// <summary>
    /// **参数解释：** 是否禁止repo访问。
    /// </summary>

    bool isForbiddenGitlabAccess() const;
    bool forbiddenGitlabAccessIsSet() const;
    void unsetforbiddenGitlabAccess();
    void setForbiddenGitlabAccess(bool value);

    /// <summary>
    /// **参数解释：** MR rebase是否禁止触发webhook事件。
    /// </summary>

    bool isRebaseDisableTriggerWebhook() const;
    bool rebaseDisableTriggerWebhookIsSet() const;
    void unsetrebaseDisableTriggerWebhook();
    void setRebaseDisableTriggerWebhook(bool value);

    /// <summary>
    /// **参数解释：** 是否开启gpg公钥验证。
    /// </summary>

    bool isOpenGpgVerified() const;
    bool openGpgVerifiedIsSet() const;
    void unsetopenGpgVerified();
    void setOpenGpgVerified(bool value);


protected:
    bool disableFork_;
    bool disableForkIsSet_;
    bool forbiddenDeveloperCreateBranch_;
    bool forbiddenDeveloperCreateBranchIsSet_;
    bool forbiddenDeveloperCreateTag_;
    bool forbiddenDeveloperCreateTagIsSet_;
    bool forbiddenCommitterCreateBranch_;
    bool forbiddenCommitterCreateBranchIsSet_;
    std::string branchNameRegex_;
    bool branchNameRegexIsSet_;
    std::string tagNameRegex_;
    bool tagNameRegexIsSet_;
    bool generatePreMergeRef_;
    bool generatePreMergeRefIsSet_;
    bool forbiddenGitlabAccess_;
    bool forbiddenGitlabAccessIsSet_;
    bool rebaseDisableTriggerWebhook_;
    bool rebaseDisableTriggerWebhookIsSet_;
    bool openGpgVerified_;
    bool openGpgVerifiedIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ShowGroupsGeneralPolicyResponse_H_
