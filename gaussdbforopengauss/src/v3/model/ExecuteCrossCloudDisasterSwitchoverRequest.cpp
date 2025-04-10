

#include "huaweicloud/gaussdbforopengauss/v3/model/ExecuteCrossCloudDisasterSwitchoverRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ExecuteCrossCloudDisasterSwitchoverRequest::ExecuteCrossCloudDisasterSwitchoverRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ExecuteCrossCloudDisasterSwitchoverRequest::~ExecuteCrossCloudDisasterSwitchoverRequest() = default;

void ExecuteCrossCloudDisasterSwitchoverRequest::validate()
{
}

web::json::value ExecuteCrossCloudDisasterSwitchoverRequest::toJson() const
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
bool ExecuteCrossCloudDisasterSwitchoverRequest::fromJson(const web::json::value& val)
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
            SwitchoverReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ExecuteCrossCloudDisasterSwitchoverRequest::getXLanguage() const
{
    return xLanguage_;
}

void ExecuteCrossCloudDisasterSwitchoverRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ExecuteCrossCloudDisasterSwitchoverRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ExecuteCrossCloudDisasterSwitchoverRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ExecuteCrossCloudDisasterSwitchoverRequest::getInstanceId() const
{
    return instanceId_;
}

void ExecuteCrossCloudDisasterSwitchoverRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ExecuteCrossCloudDisasterSwitchoverRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ExecuteCrossCloudDisasterSwitchoverRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

SwitchoverReq ExecuteCrossCloudDisasterSwitchoverRequest::getBody() const
{
    return body_;
}

void ExecuteCrossCloudDisasterSwitchoverRequest::setBody(const SwitchoverReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ExecuteCrossCloudDisasterSwitchoverRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ExecuteCrossCloudDisasterSwitchoverRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


