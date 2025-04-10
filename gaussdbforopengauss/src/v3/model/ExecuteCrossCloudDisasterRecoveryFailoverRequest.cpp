

#include "huaweicloud/gaussdbforopengauss/v3/model/ExecuteCrossCloudDisasterRecoveryFailoverRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ExecuteCrossCloudDisasterRecoveryFailoverRequest::ExecuteCrossCloudDisasterRecoveryFailoverRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ExecuteCrossCloudDisasterRecoveryFailoverRequest::~ExecuteCrossCloudDisasterRecoveryFailoverRequest() = default;

void ExecuteCrossCloudDisasterRecoveryFailoverRequest::validate()
{
}

web::json::value ExecuteCrossCloudDisasterRecoveryFailoverRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ExecuteCrossCloudDisasterRecoveryFailoverRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DisasterFailoverReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ExecuteCrossCloudDisasterRecoveryFailoverRequest::getXLanguage() const
{
    return xLanguage_;
}

void ExecuteCrossCloudDisasterRecoveryFailoverRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ExecuteCrossCloudDisasterRecoveryFailoverRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ExecuteCrossCloudDisasterRecoveryFailoverRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ExecuteCrossCloudDisasterRecoveryFailoverRequest::getInstanceId() const
{
    return instanceId_;
}

void ExecuteCrossCloudDisasterRecoveryFailoverRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ExecuteCrossCloudDisasterRecoveryFailoverRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ExecuteCrossCloudDisasterRecoveryFailoverRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

DisasterFailoverReqBody ExecuteCrossCloudDisasterRecoveryFailoverRequest::getBody() const
{
    return body_;
}

void ExecuteCrossCloudDisasterRecoveryFailoverRequest::setBody(const DisasterFailoverReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ExecuteCrossCloudDisasterRecoveryFailoverRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ExecuteCrossCloudDisasterRecoveryFailoverRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


