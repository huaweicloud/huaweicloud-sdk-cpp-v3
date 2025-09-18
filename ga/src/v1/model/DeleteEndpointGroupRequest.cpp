

#include "huaweicloud/ga/v1/model/DeleteEndpointGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




DeleteEndpointGroupRequest::DeleteEndpointGroupRequest()
{
    endpointGroupId_ = "";
    endpointGroupIdIsSet_ = false;
}

DeleteEndpointGroupRequest::~DeleteEndpointGroupRequest() = default;

void DeleteEndpointGroupRequest::validate()
{
}

web::json::value DeleteEndpointGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(endpointGroupIdIsSet_) {
        val[utility::conversions::to_string_t("endpoint_group_id")] = ModelBase::toJson(endpointGroupId_);
    }

    return val;
}
bool DeleteEndpointGroupRequest::fromJson(const web::json::value& val)
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


std::string DeleteEndpointGroupRequest::getEndpointGroupId() const
{
    return endpointGroupId_;
}

void DeleteEndpointGroupRequest::setEndpointGroupId(const std::string& value)
{
    endpointGroupId_ = value;
    endpointGroupIdIsSet_ = true;
}

bool DeleteEndpointGroupRequest::endpointGroupIdIsSet() const
{
    return endpointGroupIdIsSet_;
}

void DeleteEndpointGroupRequest::unsetendpointGroupId()
{
    endpointGroupIdIsSet_ = false;
}

}
}
}
}
}


