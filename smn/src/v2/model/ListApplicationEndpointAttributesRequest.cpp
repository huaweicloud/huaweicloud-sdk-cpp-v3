

#include "huaweicloud/smn/v2/model/ListApplicationEndpointAttributesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




ListApplicationEndpointAttributesRequest::ListApplicationEndpointAttributesRequest()
{
    endpointUrn_ = "";
    endpointUrnIsSet_ = false;
}

ListApplicationEndpointAttributesRequest::~ListApplicationEndpointAttributesRequest() = default;

void ListApplicationEndpointAttributesRequest::validate()
{
}

web::json::value ListApplicationEndpointAttributesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(endpointUrnIsSet_) {
        val[utility::conversions::to_string_t("endpoint_urn")] = ModelBase::toJson(endpointUrn_);
    }

    return val;
}
bool ListApplicationEndpointAttributesRequest::fromJson(const web::json::value& val)
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


std::string ListApplicationEndpointAttributesRequest::getEndpointUrn() const
{
    return endpointUrn_;
}

void ListApplicationEndpointAttributesRequest::setEndpointUrn(const std::string& value)
{
    endpointUrn_ = value;
    endpointUrnIsSet_ = true;
}

bool ListApplicationEndpointAttributesRequest::endpointUrnIsSet() const
{
    return endpointUrnIsSet_;
}

void ListApplicationEndpointAttributesRequest::unsetendpointUrn()
{
    endpointUrnIsSet_ = false;
}

}
}
}
}
}


