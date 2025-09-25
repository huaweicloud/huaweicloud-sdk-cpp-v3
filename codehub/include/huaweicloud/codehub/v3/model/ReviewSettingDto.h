
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_ReviewSettingDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_ReviewSettingDto_H_


#include <huaweicloud/codehub/v3/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codehub/v3/model/CategoryDto.h>
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
class HUAWEICLOUD_CODEHUB_V3_EXPORT  ReviewSettingDto
    : public ModelBase
{
public:
    ReviewSettingDto();
    virtual ~ReviewSettingDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReviewSettingDto members

    /// <summary>
    /// 是否开启检视意见分类和模块
    /// </summary>

    bool isCategoriesAndModulesEnabled() const;
    bool categoriesAndModulesEnabledIsSet() const;
    void unsetcategoriesAndModulesEnabled();
    void setCategoriesAndModulesEnabled(bool value);

    /// <summary>
    /// 是否开启二级分类
    /// </summary>

    bool isSecondaryCategoryEnabled() const;
    bool secondaryCategoryEnabledIsSet() const;
    void unsetsecondaryCategoryEnabled();
    void setSecondaryCategoryEnabled(bool value);

    /// <summary>
    /// 是否禁止关联issue
    /// </summary>

    bool isForbiddenAddToIssue() const;
    bool forbiddenAddToIssueIsSet() const;
    void unsetforbiddenAddToIssue();
    void setForbiddenAddToIssue(bool value);

    /// <summary>
    /// 一级分类
    /// </summary>

    std::vector<CategoryDto>& getPrimaryCategories();
    bool primaryCategoriesIsSet() const;
    void unsetprimaryCategories();
    void setPrimaryCategories(const std::vector<CategoryDto>& value);

    /// <summary>
    /// 默认分类
    /// </summary>

    std::vector<std::string>& getReviewDefaultCategories();
    bool reviewDefaultCategoriesIsSet() const;
    void unsetreviewDefaultCategories();
    void setReviewDefaultCategories(const std::vector<std::string>& value);

    /// <summary>
    /// 自定义分类
    /// </summary>

    std::vector<std::string>& getReviewCustomizedCategories();
    bool reviewCustomizedCategoriesIsSet() const;
    void unsetreviewCustomizedCategories();
    void setReviewCustomizedCategories(const std::vector<std::string>& value);

    /// <summary>
    /// 检视意见模块
    /// </summary>

    std::vector<std::string>& getReviewModules();
    bool reviewModulesIsSet() const;
    void unsetreviewModules();
    void setReviewModules(const std::vector<std::string>& value);

    /// <summary>
    /// 目标id
    /// </summary>

    int32_t getSourceId() const;
    bool sourceIdIsSet() const;
    void unsetsourceId();
    void setSourceId(int32_t value);

    /// <summary>
    /// 目标类型
    /// </summary>

    std::string getSourceType() const;
    bool sourceTypeIsSet() const;
    void unsetsourceType();
    void setSourceType(const std::string& value);

    /// <summary>
    /// 目标路径
    /// </summary>

    std::string getSourcePath() const;
    bool sourcePathIsSet() const;
    void unsetsourcePath();
    void setSourcePath(const std::string& value);

    /// <summary>
    /// 二级分类类型
    /// </summary>

    std::string getSecondaryCategoryType() const;
    bool secondaryCategoryTypeIsSet() const;
    void unsetsecondaryCategoryType();
    void setSecondaryCategoryType(const std::string& value);

    /// <summary>
    /// 二级分类
    /// </summary>

    std::vector<CategoryDto>& getSecondaryCategories();
    bool secondaryCategoriesIsSet() const;
    void unsetsecondaryCategories();
    void setSecondaryCategories(const std::vector<CategoryDto>& value);


protected:
    bool categoriesAndModulesEnabled_;
    bool categoriesAndModulesEnabledIsSet_;
    bool secondaryCategoryEnabled_;
    bool secondaryCategoryEnabledIsSet_;
    bool forbiddenAddToIssue_;
    bool forbiddenAddToIssueIsSet_;
    std::vector<CategoryDto> primaryCategories_;
    bool primaryCategoriesIsSet_;
    std::vector<std::string> reviewDefaultCategories_;
    bool reviewDefaultCategoriesIsSet_;
    std::vector<std::string> reviewCustomizedCategories_;
    bool reviewCustomizedCategoriesIsSet_;
    std::vector<std::string> reviewModules_;
    bool reviewModulesIsSet_;
    int32_t sourceId_;
    bool sourceIdIsSet_;
    std::string sourceType_;
    bool sourceTypeIsSet_;
    std::string sourcePath_;
    bool sourcePathIsSet_;
    std::string secondaryCategoryType_;
    bool secondaryCategoryTypeIsSet_;
    std::vector<CategoryDto> secondaryCategories_;
    bool secondaryCategoriesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_ReviewSettingDto_H_
