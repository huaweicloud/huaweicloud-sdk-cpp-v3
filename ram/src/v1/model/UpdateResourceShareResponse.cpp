

#include "huaweicloud/ram/v1/model/UpdateResourceShareResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




UpdateResourceShareResponse::UpdateResourceShareResponse()
{
    resourceShareIsSet_ = false;
}

UpdateResourceShareResponse::~UpdateResourceShareResponse() = default;

void UpdateResourceShareResponse::validate()
{
}

web::json::value UpdateResourceShareResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceShareIsSet_) {
        val[utility::conversions::to_string_t("resource_share")] = ModelBase::toJson(resourceShare_);
    }

    return val;
}
bool UpdateResourceShareResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_share"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_share"));
        if(!fieldValue.is_null())
        {
            ResourceShare refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceShare(refVal);
        }
    }
    return ok;
}


ResourceShare UpdateResourceShareResponse::getResourceShare() const
{
    return resourceShare_;
}

void UpdateResourceShareResponse::setResourceShare(const ResourceShare& value)
{
    resourceShare_ = value;
    resourceShareIsSet_ = true;
}

bool UpdateResourceShareResponse::resourceShareIsSet() const
{
    return resourceShareIsSet_;
}

void UpdateResourceShareResponse::unsetresourceShare()
{
    resourceShareIsSet_ = false;
}

}
}
}
}
}


