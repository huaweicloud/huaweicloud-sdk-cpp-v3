

#include "huaweicloud/csms/v1/model/DeleteSecretForScheduleRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




DeleteSecretForScheduleRequest::DeleteSecretForScheduleRequest()
{
    secretName_ = "";
    secretNameIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteSecretForScheduleRequest::~DeleteSecretForScheduleRequest() = default;

void DeleteSecretForScheduleRequest::validate()
{
}

web::json::value DeleteSecretForScheduleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(secretNameIsSet_) {
        val[utility::conversions::to_string_t("secret_name")] = ModelBase::toJson(secretName_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool DeleteSecretForScheduleRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("secret_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secret_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecretName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DeleteSecretForScheduleRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteSecretForScheduleRequest::getSecretName() const
{
    return secretName_;
}

void DeleteSecretForScheduleRequest::setSecretName(const std::string& value)
{
    secretName_ = value;
    secretNameIsSet_ = true;
}

bool DeleteSecretForScheduleRequest::secretNameIsSet() const
{
    return secretNameIsSet_;
}

void DeleteSecretForScheduleRequest::unsetsecretName()
{
    secretNameIsSet_ = false;
}

DeleteSecretForScheduleRequestBody DeleteSecretForScheduleRequest::getBody() const
{
    return body_;
}

void DeleteSecretForScheduleRequest::setBody(const DeleteSecretForScheduleRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteSecretForScheduleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteSecretForScheduleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


