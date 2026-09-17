

#include "huaweicloud/projectman/v4/model/ModelConfigDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ModelConfigDTO::ModelConfigDTO()
{
    categoriesIsSet_ = false;
    categoryLayerConfigIsSet_ = false;
    featurePageLinkTemplate_ = "";
    featurePageLinkTemplateIsSet_ = false;
}

ModelConfigDTO::~ModelConfigDTO() = default;

void ModelConfigDTO::validate()
{
}

web::json::value ModelConfigDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(categoriesIsSet_) {
        val[utility::conversions::to_string_t("categories")] = ModelBase::toJson(categories_);
    }
    if(categoryLayerConfigIsSet_) {
        val[utility::conversions::to_string_t("category_layer_config")] = ModelBase::toJson(categoryLayerConfig_);
    }
    if(featurePageLinkTemplateIsSet_) {
        val[utility::conversions::to_string_t("feature_page_link_template")] = ModelBase::toJson(featurePageLinkTemplate_);
    }

    return val;
}
bool ModelConfigDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("categories"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("categories"));
        if(!fieldValue.is_null())
        {
            std::vector<BaseCategory> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategories(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("category_layer_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category_layer_config"));
        if(!fieldValue.is_null())
        {
            std::vector<CategoryLayerDTO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategoryLayerConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("feature_page_link_template"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("feature_page_link_template"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFeaturePageLinkTemplate(refVal);
        }
    }
    return ok;
}


std::vector<BaseCategory>& ModelConfigDTO::getCategories()
{
    return categories_;
}

void ModelConfigDTO::setCategories(const std::vector<BaseCategory>& value)
{
    categories_ = value;
    categoriesIsSet_ = true;
}

bool ModelConfigDTO::categoriesIsSet() const
{
    return categoriesIsSet_;
}

void ModelConfigDTO::unsetcategories()
{
    categoriesIsSet_ = false;
}

std::vector<CategoryLayerDTO>& ModelConfigDTO::getCategoryLayerConfig()
{
    return categoryLayerConfig_;
}

void ModelConfigDTO::setCategoryLayerConfig(const std::vector<CategoryLayerDTO>& value)
{
    categoryLayerConfig_ = value;
    categoryLayerConfigIsSet_ = true;
}

bool ModelConfigDTO::categoryLayerConfigIsSet() const
{
    return categoryLayerConfigIsSet_;
}

void ModelConfigDTO::unsetcategoryLayerConfig()
{
    categoryLayerConfigIsSet_ = false;
}

std::string ModelConfigDTO::getFeaturePageLinkTemplate() const
{
    return featurePageLinkTemplate_;
}

void ModelConfigDTO::setFeaturePageLinkTemplate(const std::string& value)
{
    featurePageLinkTemplate_ = value;
    featurePageLinkTemplateIsSet_ = true;
}

bool ModelConfigDTO::featurePageLinkTemplateIsSet() const
{
    return featurePageLinkTemplateIsSet_;
}

void ModelConfigDTO::unsetfeaturePageLinkTemplate()
{
    featurePageLinkTemplateIsSet_ = false;
}

}
}
}
}
}


