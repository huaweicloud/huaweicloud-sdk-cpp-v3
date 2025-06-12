

#include "huaweicloud/ecs/v2/model/UpdateServerMetadataOptionsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




UpdateServerMetadataOptionsRequestBody::UpdateServerMetadataOptionsRequestBody()
{
    httpEndpoint_ = "";
    httpEndpointIsSet_ = false;
    httpTokens_ = "";
    httpTokensIsSet_ = false;
}

UpdateServerMetadataOptionsRequestBody::~UpdateServerMetadataOptionsRequestBody() = default;

void UpdateServerMetadataOptionsRequestBody::validate()
{
}

web::json::value UpdateServerMetadataOptionsRequestBody::toJson() const
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
bool UpdateServerMetadataOptionsRequestBody::fromJson(const web::json::value& val)
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


std::string UpdateServerMetadataOptionsRequestBody::getHttpEndpoint() const
{
    return httpEndpoint_;
}

void UpdateServerMetadataOptionsRequestBody::setHttpEndpoint(const std::string& value)
{
    httpEndpoint_ = value;
    httpEndpointIsSet_ = true;
}

bool UpdateServerMetadataOptionsRequestBody::httpEndpointIsSet() const
{
    return httpEndpointIsSet_;
}

void UpdateServerMetadataOptionsRequestBody::unsethttpEndpoint()
{
    httpEndpointIsSet_ = false;
}

std::string UpdateServerMetadataOptionsRequestBody::getHttpTokens() const
{
    return httpTokens_;
}

void UpdateServerMetadataOptionsRequestBody::setHttpTokens(const std::string& value)
{
    httpTokens_ = value;
    httpTokensIsSet_ = true;
}

bool UpdateServerMetadataOptionsRequestBody::httpTokensIsSet() const
{
    return httpTokensIsSet_;
}

void UpdateServerMetadataOptionsRequestBody::unsethttpTokens()
{
    httpTokensIsSet_ = false;
}

}
}
}
}
}


