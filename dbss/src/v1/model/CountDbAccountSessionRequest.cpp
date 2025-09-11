

#include "huaweicloud/dbss/v1/model/CountDbAccountSessionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




CountDbAccountSessionRequest::CountDbAccountSessionRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CountDbAccountSessionRequest::~CountDbAccountSessionRequest() = default;

void CountDbAccountSessionRequest::validate()
{
}

web::json::value CountDbAccountSessionRequest::toJson() const
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
bool CountDbAccountSessionRequest::fromJson(const web::json::value& val)
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
            SqlSessionStatisticsRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CountDbAccountSessionRequest::getInstanceId() const
{
    return instanceId_;
}

void CountDbAccountSessionRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CountDbAccountSessionRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CountDbAccountSessionRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

SqlSessionStatisticsRequest CountDbAccountSessionRequest::getBody() const
{
    return body_;
}

void CountDbAccountSessionRequest::setBody(const SqlSessionStatisticsRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CountDbAccountSessionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CountDbAccountSessionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


