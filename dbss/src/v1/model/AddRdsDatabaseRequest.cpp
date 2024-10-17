

#include "huaweicloud/dbss/v1/model/AddRdsDatabaseRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




AddRdsDatabaseRequest::AddRdsDatabaseRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

AddRdsDatabaseRequest::~AddRdsDatabaseRequest() = default;

void AddRdsDatabaseRequest::validate()
{
}

web::json::value AddRdsDatabaseRequest::toJson() const
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
bool AddRdsDatabaseRequest::fromJson(const web::json::value& val)
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
            RdsDbRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AddRdsDatabaseRequest::getInstanceId() const
{
    return instanceId_;
}

void AddRdsDatabaseRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool AddRdsDatabaseRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void AddRdsDatabaseRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

RdsDbRequest AddRdsDatabaseRequest::getBody() const
{
    return body_;
}

void AddRdsDatabaseRequest::setBody(const RdsDbRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddRdsDatabaseRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddRdsDatabaseRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


