

#include "huaweicloud/ecs/v2/model/ShowServerMetadataOptionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ShowServerMetadataOptionsResponse::ShowServerMetadataOptionsResponse()
{
    httpEndpoint_ = "";
    httpEndpointIsSet_ = false;
    httpTokens_ = "";
    httpTokensIsSet_ = false;
}

ShowServerMetadataOptionsResponse::~ShowServerMetadataOptionsResponse() = default;

void ShowServerMetadataOptionsResponse::validate()
{
}

web::json::value ShowServerMetadataOptionsResponse::toJson() const
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
bool ShowServerMetadataOptionsResponse::fromJson(const web::json::value& val)
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


std::string ShowServerMetadataOptionsResponse::getHttpEndpoint() const
{
    return httpEndpoint_;
}

void ShowServerMetadataOptionsResponse::setHttpEndpoint(const std::string& value)
{
    httpEndpoint_ = value;
    httpEndpointIsSet_ = true;
}

bool ShowServerMetadataOptionsResponse::httpEndpointIsSet() const
{
    return httpEndpointIsSet_;
}

void ShowServerMetadataOptionsResponse::unsethttpEndpoint()
{
    httpEndpointIsSet_ = false;
}

std::string ShowServerMetadataOptionsResponse::getHttpTokens() const
{
    return httpTokens_;
}

void ShowServerMetadataOptionsResponse::setHttpTokens(const std::string& value)
{
    httpTokens_ = value;
    httpTokensIsSet_ = true;
}

bool ShowServerMetadataOptionsResponse::httpTokensIsSet() const
{
    return httpTokensIsSet_;
}

void ShowServerMetadataOptionsResponse::unsethttpTokens()
{
    httpTokensIsSet_ = false;
}

}
}
}
}
}


