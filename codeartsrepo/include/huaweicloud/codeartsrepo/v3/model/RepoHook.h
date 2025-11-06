
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_RepoHook_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_RepoHook_H_


#include <huaweicloud/codeartsrepo/v3/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <cpprest/details/basic_types.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V3_EXPORT  RepoHook
    : public ModelBase
{
public:
    RepoHook();
    virtual ~RepoHook();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RepoHook members

    /// <summary>
    /// 是否触发build_events事件
    /// </summary>

    bool isBuildEvents() const;
    bool buildEventsIsSet() const;
    void unsetbuildEvents();
    void setBuildEvents(bool value);

    /// <summary>
    /// 仓库统计创建的时间
    /// </summary>

    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const utility::datetime& value);

    /// <summary>
    /// 是否使用ssl验证
    /// </summary>

    bool isEnableSslVerification() const;
    bool enableSslVerificationIsSet() const;
    void unsetenableSslVerification();
    void setEnableSslVerification(bool value);

    /// <summary>
    /// hook id
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// 是否触发issues_events事件
    /// </summary>

    bool isIssuesEvents() const;
    bool issuesEventsIsSet() const;
    void unsetissuesEvents();
    void setIssuesEvents(bool value);

    /// <summary>
    /// 是否触发merge_requests_events事件
    /// </summary>

    bool isMergeRequestsEvents() const;
    bool mergeRequestsEventsIsSet() const;
    void unsetmergeRequestsEvents();
    void setMergeRequestsEvents(bool value);

    /// <summary>
    /// 是否触发note_events事件
    /// </summary>

    bool isNoteEvents() const;
    bool noteEventsIsSet() const;
    void unsetnoteEvents();
    void setNoteEvents(bool value);

    /// <summary>
    /// 是否触发pipeline_events事件
    /// </summary>

    bool isPipelineEvents() const;
    bool pipelineEventsIsSet() const;
    void unsetpipelineEvents();
    void setPipelineEvents(bool value);

    /// <summary>
    /// 仓库id
    /// </summary>

    int32_t getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(int32_t value);

    /// <summary>
    /// 是否触发push_events事件
    /// </summary>

    bool isPushEvents() const;
    bool pushEventsIsSet() const;
    void unsetpushEvents();
    void setPushEvents(bool value);

    /// <summary>
    /// 是否触发repository_update_events事件
    /// </summary>

    bool isRepositoryUpdateEvents() const;
    bool repositoryUpdateEventsIsSet() const;
    void unsetrepositoryUpdateEvents();
    void setRepositoryUpdateEvents(bool value);

    /// <summary>
    /// 是否触发tag_push_events事件
    /// </summary>

    bool isTagPushEvents() const;
    bool tagPushEventsIsSet() const;
    void unsettagPushEvents();
    void setTagPushEvents(bool value);

    /// <summary>
    /// 是否触发wiki_page_events事件
    /// </summary>

    bool isWikiPageEvents() const;
    bool wikiPageEventsIsSet() const;
    void unsetwikiPageEvents();
    void setWikiPageEvents(bool value);


protected:
    bool buildEvents_;
    bool buildEventsIsSet_;
    utility::datetime createdAt_;
    bool createdAtIsSet_;
    bool enableSslVerification_;
    bool enableSslVerificationIsSet_;
    int32_t id_;
    bool idIsSet_;
    bool issuesEvents_;
    bool issuesEventsIsSet_;
    bool mergeRequestsEvents_;
    bool mergeRequestsEventsIsSet_;
    bool noteEvents_;
    bool noteEventsIsSet_;
    bool pipelineEvents_;
    bool pipelineEventsIsSet_;
    int32_t projectId_;
    bool projectIdIsSet_;
    bool pushEvents_;
    bool pushEventsIsSet_;
    bool repositoryUpdateEvents_;
    bool repositoryUpdateEventsIsSet_;
    bool tagPushEvents_;
    bool tagPushEventsIsSet_;
    bool wikiPageEvents_;
    bool wikiPageEventsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_RepoHook_H_
