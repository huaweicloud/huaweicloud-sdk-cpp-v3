

#include "huaweicloud/rds/v3/model/SwitchSqlLimitRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SwitchSqlLimitRequest::SwitchSqlLimitRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

SwitchSqlLimitRequest::~SwitchSqlLimitRequest() = default;

void SwitchSqlLimitRequest::validate()
{
}

web::json::value SwitchSqlLimitRequest::toJson() const
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
bool SwitchSqlLimitRequest::fromJson(const web::json::value& val)
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
            SwitchSqlLimitControlReqV3 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SwitchSqlLimitRequest::getInstanceId() const
{
    return instanceId_;
}

void SwitchSqlLimitRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SwitchSqlLimitRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SwitchSqlLimitRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

SwitchSqlLimitControlReqV3 SwitchSqlLimitRequest::getBody() const
{
    return body_;
}

void SwitchSqlLimitRequest::setBody(const SwitchSqlLimitControlReqV3& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SwitchSqlLimitRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SwitchSqlLimitRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


