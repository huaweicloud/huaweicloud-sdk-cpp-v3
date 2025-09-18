

#include "huaweicloud/ga/v1/model/ShowEndpointGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




ShowEndpointGroupRequest::ShowEndpointGroupRequest()
{
    endpointGroupId_ = "";
    endpointGroupIdIsSet_ = false;
}

ShowEndpointGroupRequest::~ShowEndpointGroupRequest() = default;

void ShowEndpointGroupRequest::validate()
{
}

web::json::value ShowEndpointGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(endpointGroupIdIsSet_) {
        val[utility::conversions::to_string_t("endpoint_group_id")] = ModelBase::toJson(endpointGroupId_);
    }

    return val;
}
bool ShowEndpointGroupRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("endpoint_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endpoint_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndpointGroupId(refVal);
        }
    }
    return ok;
}


std::string ShowEndpointGroupRequest::getEndpointGroupId() const
{
    return endpointGroupId_;
}

void ShowEndpointGroupRequest::setEndpointGroupId(const std::string& value)
{
    endpointGroupId_ = value;
    endpointGroupIdIsSet_ = true;
}

bool ShowEndpointGroupRequest::endpointGroupIdIsSet() const
{
    return endpointGroupIdIsSet_;
}

void ShowEndpointGroupRequest::unsetendpointGroupId()
{
    endpointGroupIdIsSet_ = false;
}

}
}
}
}
}


