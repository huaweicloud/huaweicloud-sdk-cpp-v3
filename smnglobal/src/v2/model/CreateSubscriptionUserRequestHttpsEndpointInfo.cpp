

#include "huaweicloud/smnglobal/v2/model/CreateSubscriptionUserRequestHttpsEndpointInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smnglobal {
namespace V2 {
namespace Model {




CreateSubscriptionUserRequestHttpsEndpointInfo::CreateSubscriptionUserRequestHttpsEndpointInfo()
{
    endpoint_ = "";
    endpointIsSet_ = false;
    headerIsSet_ = false;
}

CreateSubscriptionUserRequestHttpsEndpointInfo::~CreateSubscriptionUserRequestHttpsEndpointInfo() = default;

void CreateSubscriptionUserRequestHttpsEndpointInfo::validate()
{
}

web::json::value CreateSubscriptionUserRequestHttpsEndpointInfo::toJson() const
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
bool CreateSubscriptionUserRequestHttpsEndpointInfo::fromJson(const web::json::value& val)
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


std::string CreateSubscriptionUserRequestHttpsEndpointInfo::getEndpoint() const
{
    return endpoint_;
}

void CreateSubscriptionUserRequestHttpsEndpointInfo::setEndpoint(const std::string& value)
{
    endpoint_ = value;
    endpointIsSet_ = true;
}

bool CreateSubscriptionUserRequestHttpsEndpointInfo::endpointIsSet() const
{
    return endpointIsSet_;
}

void CreateSubscriptionUserRequestHttpsEndpointInfo::unsetendpoint()
{
    endpointIsSet_ = false;
}

std::map<std::string, std::string>& CreateSubscriptionUserRequestHttpsEndpointInfo::getHeader()
{
    return header_;
}

void CreateSubscriptionUserRequestHttpsEndpointInfo::setHeader(const std::map<std::string, std::string>& value)
{
    header_ = value;
    headerIsSet_ = true;
}

bool CreateSubscriptionUserRequestHttpsEndpointInfo::headerIsSet() const
{
    return headerIsSet_;
}

void CreateSubscriptionUserRequestHttpsEndpointInfo::unsetheader()
{
    headerIsSet_ = false;
}

}
}
}
}
}


