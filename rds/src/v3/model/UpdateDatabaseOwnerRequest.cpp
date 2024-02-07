

#include "huaweicloud/rds/v3/model/UpdateDatabaseOwnerRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdateDatabaseOwnerRequest::UpdateDatabaseOwnerRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateDatabaseOwnerRequest::~UpdateDatabaseOwnerRequest() = default;

void UpdateDatabaseOwnerRequest::validate()
{
}

web::json::value UpdateDatabaseOwnerRequest::toJson() const
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
bool UpdateDatabaseOwnerRequest::fromJson(const web::json::value& val)
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
            UpdateDatabaseOwnerRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateDatabaseOwnerRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateDatabaseOwnerRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateDatabaseOwnerRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateDatabaseOwnerRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

UpdateDatabaseOwnerRequestBody UpdateDatabaseOwnerRequest::getBody() const
{
    return body_;
}

void UpdateDatabaseOwnerRequest::setBody(const UpdateDatabaseOwnerRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateDatabaseOwnerRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateDatabaseOwnerRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


