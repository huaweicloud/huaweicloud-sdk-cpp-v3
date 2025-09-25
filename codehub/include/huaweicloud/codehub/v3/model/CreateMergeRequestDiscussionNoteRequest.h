
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_CreateMergeRequestDiscussionNoteRequest_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_CreateMergeRequestDiscussionNoteRequest_H_


#include <huaweicloud/codehub/v3/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v3/model/CreateMergeRequestDiscussionNoteDto.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEHUB_V3_EXPORT  CreateMergeRequestDiscussionNoteRequest
    : public ModelBase
{
public:
    CreateMergeRequestDiscussionNoteRequest();
    virtual ~CreateMergeRequestDiscussionNoteRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateMergeRequestDiscussionNoteRequest members

    /// <summary>
    /// 仓库短id
    /// </summary>

    int32_t getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(int32_t value);

    /// <summary>
    /// 合并请求iid
    /// </summary>

    int32_t getMergeRequestIid() const;
    bool mergeRequestIidIsSet() const;
    void unsetmergeRequestIid();
    void setMergeRequestIid(int32_t value);

    /// <summary>
    /// 评论id
    /// </summary>

    std::string getDiscussionId() const;
    bool discussionIdIsSet() const;
    void unsetdiscussionId();
    void setDiscussionId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CreateMergeRequestDiscussionNoteDto getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateMergeRequestDiscussionNoteDto& value);


protected:
    int32_t repositoryId_;
    bool repositoryIdIsSet_;
    int32_t mergeRequestIid_;
    bool mergeRequestIidIsSet_;
    std::string discussionId_;
    bool discussionIdIsSet_;
    CreateMergeRequestDiscussionNoteDto body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateMergeRequestDiscussionNoteRequest& dereference_from_shared_ptr(std::shared_ptr<CreateMergeRequestDiscussionNoteRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_CreateMergeRequestDiscussionNoteRequest_H_
