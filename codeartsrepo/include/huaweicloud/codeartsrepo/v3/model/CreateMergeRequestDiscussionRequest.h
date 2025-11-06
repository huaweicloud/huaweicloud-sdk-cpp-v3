
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_CreateMergeRequestDiscussionRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_CreateMergeRequestDiscussionRequest_H_


#include <huaweicloud/codeartsrepo/v3/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v3/model/CreateMergeRequestDiscussionBodyDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V3_EXPORT  CreateMergeRequestDiscussionRequest
    : public ModelBase
{
public:
    CreateMergeRequestDiscussionRequest();
    virtual ~CreateMergeRequestDiscussionRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateMergeRequestDiscussionRequest members

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
    /// 
    /// </summary>

    CreateMergeRequestDiscussionBodyDto getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateMergeRequestDiscussionBodyDto& value);


protected:
    int32_t repositoryId_;
    bool repositoryIdIsSet_;
    int32_t mergeRequestIid_;
    bool mergeRequestIidIsSet_;
    CreateMergeRequestDiscussionBodyDto body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateMergeRequestDiscussionRequest& dereference_from_shared_ptr(std::shared_ptr<CreateMergeRequestDiscussionRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_CreateMergeRequestDiscussionRequest_H_
