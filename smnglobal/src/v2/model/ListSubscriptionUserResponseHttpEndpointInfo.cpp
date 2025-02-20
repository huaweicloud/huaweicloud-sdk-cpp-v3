

#include "huaweicloud/smnglobal/v2/model/ListSubscriptionUserResponseHttpEndpointInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smnglobal {
namespace V2 {
namespace Model {




ListSubscriptionUserResponseHttpEndpointInfo::ListSubscriptionUserResponseHttpEndpointInfo()
{
    endpoint_ = "";
    endpointIsSet_ = false;
    headerIsSet_ = false;
}

ListSubscriptionUserResponseHttpEndpointInfo::~ListSubscriptionUserResponseHttpEndpointInfo() = default;

void ListSubscriptionUserResponseHttpEndpointInfo::validate()
{
}

web::json::value ListSubscriptionUserResponseHttpEndpointInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(endpointIsSet_) {
        val[utility::conversions::to_string_t("endpoint")] = ModelBase::toJson(endpoint_);
    }
    if(headerIsSet_) {
        val[utility::conversions::to_string_t("header")] = ModelBase::toJson(header_);
    }

    return val;
}
bool ListSubscriptionUserResponseHttpEndpointInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("endpoint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endpoint"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndpoint(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("header"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("header"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHeader(refVal);
        }
    }
    return ok;
}


std::string ListSubscriptionUserResponseHttpEndpointInfo::getEndpoint() const
{
    return endpoint_;
}

void ListSubscriptionUserResponseHttpEndpointInfo::setEndpoint(const std::string& value)
{
    endpoint_ = value;
    endpointIsSet_ = true;
}

bool ListSubscriptionUserResponseHttpEndpointInfo::endpointIsSet() const
{
    return endpointIsSet_;
}

void ListSubscriptionUserResponseHttpEndpointInfo::unsetendpoint()
{
    endpointIsSet_ = false;
}

std::map<std::string, std::string>& ListSubscriptionUserResponseHttpEndpointInfo::getHeader()
{
    return header_;
}

void ListSubscriptionUserResponseHttpEndpointInfo::setHeader(const std::map<std::string, std::string>& value)
{
    header_ = value;
    headerIsSet_ = true;
}

bool ListSubscriptionUserResponseHttpEndpointInfo::headerIsSet() const
{
    return headerIsSet_;
}

void ListSubscriptionUserResponseHttpEndpointInfo::unsetheader()
{
    headerIsSet_ = false;
}

}
}
}
}
}


