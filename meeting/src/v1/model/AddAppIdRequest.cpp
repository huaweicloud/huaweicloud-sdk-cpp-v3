

#include "huaweicloud/meeting/v1/model/AddAppIdRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




AddAppIdRequest::AddAppIdRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    bodyIsSet_ = false;
}

AddAppIdRequest::~AddAppIdRequest() = default;

void AddAppIdRequest::validate()
{
}

web::json::value AddAppIdRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool AddAppIdRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            AddAppIdRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AddAppIdRequest::getXRequestId() const
{
    return xRequestId_;
}

void AddAppIdRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool AddAppIdRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void AddAppIdRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

AddAppIdRequestBody AddAppIdRequest::getBody() const
{
    return body_;
}

void AddAppIdRequest::setBody(const AddAppIdRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddAppIdRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddAppIdRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


