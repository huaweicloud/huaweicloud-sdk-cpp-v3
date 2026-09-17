
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ModelConfigDTO_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ModelConfigDTO_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/CategoryLayerDTO.h>
#include <string>
#include <huaweicloud/projectman/v4/model/BaseCategory.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 模型配置数据对象
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ModelConfigDTO
    : public ModelBase
{
public:
    ModelConfigDTO();
    virtual ~ModelConfigDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModelConfigDTO members

    /// <summary>
    /// **参数解释**： 工作项属性。 **取值范围**： 不涉及。
    /// </summary>

    std::vector<BaseCategory>& getCategories();
    bool categoriesIsSet() const;
    void unsetcategories();
    void setCategories(const std::vector<BaseCategory>& value);

    /// <summary>
    /// **参数解释**： 工作项层级关系。 **取值范围**： 不涉及。
    /// </summary>

    std::vector<CategoryLayerDTO>& getCategoryLayerConfig();
    bool categoryLayerConfigIsSet() const;
    void unsetcategoryLayerConfig();
    void setCategoryLayerConfig(const std::vector<CategoryLayerDTO>& value);

    /// <summary>
    /// **参数解释**： 工作项功能页面跳转链接模板。 **取值范围**： 不涉及。
    /// </summary>

    std::string getFeaturePageLinkTemplate() const;
    bool featurePageLinkTemplateIsSet() const;
    void unsetfeaturePageLinkTemplate();
    void setFeaturePageLinkTemplate(const std::string& value);


protected:
    std::vector<BaseCategory> categories_;
    bool categoriesIsSet_;
    std::vector<CategoryLayerDTO> categoryLayerConfig_;
    bool categoryLayerConfigIsSet_;
    std::string featurePageLinkTemplate_;
    bool featurePageLinkTemplateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ModelConfigDTO_H_
