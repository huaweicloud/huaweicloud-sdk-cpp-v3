

#include "huaweicloud/smnglobal/v2/model/CreateSubscriptionUserRequestHttpEndpointInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smnglobal {
namespace V2 {
namespace Model {




CreateSubscriptionUserRequestHttpEndpointInfo::CreateSubscriptionUserRequestHttpEndpointInfo()
{
    endpoint_ = "";
    endpointIsSet_ = false;
    headerIsSet_ = false;
}

CreateSubscriptionUserRequestHttpEndpointInfo::~CreateSubscriptionUserRequestHttpEndpointInfo() = default;

void CreateSubscriptionUserRequestHttpEndpointInfo::validate()
{
}

web::json::value CreateSubscriptionUserRequestHttpEndpointInfo::toJson() const
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
bool CreateSubscriptionUserRequestHttpEndpointInfo::fromJson(const web::json::value& val)
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


std::string CreateSubscriptionUserRequestHttpEndpointInfo::getEndpoint() const
{
    return endpoint_;
}

void CreateSubscriptionUserRequestHttpEndpointInfo::setEndpoint(const std::string& value)
{
    endpoint_ = value;
    endpointIsSet_ = true;
}

bool CreateSubscriptionUserRequestHttpEndpointInfo::endpointIsSet() const
{
    return endpointIsSet_;
}

void CreateSubscriptionUserRequestHttpEndpointInfo::unsetendpoint()
{
    endpointIsSet_ = false;
}

std::map<std::string, std::string>& CreateSubscriptionUserRequestHttpEndpointInfo::getHeader()
{
    return header_;
}

void CreateSubscriptionUserRequestHttpEndpointInfo::setHeader(const std::map<std::string, std::string>& value)
{
    header_ = value;
    headerIsSet_ = true;
}

bool CreateSubscriptionUserRequestHttpEndpointInfo::headerIsSet() const
{
    return headerIsSet_;
}

void CreateSubscriptionUserRequestHttpEndpointInfo::unsetheader()
{
    headerIsSet_ = false;
}

}
}
}
}
}


