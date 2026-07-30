

#include "huaweicloud/modelarts/v1/model/ServerScaleEvaluation.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ServerScaleEvaluation::ServerScaleEvaluation()
{
    isSoldOut_ = false;
    isSoldOutIsSet_ = false;
    flavor_ = "";
    flavorIsSet_ = false;
    resourceFlavor_ = "";
    resourceFlavorIsSet_ = false;
}

ServerScaleEvaluation::~ServerScaleEvaluation() = default;

void ServerScaleEvaluation::validate()
{
}

web::json::value ServerScaleEvaluation::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isSoldOutIsSet_) {
        val[utility::conversions::to_string_t("is_sold_out")] = ModelBase::toJson(isSoldOut_);
    }
    if(flavorIsSet_) {
        val[utility::conversions::to_string_t("flavor")] = ModelBase::toJson(flavor_);
    }
    if(resourceFlavorIsSet_) {
        val[utility::conversions::to_string_t("resource_flavor")] = ModelBase::toJson(resourceFlavor_);
    }

    return val;
}
bool ServerScaleEvaluation::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("is_sold_out"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_sold_out"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSoldOut(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_flavor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_flavor"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceFlavor(refVal);
        }
    }
    return ok;
}


bool ServerScaleEvaluation::isIsSoldOut() const
{
    return isSoldOut_;
}

void ServerScaleEvaluation::setIsSoldOut(bool value)
{
    isSoldOut_ = value;
    isSoldOutIsSet_ = true;
}

bool ServerScaleEvaluation::isSoldOutIsSet() const
{
    return isSoldOutIsSet_;
}

void ServerScaleEvaluation::unsetisSoldOut()
{
    isSoldOutIsSet_ = false;
}

std::string ServerScaleEvaluation::getFlavor() const
{
    return flavor_;
}

void ServerScaleEvaluation::setFlavor(const std::string& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool ServerScaleEvaluation::flavorIsSet() const
{
    return flavorIsSet_;
}

void ServerScaleEvaluation::unsetflavor()
{
    flavorIsSet_ = false;
}

std::string ServerScaleEvaluation::getResourceFlavor() const
{
    return resourceFlavor_;
}

void ServerScaleEvaluation::setResourceFlavor(const std::string& value)
{
    resourceFlavor_ = value;
    resourceFlavorIsSet_ = true;
}

bool ServerScaleEvaluation::resourceFlavorIsSet() const
{
    return resourceFlavorIsSet_;
}

void ServerScaleEvaluation::unsetresourceFlavor()
{
    resourceFlavorIsSet_ = false;
}

}
}
}
}
}


