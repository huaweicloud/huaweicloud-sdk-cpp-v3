

#include "huaweicloud/rds/v3/model/RecommendedProduct.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




RecommendedProduct::RecommendedProduct()
{
    recommendedLevel_ = "";
    recommendedLevelIsSet_ = false;
    applicationScenarios_ = "";
    applicationScenariosIsSet_ = false;
    flavorsIsSet_ = false;
}

RecommendedProduct::~RecommendedProduct() = default;

void RecommendedProduct::validate()
{
}

web::json::value RecommendedProduct::toJson() const
{
    web::json::value val = web::json::value::object();

    if(recommendedLevelIsSet_) {
        val[utility::conversions::to_string_t("recommended_level")] = ModelBase::toJson(recommendedLevel_);
    }
    if(applicationScenariosIsSet_) {
        val[utility::conversions::to_string_t("application_scenarios")] = ModelBase::toJson(applicationScenarios_);
    }
    if(flavorsIsSet_) {
        val[utility::conversions::to_string_t("flavors")] = ModelBase::toJson(flavors_);
    }

    return val;
}
bool RecommendedProduct::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("recommended_level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recommended_level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecommendedLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("application_scenarios"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("application_scenarios"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicationScenarios(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavors"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavors"));
        if(!fieldValue.is_null())
        {
            std::vector<RecommendFlavor> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavors(refVal);
        }
    }
    return ok;
}


std::string RecommendedProduct::getRecommendedLevel() const
{
    return recommendedLevel_;
}

void RecommendedProduct::setRecommendedLevel(const std::string& value)
{
    recommendedLevel_ = value;
    recommendedLevelIsSet_ = true;
}

bool RecommendedProduct::recommendedLevelIsSet() const
{
    return recommendedLevelIsSet_;
}

void RecommendedProduct::unsetrecommendedLevel()
{
    recommendedLevelIsSet_ = false;
}

std::string RecommendedProduct::getApplicationScenarios() const
{
    return applicationScenarios_;
}

void RecommendedProduct::setApplicationScenarios(const std::string& value)
{
    applicationScenarios_ = value;
    applicationScenariosIsSet_ = true;
}

bool RecommendedProduct::applicationScenariosIsSet() const
{
    return applicationScenariosIsSet_;
}

void RecommendedProduct::unsetapplicationScenarios()
{
    applicationScenariosIsSet_ = false;
}

std::vector<RecommendFlavor>& RecommendedProduct::getFlavors()
{
    return flavors_;
}

void RecommendedProduct::setFlavors(const std::vector<RecommendFlavor>& value)
{
    flavors_ = value;
    flavorsIsSet_ = true;
}

bool RecommendedProduct::flavorsIsSet() const
{
    return flavorsIsSet_;
}

void RecommendedProduct::unsetflavors()
{
    flavorsIsSet_ = false;
}

}
}
}
}
}


