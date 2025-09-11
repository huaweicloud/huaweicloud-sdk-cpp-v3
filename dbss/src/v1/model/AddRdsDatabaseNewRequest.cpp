

#include "huaweicloud/dbss/v1/model/AddRdsDatabaseNewRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




AddRdsDatabaseNewRequest::AddRdsDatabaseNewRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

AddRdsDatabaseNewRequest::~AddRdsDatabaseNewRequest() = default;

void AddRdsDatabaseNewRequest::validate()
{
}

web::json::value AddRdsDatabaseNewRequest::toJson() const
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
bool AddRdsDatabaseNewRequest::fromJson(const web::json::value& val)
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


std::string AddRdsDatabaseNewRequest::getInstanceId() const
{
    return instanceId_;
}

void AddRdsDatabaseNewRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool AddRdsDatabaseNewRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void AddRdsDatabaseNewRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

RdsDbRequest AddRdsDatabaseNewRequest::getBody() const
{
    return body_;
}

void AddRdsDatabaseNewRequest::setBody(const RdsDbRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddRdsDatabaseNewRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddRdsDatabaseNewRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


