

#include "huaweicloud/dbss/v1/model/CountDbClientSessionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




CountDbClientSessionRequest::CountDbClientSessionRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CountDbClientSessionRequest::~CountDbClientSessionRequest() = default;

void CountDbClientSessionRequest::validate()
{
}

web::json::value CountDbClientSessionRequest::toJson() const
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
bool CountDbClientSessionRequest::fromJson(const web::json::value& val)
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


std::string CountDbClientSessionRequest::getInstanceId() const
{
    return instanceId_;
}

void CountDbClientSessionRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CountDbClientSessionRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CountDbClientSessionRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

SqlSessionStatisticsRequest CountDbClientSessionRequest::getBody() const
{
    return body_;
}

void CountDbClientSessionRequest::setBody(const SqlSessionStatisticsRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CountDbClientSessionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CountDbClientSessionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


