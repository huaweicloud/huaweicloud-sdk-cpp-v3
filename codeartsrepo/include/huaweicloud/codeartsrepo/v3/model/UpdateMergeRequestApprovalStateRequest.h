
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_UpdateMergeRequestApprovalStateRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_UpdateMergeRequestApprovalStateRequest_H_


#include <huaweicloud/codeartsrepo/v3/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v3/model/ApprovalActionTypeDto.h>
#include <string>

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
class HUAWEICLOUD_CODEARTSREPO_V3_EXPORT  UpdateMergeRequestApprovalStateRequest
    : public ModelBase
{
public:
    UpdateMergeRequestApprovalStateRequest();
    virtual ~UpdateMergeRequestApprovalStateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateMergeRequestApprovalStateRequest members

    /// <summary>
    /// 仓库的主键id
    /// </summary>

    std::string getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(const std::string& value);

    /// <summary>
    /// 合并请求的短id
    /// </summary>

    int32_t getMergeRequestIid() const;
    bool mergeRequestIidIsSet() const;
    void unsetmergeRequestIid();
    void setMergeRequestIid(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    ApprovalActionTypeDto getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ApprovalActionTypeDto& value);


protected:
    std::string repositoryId_;
    bool repositoryIdIsSet_;
    int32_t mergeRequestIid_;
    bool mergeRequestIidIsSet_;
    ApprovalActionTypeDto body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateMergeRequestApprovalStateRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateMergeRequestApprovalStateRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_UpdateMergeRequestApprovalStateRequest_H_
