

#include "huaweicloud/ram/v1/model/CreateResourceShareResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




CreateResourceShareResponse::CreateResourceShareResponse()
{
    resourceShareIsSet_ = false;
}

CreateResourceShareResponse::~CreateResourceShareResponse() = default;

void CreateResourceShareResponse::validate()
{
}

web::json::value CreateResourceShareResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceShareIsSet_) {
        val[utility::conversions::to_string_t("resource_share")] = ModelBase::toJson(resourceShare_);
    }

    return val;
}
bool CreateResourceShareResponse::fromJson(const web::json::value& val)
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


ResourceShare CreateResourceShareResponse::getResourceShare() const
{
    return resourceShare_;
}

void CreateResourceShareResponse::setResourceShare(const ResourceShare& value)
{
    resourceShare_ = value;
    resourceShareIsSet_ = true;
}

bool CreateResourceShareResponse::resourceShareIsSet() const
{
    return resourceShareIsSet_;
}

void CreateResourceShareResponse::unsetresourceShare()
{
    resourceShareIsSet_ = false;
}

}
}
}
}
}


