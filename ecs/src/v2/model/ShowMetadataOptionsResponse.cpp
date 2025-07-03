

#include "huaweicloud/ecs/v2/model/ShowMetadataOptionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ShowMetadataOptionsResponse::ShowMetadataOptionsResponse()
{
    httpEndpoint_ = "";
    httpEndpointIsSet_ = false;
    httpTokens_ = "";
    httpTokensIsSet_ = false;
}

ShowMetadataOptionsResponse::~ShowMetadataOptionsResponse() = default;

void ShowMetadataOptionsResponse::validate()
{
}

web::json::value ShowMetadataOptionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(httpEndpointIsSet_) {
        val[utility::conversions::to_string_t("http_endpoint")] = ModelBase::toJson(httpEndpoint_);
    }
    if(httpTokensIsSet_) {
        val[utility::conversions::to_string_t("http_tokens")] = ModelBase::toJson(httpTokens_);
    }

    return val;
}
bool ShowMetadataOptionsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("http_endpoint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("http_endpoint"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttpEndpoint(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("http_tokens"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("http_tokens"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttpTokens(refVal);
        }
    }
    return ok;
}


std::string ShowMetadataOptionsResponse::getHttpEndpoint() const
{
    return httpEndpoint_;
}

void ShowMetadataOptionsResponse::setHttpEndpoint(const std::string& value)
{
    httpEndpoint_ = value;
    httpEndpointIsSet_ = true;
}

bool ShowMetadataOptionsResponse::httpEndpointIsSet() const
{
    return httpEndpointIsSet_;
}

void ShowMetadataOptionsResponse::unsethttpEndpoint()
{
    httpEndpointIsSet_ = false;
}

std::string ShowMetadataOptionsResponse::getHttpTokens() const
{
    return httpTokens_;
}

void ShowMetadataOptionsResponse::setHttpTokens(const std::string& value)
{
    httpTokens_ = value;
    httpTokensIsSet_ = true;
}

bool ShowMetadataOptionsResponse::httpTokensIsSet() const
{
    return httpTokensIsSet_;
}

void ShowMetadataOptionsResponse::unsethttpTokens()
{
    httpTokensIsSet_ = false;
}

}
}
}
}
}


