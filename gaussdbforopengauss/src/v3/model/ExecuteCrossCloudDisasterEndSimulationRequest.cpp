

#include "huaweicloud/gaussdbforopengauss/v3/model/ExecuteCrossCloudDisasterEndSimulationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ExecuteCrossCloudDisasterEndSimulationRequest::ExecuteCrossCloudDisasterEndSimulationRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ExecuteCrossCloudDisasterEndSimulationRequest::~ExecuteCrossCloudDisasterEndSimulationRequest() = default;

void ExecuteCrossCloudDisasterEndSimulationRequest::validate()
{
}

web::json::value ExecuteCrossCloudDisasterEndSimulationRequest::toJson() const
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
bool ExecuteCrossCloudDisasterEndSimulationRequest::fromJson(const web::json::value& val)
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
            DisasterRecoverStopSimulationRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ExecuteCrossCloudDisasterEndSimulationRequest::getXLanguage() const
{
    return xLanguage_;
}

void ExecuteCrossCloudDisasterEndSimulationRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ExecuteCrossCloudDisasterEndSimulationRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ExecuteCrossCloudDisasterEndSimulationRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ExecuteCrossCloudDisasterEndSimulationRequest::getInstanceId() const
{
    return instanceId_;
}

void ExecuteCrossCloudDisasterEndSimulationRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ExecuteCrossCloudDisasterEndSimulationRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ExecuteCrossCloudDisasterEndSimulationRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

DisasterRecoverStopSimulationRequestBody ExecuteCrossCloudDisasterEndSimulationRequest::getBody() const
{
    return body_;
}

void ExecuteCrossCloudDisasterEndSimulationRequest::setBody(const DisasterRecoverStopSimulationRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ExecuteCrossCloudDisasterEndSimulationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ExecuteCrossCloudDisasterEndSimulationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


