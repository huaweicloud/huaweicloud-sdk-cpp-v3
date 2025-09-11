

#include "huaweicloud/dbss/v1/model/CountSqlTrendStatisticsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




CountSqlTrendStatisticsRequest::CountSqlTrendStatisticsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CountSqlTrendStatisticsRequest::~CountSqlTrendStatisticsRequest() = default;

void CountSqlTrendStatisticsRequest::validate()
{
}

web::json::value CountSqlTrendStatisticsRequest::toJson() const
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
bool CountSqlTrendStatisticsRequest::fromJson(const web::json::value& val)
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


std::string CountSqlTrendStatisticsRequest::getInstanceId() const
{
    return instanceId_;
}

void CountSqlTrendStatisticsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CountSqlTrendStatisticsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CountSqlTrendStatisticsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

GeneralRequest CountSqlTrendStatisticsRequest::getBody() const
{
    return body_;
}

void CountSqlTrendStatisticsRequest::setBody(const GeneralRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CountSqlTrendStatisticsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CountSqlTrendStatisticsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


