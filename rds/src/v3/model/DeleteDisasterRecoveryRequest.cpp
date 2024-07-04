

#include "huaweicloud/rds/v3/model/DeleteDisasterRecoveryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DeleteDisasterRecoveryRequest::DeleteDisasterRecoveryRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteDisasterRecoveryRequest::~DeleteDisasterRecoveryRequest() = default;

void DeleteDisasterRecoveryRequest::validate()
{
}

web::json::value DeleteDisasterRecoveryRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteDisasterRecoveryRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DeleteDisasterRecoveryRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteDisasterRecoveryRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteDisasterRecoveryRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteDisasterRecoveryRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteDisasterRecoveryRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteDisasterRecoveryRequest::getXLanguage() const
{
    return xLanguage_;
}

void DeleteDisasterRecoveryRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DeleteDisasterRecoveryRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DeleteDisasterRecoveryRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

DeleteDisasterRecoveryRequestBody DeleteDisasterRecoveryRequest::getBody() const
{
    return body_;
}

void DeleteDisasterRecoveryRequest::setBody(const DeleteDisasterRecoveryRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteDisasterRecoveryRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteDisasterRecoveryRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


