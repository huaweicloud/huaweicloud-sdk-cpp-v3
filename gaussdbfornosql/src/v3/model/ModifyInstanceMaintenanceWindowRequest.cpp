

#include "huaweicloud/gaussdbfornosql/v3/model/ModifyInstanceMaintenanceWindowRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ModifyInstanceMaintenanceWindowRequest::ModifyInstanceMaintenanceWindowRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ModifyInstanceMaintenanceWindowRequest::~ModifyInstanceMaintenanceWindowRequest() = default;

void ModifyInstanceMaintenanceWindowRequest::validate()
{
}

web::json::value ModifyInstanceMaintenanceWindowRequest::toJson() const
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
bool ModifyInstanceMaintenanceWindowRequest::fromJson(const web::json::value& val)
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
            ModifyInstanceOpsWindowV3Req refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ModifyInstanceMaintenanceWindowRequest::getInstanceId() const
{
    return instanceId_;
}

void ModifyInstanceMaintenanceWindowRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ModifyInstanceMaintenanceWindowRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ModifyInstanceMaintenanceWindowRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ModifyInstanceOpsWindowV3Req ModifyInstanceMaintenanceWindowRequest::getBody() const
{
    return body_;
}

void ModifyInstanceMaintenanceWindowRequest::setBody(const ModifyInstanceOpsWindowV3Req& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ModifyInstanceMaintenanceWindowRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ModifyInstanceMaintenanceWindowRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


