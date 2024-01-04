

#include "huaweicloud/smn/v2/model/HttpDetectRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




HttpDetectRequestBody::HttpDetectRequestBody()
{
    protocol_ = "";
    protocolIsSet_ = false;
    endpoint_ = "";
    endpointIsSet_ = false;
    extensionIsSet_ = false;
}

HttpDetectRequestBody::~HttpDetectRequestBody() = default;

void HttpDetectRequestBody::validate()
{
}

web::json::value HttpDetectRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(protocolIsSet_) {
        val[utility::conversions::to_string_t("protocol")] = ModelBase::toJson(protocol_);
    }
    if(endpointIsSet_) {
        val[utility::conversions::to_string_t("endpoint")] = ModelBase::toJson(endpoint_);
    }
    if(extensionIsSet_) {
        val[utility::conversions::to_string_t("extension")] = ModelBase::toJson(extension_);
    }

    return val;
}
bool HttpDetectRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("protocol"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protocol"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtocol(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endpoint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endpoint"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndpoint(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extension"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extension"));
        if(!fieldValue.is_null())
        {
            HttpDetectRequestBody_extension refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtension(refVal);
        }
    }
    return ok;
}


std::string HttpDetectRequestBody::getProtocol() const
{
    return protocol_;
}

void HttpDetectRequestBody::setProtocol(const std::string& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool HttpDetectRequestBody::protocolIsSet() const
{
    return protocolIsSet_;
}

void HttpDetectRequestBody::unsetprotocol()
{
    protocolIsSet_ = false;
}

std::string HttpDetectRequestBody::getEndpoint() const
{
    return endpoint_;
}

void HttpDetectRequestBody::setEndpoint(const std::string& value)
{
    endpoint_ = value;
    endpointIsSet_ = true;
}

bool HttpDetectRequestBody::endpointIsSet() const
{
    return endpointIsSet_;
}

void HttpDetectRequestBody::unsetendpoint()
{
    endpointIsSet_ = false;
}

HttpDetectRequestBody_extension HttpDetectRequestBody::getExtension() const
{
    return extension_;
}

void HttpDetectRequestBody::setExtension(const HttpDetectRequestBody_extension& value)
{
    extension_ = value;
    extensionIsSet_ = true;
}

bool HttpDetectRequestBody::extensionIsSet() const
{
    return extensionIsSet_;
}

void HttpDetectRequestBody::unsetextension()
{
    extensionIsSet_ = false;
}

}
}
}
}
}


