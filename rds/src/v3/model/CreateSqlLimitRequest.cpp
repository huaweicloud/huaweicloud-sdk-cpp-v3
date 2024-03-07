

#include "huaweicloud/rds/v3/model/CreateSqlLimitRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreateSqlLimitRequest::CreateSqlLimitRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateSqlLimitRequest::~CreateSqlLimitRequest() = default;

void CreateSqlLimitRequest::validate()
{
}

web::json::value CreateSqlLimitRequest::toJson() const
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
bool CreateSqlLimitRequest::fromJson(const web::json::value& val)
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
            CreateSqlLimitRuleReqV3 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateSqlLimitRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateSqlLimitRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateSqlLimitRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateSqlLimitRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

CreateSqlLimitRuleReqV3 CreateSqlLimitRequest::getBody() const
{
    return body_;
}

void CreateSqlLimitRequest::setBody(const CreateSqlLimitRuleReqV3& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateSqlLimitRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateSqlLimitRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


