

#include "huaweicloud/ga/v1/model/UpdateEndpointRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




UpdateEndpointRequestBody::UpdateEndpointRequestBody()
{
    endpointIsSet_ = false;
}

UpdateEndpointRequestBody::~UpdateEndpointRequestBody() = default;

void UpdateEndpointRequestBody::validate()
{
}

web::json::value UpdateEndpointRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(endpointIsSet_) {
        val[utility::conversions::to_string_t("endpoint")] = ModelBase::toJson(endpoint_);
    }

    return val;
}
bool UpdateEndpointRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("endpoint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endpoint"));
        if(!fieldValue.is_null())
        {
            UpdateEndpointOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndpoint(refVal);
        }
    }
    return ok;
}


UpdateEndpointOption UpdateEndpointRequestBody::getEndpoint() const
{
    return endpoint_;
}

void UpdateEndpointRequestBody::setEndpoint(const UpdateEndpointOption& value)
{
    endpoint_ = value;
    endpointIsSet_ = true;
}

bool UpdateEndpointRequestBody::endpointIsSet() const
{
    return endpointIsSet_;
}

void UpdateEndpointRequestBody::unsetendpoint()
{
    endpointIsSet_ = false;
}

}
}
}
}
}


