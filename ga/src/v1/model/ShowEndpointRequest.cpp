

#include "huaweicloud/ga/v1/model/ShowEndpointRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




ShowEndpointRequest::ShowEndpointRequest()
{
    endpointGroupId_ = "";
    endpointGroupIdIsSet_ = false;
    endpointId_ = "";
    endpointIdIsSet_ = false;
}

ShowEndpointRequest::~ShowEndpointRequest() = default;

void ShowEndpointRequest::validate()
{
}

web::json::value ShowEndpointRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(endpointGroupIdIsSet_) {
        val[utility::conversions::to_string_t("endpoint_group_id")] = ModelBase::toJson(endpointGroupId_);
    }
    if(endpointIdIsSet_) {
        val[utility::conversions::to_string_t("endpoint_id")] = ModelBase::toJson(endpointId_);
    }

    return val;
}
bool ShowEndpointRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("endpoint_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endpoint_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndpointId(refVal);
        }
    }
    return ok;
}


std::string ShowEndpointRequest::getEndpointGroupId() const
{
    return endpointGroupId_;
}

void ShowEndpointRequest::setEndpointGroupId(const std::string& value)
{
    endpointGroupId_ = value;
    endpointGroupIdIsSet_ = true;
}

bool ShowEndpointRequest::endpointGroupIdIsSet() const
{
    return endpointGroupIdIsSet_;
}

void ShowEndpointRequest::unsetendpointGroupId()
{
    endpointGroupIdIsSet_ = false;
}

std::string ShowEndpointRequest::getEndpointId() const
{
    return endpointId_;
}

void ShowEndpointRequest::setEndpointId(const std::string& value)
{
    endpointId_ = value;
    endpointIdIsSet_ = true;
}

bool ShowEndpointRequest::endpointIdIsSet() const
{
    return endpointIdIsSet_;
}

void ShowEndpointRequest::unsetendpointId()
{
    endpointIdIsSet_ = false;
}

}
}
}
}
}


