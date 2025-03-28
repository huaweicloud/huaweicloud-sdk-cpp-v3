

#include "huaweicloud/evs/v2/model/CreateVolumeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




CreateVolumeRequest::CreateVolumeRequest()
{
    xClientToken_ = "";
    xClientTokenIsSet_ = false;
    bodyIsSet_ = false;
}

CreateVolumeRequest::~CreateVolumeRequest() = default;

void CreateVolumeRequest::validate()
{
}

web::json::value CreateVolumeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xClientTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Client-Token")] = ModelBase::toJson(xClientToken_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateVolumeRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Client-Token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Client-Token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXClientToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateVolumeRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateVolumeRequest::getXClientToken() const
{
    return xClientToken_;
}

void CreateVolumeRequest::setXClientToken(const std::string& value)
{
    xClientToken_ = value;
    xClientTokenIsSet_ = true;
}

bool CreateVolumeRequest::xClientTokenIsSet() const
{
    return xClientTokenIsSet_;
}

void CreateVolumeRequest::unsetxClientToken()
{
    xClientTokenIsSet_ = false;
}

CreateVolumeRequestBody CreateVolumeRequest::getBody() const
{
    return body_;
}

void CreateVolumeRequest::setBody(const CreateVolumeRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateVolumeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateVolumeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


