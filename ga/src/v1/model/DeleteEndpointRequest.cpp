

#include "huaweicloud/ga/v1/model/DeleteEndpointRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




DeleteEndpointRequest::DeleteEndpointRequest()
{
    endpointGroupId_ = "";
    endpointGroupIdIsSet_ = false;
    endpointId_ = "";
    endpointIdIsSet_ = false;
}

DeleteEndpointRequest::~DeleteEndpointRequest() = default;

void DeleteEndpointRequest::validate()
{
}

web::json::value DeleteEndpointRequest::toJson() const
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
bool DeleteEndpointRequest::fromJson(const web::json::value& val)
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


std::string DeleteEndpointRequest::getEndpointGroupId() const
{
    return endpointGroupId_;
}

void DeleteEndpointRequest::setEndpointGroupId(const std::string& value)
{
    endpointGroupId_ = value;
    endpointGroupIdIsSet_ = true;
}

bool DeleteEndpointRequest::endpointGroupIdIsSet() const
{
    return endpointGroupIdIsSet_;
}

void DeleteEndpointRequest::unsetendpointGroupId()
{
    endpointGroupIdIsSet_ = false;
}

std::string DeleteEndpointRequest::getEndpointId() const
{
    return endpointId_;
}

void DeleteEndpointRequest::setEndpointId(const std::string& value)
{
    endpointId_ = value;
    endpointIdIsSet_ = true;
}

bool DeleteEndpointRequest::endpointIdIsSet() const
{
    return endpointIdIsSet_;
}

void DeleteEndpointRequest::unsetendpointId()
{
    endpointIdIsSet_ = false;
}

}
}
}
}
}


