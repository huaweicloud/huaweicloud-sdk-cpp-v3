
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListMergeRequestReviewersResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListMergeRequestReviewersResponse_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v4/model/MergeRequestApprovalUserDto.h>
#include <string>
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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ListMergeRequestReviewersResponse
    : public ModelBase, public HttpResponse
{
public:
    ListMergeRequestReviewersResponse();
    virtual ~ListMergeRequestReviewersResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListMergeRequestReviewersResponse members

    /// <summary>
    /// **参数解释：** 必选检视人列表。 **取值范围：** 不涉及。
    /// </summary>

    std::vector<MergeRequestApprovalUserDto>& getRequiredReviewersList();
    bool requiredReviewersListIsSet() const;
    void unsetrequiredReviewersList();
    void setRequiredReviewersList(const std::vector<MergeRequestApprovalUserDto>& value);

    /// <summary>
    /// **参数解释：** 可选检视人列表。 **取值范围：** 不涉及。
    /// </summary>

    std::vector<MergeRequestApprovalUserDto>& getOptionalReviewersList();
    bool optionalReviewersListIsSet() const;
    void unsetoptionalReviewersList();
    void setOptionalReviewersList(const std::vector<MergeRequestApprovalUserDto>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXTotal() const;
    bool xTotalIsSet() const;
    void unsetxTotal();
    void setXTotal(const std::string& value);


protected:
    std::vector<MergeRequestApprovalUserDto> requiredReviewersList_;
    bool requiredReviewersListIsSet_;
    std::vector<MergeRequestApprovalUserDto> optionalReviewersList_;
    bool optionalReviewersListIsSet_;
    std::string xTotal_;
    bool xTotalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListMergeRequestReviewersResponse_H_
