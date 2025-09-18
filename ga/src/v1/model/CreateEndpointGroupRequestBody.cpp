

#include "huaweicloud/ga/v1/model/CreateEndpointGroupRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




CreateEndpointGroupRequestBody::CreateEndpointGroupRequestBody()
{
    endpointGroupIsSet_ = false;
}

CreateEndpointGroupRequestBody::~CreateEndpointGroupRequestBody() = default;

void CreateEndpointGroupRequestBody::validate()
{
}

web::json::value CreateEndpointGroupRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(endpointGroupIsSet_) {
        val[utility::conversions::to_string_t("endpoint_group")] = ModelBase::toJson(endpointGroup_);
    }

    return val;
}
bool CreateEndpointGroupRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("endpoint_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endpoint_group"));
        if(!fieldValue.is_null())
        {
            CreateEndpointGroupOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndpointGroup(refVal);
        }
    }
    return ok;
}


CreateEndpointGroupOption CreateEndpointGroupRequestBody::getEndpointGroup() const
{
    return endpointGroup_;
}

void CreateEndpointGroupRequestBody::setEndpointGroup(const CreateEndpointGroupOption& value)
{
    endpointGroup_ = value;
    endpointGroupIsSet_ = true;
}

bool CreateEndpointGroupRequestBody::endpointGroupIsSet() const
{
    return endpointGroupIsSet_;
}

void CreateEndpointGroupRequestBody::unsetendpointGroup()
{
    endpointGroupIsSet_ = false;
}

}
}
}
}
}


