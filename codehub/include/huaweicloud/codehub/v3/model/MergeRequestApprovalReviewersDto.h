
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_MergeRequestApprovalReviewersDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_MergeRequestApprovalReviewersDto_H_


#include <huaweicloud/codehub/v3/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v3/model/ApprovalUserDto.h>
#include <vector>

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
class HUAWEICLOUD_CODEHUB_V3_EXPORT  MergeRequestApprovalReviewersDto
    : public ModelBase
{
public:
    MergeRequestApprovalReviewersDto();
    virtual ~MergeRequestApprovalReviewersDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MergeRequestApprovalReviewersDto members

    /// <summary>
    /// 
    /// </summary>

    std::vector<ApprovalUserDto>& getApprovalMergeRequestReviewers();
    bool approvalMergeRequestReviewersIsSet() const;
    void unsetapprovalMergeRequestReviewers();
    void setApprovalMergeRequestReviewers(const std::vector<ApprovalUserDto>& value);


protected:
    std::vector<ApprovalUserDto> approvalMergeRequestReviewers_;
    bool approvalMergeRequestReviewersIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_MergeRequestApprovalReviewersDto_H_
