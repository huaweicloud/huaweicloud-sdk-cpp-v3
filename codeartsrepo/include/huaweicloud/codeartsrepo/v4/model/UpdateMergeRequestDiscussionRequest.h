
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_UpdateMergeRequestDiscussionRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_UpdateMergeRequestDiscussionRequest_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartsrepo/v4/model/UpdateMergeRequestNoteDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  UpdateMergeRequestDiscussionRequest
    : public ModelBase
{
public:
    UpdateMergeRequestDiscussionRequest();
    virtual ~UpdateMergeRequestDiscussionRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateMergeRequestDiscussionRequest members

    /// <summary>
    /// **参数解释：** 仓库的ID，通过[[查询用户所有仓库](https://support.huaweicloud.com/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws)[[查询用户所有仓库](https://support.huaweicloud.com/intl/en-us/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws_hk)[查询项目列表](tag:hcs,hcs_sm)接口查询项目列表获取。 **约束限制：** 不涉及。
    /// </summary>

    int32_t getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(int32_t value);

    /// <summary>
    /// **参数解释：**  合并请求 iid。
    /// </summary>

    int32_t getMergeRequestIid() const;
    bool mergeRequestIidIsSet() const;
    void unsetmergeRequestIid();
    void setMergeRequestIid(int32_t value);

    /// <summary>
    /// **参数解释：** 检视意见id(主评和回复共用)。 **取值范围：** 字符串长度40。
    /// </summary>

    std::string getDiscussionId() const;
    bool discussionIdIsSet() const;
    void unsetdiscussionId();
    void setDiscussionId(const std::string& value);

    /// <summary>
    /// **参数解释：** 评论id(主评论和回复不共用)。
    /// </summary>

    int32_t getNoteId() const;
    bool noteIdIsSet() const;
    void unsetnoteId();
    void setNoteId(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    UpdateMergeRequestNoteDto getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateMergeRequestNoteDto& value);


protected:
    int32_t repositoryId_;
    bool repositoryIdIsSet_;
    int32_t mergeRequestIid_;
    bool mergeRequestIidIsSet_;
    std::string discussionId_;
    bool discussionIdIsSet_;
    int32_t noteId_;
    bool noteIdIsSet_;
    UpdateMergeRequestNoteDto body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateMergeRequestDiscussionRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateMergeRequestDiscussionRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_UpdateMergeRequestDiscussionRequest_H_
