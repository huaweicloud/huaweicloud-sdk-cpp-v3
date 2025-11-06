
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowCommitResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowCommitResponse_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v4/model/CommitStatsDto.h>
#include <huaweicloud/codeartsrepo/v4/model/CommitDto.h>
#include <huaweicloud/codeartsrepo/v4/model/SimpleDiffDto.h>
#include <huaweicloud/codeartsrepo/v4/model/SimpleMergeRequestDetailDto.h>
#include <string>
#include <huaweicloud/codeartsrepo/v4/model/RelatedCommitSimpleDto.h>
#include <huaweicloud/codeartsrepo/v4/model/PipelineBasicDto.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ShowCommitResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowCommitResponse();
    virtual ~ShowCommitResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowCommitResponse members

    /// <summary>
    /// id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 消息
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// 父节点提交ID
    /// </summary>

    std::vector<std::string>& getParentIds();
    bool parentIdsIsSet() const;
    void unsetparentIds();
    void setParentIds(const std::vector<std::string>& value);

    /// <summary>
    /// 创建该分支的时间
    /// </summary>

    std::string getAuthoredDate() const;
    bool authoredDateIsSet() const;
    void unsetauthoredDate();
    void setAuthoredDate(const std::string& value);

    /// <summary>
    /// 创建者名称
    /// </summary>

    std::string getAuthorName() const;
    bool authorNameIsSet() const;
    void unsetauthorName();
    void setAuthorName(const std::string& value);

    /// <summary>
    /// 创建者邮箱
    /// </summary>

    std::string getAuthorEmail() const;
    bool authorEmailIsSet() const;
    void unsetauthorEmail();
    void setAuthorEmail(const std::string& value);

    /// <summary>
    /// 代码提交的日期和时间
    /// </summary>

    std::string getCommittedDate() const;
    bool committedDateIsSet() const;
    void unsetcommittedDate();
    void setCommittedDate(const std::string& value);

    /// <summary>
    /// 提交者名称
    /// </summary>

    std::string getCommitterName() const;
    bool committerNameIsSet() const;
    void unsetcommitterName();
    void setCommitterName(const std::string& value);

    /// <summary>
    /// 提交者邮箱
    /// </summary>

    std::string getCommitterEmail() const;
    bool committerEmailIsSet() const;
    void unsetcommitterEmail();
    void setCommitterEmail(const std::string& value);

    /// <summary>
    /// 是否打开gpg校验
    /// </summary>

    bool isOpenGpgVerified() const;
    bool openGpgVerifiedIsSet() const;
    void unsetopenGpgVerified();
    void setOpenGpgVerified(bool value);

    /// <summary>
    /// 验证状态
    /// </summary>

    int32_t getVerificationStatus() const;
    bool verificationStatusIsSet() const;
    void unsetverificationStatus();
    void setVerificationStatus(int32_t value);

    /// <summary>
    /// GPG公钥的标识符
    /// </summary>

    std::string getGpgPrimaryKeyId() const;
    bool gpgPrimaryKeyIdIsSet() const;
    void unsetgpgPrimaryKeyId();
    void setGpgPrimaryKeyId(const std::string& value);

    /// <summary>
    /// 用户名
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 昵称
    /// </summary>

    std::string getGpgNickName() const;
    bool gpgNickNameIsSet() const;
    void unsetgpgNickName();
    void setGpgNickName(const std::string& value);

    /// <summary>
    /// 租户名
    /// </summary>

    std::string getGpgTenantName() const;
    bool gpgTenantNameIsSet() const;
    void unsetgpgTenantName();
    void setGpgTenantName(const std::string& value);

    /// <summary>
    /// 特定GPG用户相关的信息
    /// </summary>

    std::string getGpgUserName() const;
    bool gpgUserNameIsSet() const;
    void unsetgpgUserName();
    void setGpgUserName(const std::string& value);

    /// <summary>
    /// 短id
    /// </summary>

    std::string getShortId() const;
    bool shortIdIsSet() const;
    void unsetshortId();
    void setShortId(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// 标题
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// author_avatar_url
    /// </summary>

    std::string getAuthorAvatarUrl() const;
    bool authorAvatarUrlIsSet() const;
    void unsetauthorAvatarUrl();
    void setAuthorAvatarUrl(const std::string& value);

    /// <summary>
    /// committer_avatar_url
    /// </summary>

    std::string getCommitterAvatarUrl() const;
    bool committerAvatarUrlIsSet() const;
    void unsetcommitterAvatarUrl();
    void setCommitterAvatarUrl(const std::string& value);

    /// <summary>
    /// only for DevCloud
    /// </summary>

    std::vector<RelatedCommitSimpleDto>& getRelateUrl();
    bool relateUrlIsSet() const;
    void unsetrelateUrl();
    void setRelateUrl(const std::vector<RelatedCommitSimpleDto>& value);

    /// <summary>
    /// 标题
    /// </summary>

    std::string getNickName() const;
    bool nickNameIsSet() const;
    void unsetnickName();
    void setNickName(const std::string& value);

    /// <summary>
    /// tenant_name
    /// </summary>

    std::string getTenantName() const;
    bool tenantNameIsSet() const;
    void unsettenantName();
    void setTenantName(const std::string& value);

    /// <summary>
    /// 用户名
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CommitStatsDto getStats() const;
    bool statsIsSet() const;
    void unsetstats();
    void setStats(const CommitStatsDto& value);

    /// <summary>
    /// 流水线状态，pending为排队，running为运行中，success为成功，failed为失败，canceled为取消，skipped为跳过，timedout为超时
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PipelineBasicDto getLastPipeline() const;
    bool lastPipelineIsSet() const;
    void unsetlastPipeline();
    void setLastPipeline(const PipelineBasicDto& value);

    /// <summary>
    /// **参数解释：** 仓库ID。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    SimpleMergeRequestDetailDto getMergeRequest() const;
    bool mergeRequestIsSet() const;
    void unsetmergeRequest();
    void setMergeRequest(const SimpleMergeRequestDetailDto& value);

    /// <summary>
    /// **参数解释：** 代码变更内容。 **取值范围：** 不涉及。
    /// </summary>

    std::vector<SimpleDiffDto>& getCodeChanges();
    bool codeChangesIsSet() const;
    void unsetcodeChanges();
    void setCodeChanges(const std::vector<SimpleDiffDto>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string message_;
    bool messageIsSet_;
    std::vector<std::string> parentIds_;
    bool parentIdsIsSet_;
    std::string authoredDate_;
    bool authoredDateIsSet_;
    std::string authorName_;
    bool authorNameIsSet_;
    std::string authorEmail_;
    bool authorEmailIsSet_;
    std::string committedDate_;
    bool committedDateIsSet_;
    std::string committerName_;
    bool committerNameIsSet_;
    std::string committerEmail_;
    bool committerEmailIsSet_;
    bool openGpgVerified_;
    bool openGpgVerifiedIsSet_;
    int32_t verificationStatus_;
    bool verificationStatusIsSet_;
    std::string gpgPrimaryKeyId_;
    bool gpgPrimaryKeyIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string gpgNickName_;
    bool gpgNickNameIsSet_;
    std::string gpgTenantName_;
    bool gpgTenantNameIsSet_;
    std::string gpgUserName_;
    bool gpgUserNameIsSet_;
    std::string shortId_;
    bool shortIdIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string title_;
    bool titleIsSet_;
    std::string authorAvatarUrl_;
    bool authorAvatarUrlIsSet_;
    std::string committerAvatarUrl_;
    bool committerAvatarUrlIsSet_;
    std::vector<RelatedCommitSimpleDto> relateUrl_;
    bool relateUrlIsSet_;
    std::string nickName_;
    bool nickNameIsSet_;
    std::string tenantName_;
    bool tenantNameIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    CommitStatsDto stats_;
    bool statsIsSet_;
    std::string status_;
    bool statusIsSet_;
    PipelineBasicDto lastPipeline_;
    bool lastPipelineIsSet_;
    int32_t projectId_;
    bool projectIdIsSet_;
    SimpleMergeRequestDetailDto mergeRequest_;
    bool mergeRequestIsSet_;
    std::vector<SimpleDiffDto> codeChanges_;
    bool codeChangesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowCommitResponse_H_
