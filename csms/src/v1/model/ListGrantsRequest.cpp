

#include "huaweicloud/csms/v1/model/ListGrantsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




ListGrantsRequest::ListGrantsRequest()
{
    resourceId_ = "";
    resourceIdIsSet_ = false;
}

ListGrantsRequest::~ListGrantsRequest() = default;

void ListGrantsRequest::validate()
{
}

web::json::value ListGrantsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }

    return val;
}
bool ListGrantsRequest::fromJson(const web::json::value& val)
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


std::string ListGrantsRequest::getResourceId() const
{
    return resourceId_;
}

void ListGrantsRequest::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool ListGrantsRequest::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void ListGrantsRequest::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

}
}
}
}
}


