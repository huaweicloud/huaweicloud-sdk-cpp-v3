

#include "huaweicloud/rds/v3/model/DeleteSqlLimitRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DeleteSqlLimitRequest::DeleteSqlLimitRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteSqlLimitRequest::~DeleteSqlLimitRequest() = default;

void DeleteSqlLimitRequest::validate()
{
}

web::json::value DeleteSqlLimitRequest::toJson() const
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
bool DeleteSqlLimitRequest::fromJson(const web::json::value& val)
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
            DeleteSqlLimitRuleReqV3 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteSqlLimitRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteSqlLimitRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteSqlLimitRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteSqlLimitRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

DeleteSqlLimitRuleReqV3 DeleteSqlLimitRequest::getBody() const
{
    return body_;
}

void DeleteSqlLimitRequest::setBody(const DeleteSqlLimitRuleReqV3& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteSqlLimitRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteSqlLimitRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


