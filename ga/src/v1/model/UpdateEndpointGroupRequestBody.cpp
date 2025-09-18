

#include "huaweicloud/ga/v1/model/UpdateEndpointGroupRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




UpdateEndpointGroupRequestBody::UpdateEndpointGroupRequestBody()
{
    endpointGroupIsSet_ = false;
}

UpdateEndpointGroupRequestBody::~UpdateEndpointGroupRequestBody() = default;

void UpdateEndpointGroupRequestBody::validate()
{
}

web::json::value UpdateEndpointGroupRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(endpointGroupIsSet_) {
        val[utility::conversions::to_string_t("endpoint_group")] = ModelBase::toJson(endpointGroup_);
    }

    return val;
}
bool UpdateEndpointGroupRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("endpoint_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endpoint_group"));
        if(!fieldValue.is_null())
        {
            UpdateEndpointGroupOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndpointGroup(refVal);
        }
    }
    return ok;
}


UpdateEndpointGroupOption UpdateEndpointGroupRequestBody::getEndpointGroup() const
{
    return endpointGroup_;
}

void UpdateEndpointGroupRequestBody::setEndpointGroup(const UpdateEndpointGroupOption& value)
{
    endpointGroup_ = value;
    endpointGroupIsSet_ = true;
}

bool UpdateEndpointGroupRequestBody::endpointGroupIsSet() const
{
    return endpointGroupIsSet_;
}

void UpdateEndpointGroupRequestBody::unsetendpointGroup()
{
    endpointGroupIsSet_ = false;
}

}
}
}
}
}


