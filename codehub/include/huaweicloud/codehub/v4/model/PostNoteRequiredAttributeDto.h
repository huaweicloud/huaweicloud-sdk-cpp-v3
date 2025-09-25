
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_PostNoteRequiredAttributeDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_PostNoteRequiredAttributeDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 检视意见设置请求体
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  PostNoteRequiredAttributeDto
    : public ModelBase
{
public:
    PostNoteRequiredAttributeDto();
    virtual ~PostNoteRequiredAttributeDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PostNoteRequiredAttributeDto members

    /// <summary>
    /// **参数解释：** 是否勾选指派给。
    /// </summary>

    bool isIsAssigneeIdRequired() const;
    bool isAssigneeIdRequiredIsSet() const;
    void unsetisAssigneeIdRequired();
    void setIsAssigneeIdRequired(bool value);

    /// <summary>
    /// **参数解释：** 是否勾选意见分类。
    /// </summary>

    bool isIsReviewCategoriesRequired() const;
    bool isReviewCategoriesRequiredIsSet() const;
    void unsetisReviewCategoriesRequired();
    void setIsReviewCategoriesRequired(bool value);

    /// <summary>
    /// **参数解释：** 是否勾选意见模块。
    /// </summary>

    bool isIsReviewModulesRequired() const;
    bool isReviewModulesRequiredIsSet() const;
    void unsetisReviewModulesRequired();
    void setIsReviewModulesRequired(bool value);


protected:
    bool isAssigneeIdRequired_;
    bool isAssigneeIdRequiredIsSet_;
    bool isReviewCategoriesRequired_;
    bool isReviewCategoriesRequiredIsSet_;
    bool isReviewModulesRequired_;
    bool isReviewModulesRequiredIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_PostNoteRequiredAttributeDto_H_
