

#include "huaweicloud/dbss/v1/model/UpdateDbOmInstanceNameRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




UpdateDbOmInstanceNameRequest::UpdateDbOmInstanceNameRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateDbOmInstanceNameRequest::~UpdateDbOmInstanceNameRequest() = default;

void UpdateDbOmInstanceNameRequest::validate()
{
}

web::json::value UpdateDbOmInstanceNameRequest::toJson() const
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
bool UpdateDbOmInstanceNameRequest::fromJson(const web::json::value& val)
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
            ChangeNameRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateDbOmInstanceNameRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateDbOmInstanceNameRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateDbOmInstanceNameRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateDbOmInstanceNameRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ChangeNameRequest UpdateDbOmInstanceNameRequest::getBody() const
{
    return body_;
}

void UpdateDbOmInstanceNameRequest::setBody(const ChangeNameRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateDbOmInstanceNameRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateDbOmInstanceNameRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


