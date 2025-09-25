
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_UpdateProjectReviewSettingsResponse_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_UpdateProjectReviewSettingsResponse_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v4/model/RequiredAttributeDto.h>
#include <string>
#include <vector>
#include <huaweicloud/codehub/v4/model/CategoryDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  UpdateProjectReviewSettingsResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateProjectReviewSettingsResponse();
    virtual ~UpdateProjectReviewSettingsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateProjectReviewSettingsResponse members

    /// <summary>
    /// **参数解释：** 是否启用启用检视意见分类与模块。
    /// </summary>

    bool isCategoriesAndModulesEnabled() const;
    bool categoriesAndModulesEnabledIsSet() const;
    void unsetcategoriesAndModulesEnabled();
    void setCategoriesAndModulesEnabled(bool value);

    /// <summary>
    /// **参数解释：** 是否启用系统预置检视意见分类。
    /// </summary>

    bool isSecondaryCategoryEnabled() const;
    bool secondaryCategoryEnabledIsSet() const;
    void unsetsecondaryCategoryEnabled();
    void setSecondaryCategoryEnabled(bool value);

    /// <summary>
    /// **参数解释：** 检视意见分类(已勾选)。
    /// </summary>

    std::vector<CategoryDto>& getPrimaryCategories();
    bool primaryCategoriesIsSet() const;
    void unsetprimaryCategories();
    void setPrimaryCategories(const std::vector<CategoryDto>& value);

    /// <summary>
    /// **参数解释：** 检视意见分类的key(已勾选)。
    /// </summary>

    std::vector<std::string>& getReviewDefaultCategories();
    bool reviewDefaultCategoriesIsSet() const;
    void unsetreviewDefaultCategories();
    void setReviewDefaultCategories(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释：** 自定义分类。
    /// </summary>

    std::vector<std::string>& getReviewCustomizedCategories();
    bool reviewCustomizedCategoriesIsSet() const;
    void unsetreviewCustomizedCategories();
    void setReviewCustomizedCategories(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释：** 检视意见模块。
    /// </summary>

    std::vector<std::string>& getReviewModules();
    bool reviewModulesIsSet() const;
    void unsetreviewModules();
    void setReviewModules(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释：** 仓库id。
    /// </summary>

    int32_t getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(int32_t value);

    /// <summary>
    /// **参数解释：** 检视意见必填项。
    /// </summary>

    std::vector<RequiredAttributeDto>& getNoteRequiredAttributes();
    bool noteRequiredAttributesIsSet() const;
    void unsetnoteRequiredAttributes();
    void setNoteRequiredAttributes(const std::vector<RequiredAttributeDto>& value);

    /// <summary>
    /// **参数解释：** 检视意见分类(所有可勾选的，需传参with_default_review_categories: true才返回)。
    /// </summary>

    std::vector<CategoryDto>& getCodehubDefaultCategories();
    bool codehubDefaultCategoriesIsSet() const;
    void unsetcodehubDefaultCategories();
    void setCodehubDefaultCategories(const std::vector<CategoryDto>& value);

    /// <summary>
    /// **参数解释：** 系统预置检视意见分类(需传参with_default_review_categories: true才返回)。
    /// </summary>

    std::vector<CategoryDto>& getHicodeDefaultCategories();
    bool hicodeDefaultCategoriesIsSet() const;
    void unsethicodeDefaultCategories();
    void setHicodeDefaultCategories(const std::vector<CategoryDto>& value);


protected:
    bool categoriesAndModulesEnabled_;
    bool categoriesAndModulesEnabledIsSet_;
    bool secondaryCategoryEnabled_;
    bool secondaryCategoryEnabledIsSet_;
    std::vector<CategoryDto> primaryCategories_;
    bool primaryCategoriesIsSet_;
    std::vector<std::string> reviewDefaultCategories_;
    bool reviewDefaultCategoriesIsSet_;
    std::vector<std::string> reviewCustomizedCategories_;
    bool reviewCustomizedCategoriesIsSet_;
    std::vector<std::string> reviewModules_;
    bool reviewModulesIsSet_;
    int32_t repositoryId_;
    bool repositoryIdIsSet_;
    std::vector<RequiredAttributeDto> noteRequiredAttributes_;
    bool noteRequiredAttributesIsSet_;
    std::vector<CategoryDto> codehubDefaultCategories_;
    bool codehubDefaultCategoriesIsSet_;
    std::vector<CategoryDto> hicodeDefaultCategories_;
    bool hicodeDefaultCategoriesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_UpdateProjectReviewSettingsResponse_H_
