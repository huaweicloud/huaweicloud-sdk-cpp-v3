
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ReviewSettingParamDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ReviewSettingParamDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

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
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ReviewSettingParamDto
    : public ModelBase
{
public:
    ReviewSettingParamDto();
    virtual ~ReviewSettingParamDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReviewSettingParamDto members

    /// <summary>
    /// **参数解释：** 是否启用启用检视意见分类与模块。
    /// </summary>

    bool isCategoriesAndModulesEnabled() const;
    bool categoriesAndModulesEnabledIsSet() const;
    void unsetcategoriesAndModulesEnabled();
    void setCategoriesAndModulesEnabled(bool value);

    /// <summary>
    /// **参数解释：** 检视意见模块。
    /// </summary>

    std::vector<std::string>& getReviewModules();
    bool reviewModulesIsSet() const;
    void unsetreviewModules();
    void setReviewModules(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释：** 是否启用系统预置检视意见分类。
    /// </summary>

    bool isSecondaryCategoryEnabled() const;
    bool secondaryCategoryEnabledIsSet() const;
    void unsetsecondaryCategoryEnabled();
    void setSecondaryCategoryEnabled(bool value);

    /// <summary>
    /// **参数解释：** 检视意见分类(已勾选的分类的key列表)。
    /// </summary>

    std::vector<std::string>& getReviewDefaultCategories();
    bool reviewDefaultCategoriesIsSet() const;
    void unsetreviewDefaultCategories();
    void setReviewDefaultCategories(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释：** 自定义分类列表。
    /// </summary>

    std::vector<std::string>& getReviewCustomizedCategories();
    bool reviewCustomizedCategoriesIsSet() const;
    void unsetreviewCustomizedCategories();
    void setReviewCustomizedCategories(const std::vector<std::string>& value);

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
    bool categoriesAndModulesEnabled_;
    bool categoriesAndModulesEnabledIsSet_;
    std::vector<std::string> reviewModules_;
    bool reviewModulesIsSet_;
    bool secondaryCategoryEnabled_;
    bool secondaryCategoryEnabledIsSet_;
    std::vector<std::string> reviewDefaultCategories_;
    bool reviewDefaultCategoriesIsSet_;
    std::vector<std::string> reviewCustomizedCategories_;
    bool reviewCustomizedCategoriesIsSet_;
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

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ReviewSettingParamDto_H_
