

#include "huaweicloud/modelarts/v1/model/ResourceFlavorAnnotation.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ResourceFlavorAnnotation::ResourceFlavorAnnotation()
{
    osModelartsFlavorImageFilter_ = "";
    osModelartsFlavorImageFilterIsSet_ = false;
}

ResourceFlavorAnnotation::~ResourceFlavorAnnotation() = default;

void ResourceFlavorAnnotation::validate()
{
}

web::json::value ResourceFlavorAnnotation::toJson() const
{
    web::json::value val = web::json::value::object();

    if(osModelartsFlavorImageFilterIsSet_) {
        val[utility::conversions::to_string_t("os.modelarts.flavor/image.filter")] = ModelBase::toJson(osModelartsFlavorImageFilter_);
    }

    return val;
}
bool ResourceFlavorAnnotation::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("os.modelarts.flavor/image.filter"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os.modelarts.flavor/image.filter"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsModelartsFlavorImageFilter(refVal);
        }
    }
    return ok;
}


std::string ResourceFlavorAnnotation::getOsModelartsFlavorImageFilter() const
{
    return osModelartsFlavorImageFilter_;
}

void ResourceFlavorAnnotation::setOsModelartsFlavorImageFilter(const std::string& value)
{
    osModelartsFlavorImageFilter_ = value;
    osModelartsFlavorImageFilterIsSet_ = true;
}

bool ResourceFlavorAnnotation::osModelartsFlavorImageFilterIsSet() const
{
    return osModelartsFlavorImageFilterIsSet_;
}

void ResourceFlavorAnnotation::unsetosModelartsFlavorImageFilter()
{
    osModelartsFlavorImageFilterIsSet_ = false;
}

}
}
}
}
}


