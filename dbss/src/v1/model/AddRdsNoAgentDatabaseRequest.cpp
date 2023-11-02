

#include "huaweicloud/dbss/v1/model/AddRdsNoAgentDatabaseRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




AddRdsNoAgentDatabaseRequest::AddRdsNoAgentDatabaseRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

AddRdsNoAgentDatabaseRequest::~AddRdsNoAgentDatabaseRequest() = default;

void AddRdsNoAgentDatabaseRequest::validate()
{
}

web::json::value AddRdsNoAgentDatabaseRequest::toJson() const
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
bool AddRdsNoAgentDatabaseRequest::fromJson(const web::json::value& val)
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
            RdsNoAgentDbRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AddRdsNoAgentDatabaseRequest::getInstanceId() const
{
    return instanceId_;
}

void AddRdsNoAgentDatabaseRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool AddRdsNoAgentDatabaseRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void AddRdsNoAgentDatabaseRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

RdsNoAgentDbRequest AddRdsNoAgentDatabaseRequest::getBody() const
{
    return body_;
}

void AddRdsNoAgentDatabaseRequest::setBody(const RdsNoAgentDbRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddRdsNoAgentDatabaseRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddRdsNoAgentDatabaseRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


