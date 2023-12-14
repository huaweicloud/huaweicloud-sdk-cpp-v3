

#include "huaweicloud/cfw/v1/model/DeleteFirewallRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




DeleteFirewallRequest::DeleteFirewallRequest()
{
    resourceId_ = "";
    resourceIdIsSet_ = false;
}

DeleteFirewallRequest::~DeleteFirewallRequest() = default;

void DeleteFirewallRequest::validate()
{
}

web::json::value DeleteFirewallRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }

    return val;
}
bool DeleteFirewallRequest::fromJson(const web::json::value& val)
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


std::string DeleteFirewallRequest::getResourceId() const
{
    return resourceId_;
}

void DeleteFirewallRequest::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool DeleteFirewallRequest::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void DeleteFirewallRequest::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

}
}
}
}
}


