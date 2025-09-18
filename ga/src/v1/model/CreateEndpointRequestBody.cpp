

#include "huaweicloud/ga/v1/model/CreateEndpointRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




CreateEndpointRequestBody::CreateEndpointRequestBody()
{
    endpointIsSet_ = false;
}

CreateEndpointRequestBody::~CreateEndpointRequestBody() = default;

void CreateEndpointRequestBody::validate()
{
}

web::json::value CreateEndpointRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(endpointIsSet_) {
        val[utility::conversions::to_string_t("endpoint")] = ModelBase::toJson(endpoint_);
    }

    return val;
}
bool CreateEndpointRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("endpoint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endpoint"));
        if(!fieldValue.is_null())
        {
            CreateEndpointOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndpoint(refVal);
        }
    }
    return ok;
}


CreateEndpointOption CreateEndpointRequestBody::getEndpoint() const
{
    return endpoint_;
}

void CreateEndpointRequestBody::setEndpoint(const CreateEndpointOption& value)
{
    endpoint_ = value;
    endpointIsSet_ = true;
}

bool CreateEndpointRequestBody::endpointIsSet() const
{
    return endpointIsSet_;
}

void CreateEndpointRequestBody::unsetendpoint()
{
    endpointIsSet_ = false;
}

}
}
}
}
}


