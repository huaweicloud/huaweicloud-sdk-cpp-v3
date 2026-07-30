

#include "huaweicloud/modelarts/v1/model/ResourceFlavorLabel.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ResourceFlavorLabel::ResourceFlavorLabel()
{
    osModelartsScope_ = "";
    osModelartsScopeIsSet_ = false;
}

ResourceFlavorLabel::~ResourceFlavorLabel() = default;

void ResourceFlavorLabel::validate()
{
}

web::json::value ResourceFlavorLabel::toJson() const
{
    web::json::value val = web::json::value::object();

    if(osModelartsScopeIsSet_) {
        val[utility::conversions::to_string_t("os.modelarts/scope")] = ModelBase::toJson(osModelartsScope_);
    }

    return val;
}
bool ResourceFlavorLabel::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("os.modelarts/scope"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os.modelarts/scope"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsModelartsScope(refVal);
        }
    }
    return ok;
}


std::string ResourceFlavorLabel::getOsModelartsScope() const
{
    return osModelartsScope_;
}

void ResourceFlavorLabel::setOsModelartsScope(const std::string& value)
{
    osModelartsScope_ = value;
    osModelartsScopeIsSet_ = true;
}

bool ResourceFlavorLabel::osModelartsScopeIsSet() const
{
    return osModelartsScopeIsSet_;
}

void ResourceFlavorLabel::unsetosModelartsScope()
{
    osModelartsScopeIsSet_ = false;
}

}
}
}
}
}


