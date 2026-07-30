

#include "huaweicloud/modelarts/v1/model/PatchNetworkRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PatchNetworkRequest::PatchNetworkRequest()
{
    networkName_ = "";
    networkNameIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

PatchNetworkRequest::~PatchNetworkRequest() = default;

void PatchNetworkRequest::validate()
{
}

web::json::value PatchNetworkRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(networkNameIsSet_) {
        val[utility::conversions::to_string_t("network_name")] = ModelBase::toJson(networkName_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool PatchNetworkRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("network_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("network_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetworkName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            NetworkUpdateRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string PatchNetworkRequest::getNetworkName() const
{
    return networkName_;
}

void PatchNetworkRequest::setNetworkName(const std::string& value)
{
    networkName_ = value;
    networkNameIsSet_ = true;
}

bool PatchNetworkRequest::networkNameIsSet() const
{
    return networkNameIsSet_;
}

void PatchNetworkRequest::unsetnetworkName()
{
    networkNameIsSet_ = false;
}

std::string PatchNetworkRequest::getContentType() const
{
    return contentType_;
}

void PatchNetworkRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool PatchNetworkRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void PatchNetworkRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

NetworkUpdateRequest PatchNetworkRequest::getBody() const
{
    return body_;
}

void PatchNetworkRequest::setBody(const NetworkUpdateRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool PatchNetworkRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void PatchNetworkRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


