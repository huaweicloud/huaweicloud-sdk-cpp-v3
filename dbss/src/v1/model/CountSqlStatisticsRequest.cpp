

#include "huaweicloud/dbss/v1/model/CountSqlStatisticsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




CountSqlStatisticsRequest::CountSqlStatisticsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CountSqlStatisticsRequest::~CountSqlStatisticsRequest() = default;

void CountSqlStatisticsRequest::validate()
{
}

web::json::value CountSqlStatisticsRequest::toJson() const
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
bool CountSqlStatisticsRequest::fromJson(const web::json::value& val)
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


std::string CountSqlStatisticsRequest::getInstanceId() const
{
    return instanceId_;
}

void CountSqlStatisticsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CountSqlStatisticsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CountSqlStatisticsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

GeneralRequest CountSqlStatisticsRequest::getBody() const
{
    return body_;
}

void CountSqlStatisticsRequest::setBody(const GeneralRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CountSqlStatisticsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CountSqlStatisticsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


