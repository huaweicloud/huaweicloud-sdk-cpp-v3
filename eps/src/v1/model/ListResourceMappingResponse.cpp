

#include "huaweicloud/eps/v1/model/ListResourceMappingResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {




ListResourceMappingResponse::ListResourceMappingResponse()
{
    resourceMappingIsSet_ = false;
}

ListResourceMappingResponse::~ListResourceMappingResponse() = default;

void ListResourceMappingResponse::validate()
{
}

web::json::value ListResourceMappingResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceMappingIsSet_) {
        val[utility::conversions::to_string_t("resource_mapping")] = ModelBase::toJson(resourceMapping_);
    }

    return val;
}
bool ListResourceMappingResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_mapping"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_mapping"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceMapping(refVal);
        }
    }
    return ok;
}


std::map<std::string, std::string>& ListResourceMappingResponse::getResourceMapping()
{
    return resourceMapping_;
}

void ListResourceMappingResponse::setResourceMapping(const std::map<std::string, std::string>& value)
{
    resourceMapping_ = value;
    resourceMappingIsSet_ = true;
}

bool ListResourceMappingResponse::resourceMappingIsSet() const
{
    return resourceMappingIsSet_;
}

void ListResourceMappingResponse::unsetresourceMapping()
{
    resourceMappingIsSet_ = false;
}

}
}
}
}
}


