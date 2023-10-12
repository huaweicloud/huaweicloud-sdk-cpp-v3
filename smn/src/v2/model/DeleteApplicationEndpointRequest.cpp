

#include "huaweicloud/smn/v2/model/DeleteApplicationEndpointRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




DeleteApplicationEndpointRequest::DeleteApplicationEndpointRequest()
{
    endpointUrn_ = "";
    endpointUrnIsSet_ = false;
}

DeleteApplicationEndpointRequest::~DeleteApplicationEndpointRequest() = default;

void DeleteApplicationEndpointRequest::validate()
{
}

web::json::value DeleteApplicationEndpointRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(endpointUrnIsSet_) {
        val[utility::conversions::to_string_t("endpoint_urn")] = ModelBase::toJson(endpointUrn_);
    }

    return val;
}
bool DeleteApplicationEndpointRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("endpoint_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endpoint_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndpointUrn(refVal);
        }
    }
    return ok;
}


std::string DeleteApplicationEndpointRequest::getEndpointUrn() const
{
    return endpointUrn_;
}

void DeleteApplicationEndpointRequest::setEndpointUrn(const std::string& value)
{
    endpointUrn_ = value;
    endpointUrnIsSet_ = true;
}

bool DeleteApplicationEndpointRequest::endpointUrnIsSet() const
{
    return endpointUrnIsSet_;
}

void DeleteApplicationEndpointRequest::unsetendpointUrn()
{
    endpointUrnIsSet_ = false;
}

}
}
}
}
}


