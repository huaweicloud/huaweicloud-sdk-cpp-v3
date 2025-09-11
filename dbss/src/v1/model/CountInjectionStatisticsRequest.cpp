

#include "huaweicloud/dbss/v1/model/CountInjectionStatisticsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




CountInjectionStatisticsRequest::CountInjectionStatisticsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CountInjectionStatisticsRequest::~CountInjectionStatisticsRequest() = default;

void CountInjectionStatisticsRequest::validate()
{
}

web::json::value CountInjectionStatisticsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CountInjectionStatisticsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            GeneralRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CountInjectionStatisticsRequest::getInstanceId() const
{
    return instanceId_;
}

void CountInjectionStatisticsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CountInjectionStatisticsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CountInjectionStatisticsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

GeneralRequest CountInjectionStatisticsRequest::getBody() const
{
    return body_;
}

void CountInjectionStatisticsRequest::setBody(const GeneralRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CountInjectionStatisticsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CountInjectionStatisticsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


