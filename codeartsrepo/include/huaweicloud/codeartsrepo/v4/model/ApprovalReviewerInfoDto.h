
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ApprovalReviewerInfoDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ApprovalReviewerInfoDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ApprovalReviewerInfoDto
    : public ModelBase
{
public:
    ApprovalReviewerInfoDto();
    virtual ~ApprovalReviewerInfoDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ApprovalReviewerInfoDto members

    /// <summary>
    /// **参数解释：** 需要更新的检视人ID列表 数字以英文逗号分隔 111,222 **取值范围：** 不涉及。
    /// </summary>

    std::string getReviewerIds() const;
    bool reviewerIdsIsSet() const;
    void unsetreviewerIds();
    void setReviewerIds(const std::string& value);


protected:
    std::string reviewerIds_;
    bool reviewerIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ApprovalReviewerInfoDto_H_
