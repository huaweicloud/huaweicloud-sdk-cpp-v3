

#include "huaweicloud/dbss/v1/model/CountRiskTrendStatisticsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




CountRiskTrendStatisticsRequest::CountRiskTrendStatisticsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CountRiskTrendStatisticsRequest::~CountRiskTrendStatisticsRequest() = default;

void CountRiskTrendStatisticsRequest::validate()
{
}

web::json::value CountRiskTrendStatisticsRequest::toJson() const
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
bool CountRiskTrendStatisticsRequest::fromJson(const web::json::value& val)
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


std::string CountRiskTrendStatisticsRequest::getInstanceId() const
{
    return instanceId_;
}

void CountRiskTrendStatisticsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CountRiskTrendStatisticsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CountRiskTrendStatisticsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

GeneralRequest CountRiskTrendStatisticsRequest::getBody() const
{
    return body_;
}

void CountRiskTrendStatisticsRequest::setBody(const GeneralRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CountRiskTrendStatisticsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CountRiskTrendStatisticsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


