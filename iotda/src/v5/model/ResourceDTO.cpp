

#include "huaweicloud/iotda/v5/model/ResourceDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ResourceDTO::ResourceDTO()
{
    resourceId_ = "";
    resourceIdIsSet_ = false;
}

ResourceDTO::~ResourceDTO() = default;

void ResourceDTO::validate()
{
}

web::json::value ResourceDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }

    return val;
}
bool ResourceDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
        }
    }
    return ok;
}


std::string ResourceDTO::getResourceId() const
{
    return resourceId_;
}

void ResourceDTO::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool ResourceDTO::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void ResourceDTO::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

}
}
}
}
}


