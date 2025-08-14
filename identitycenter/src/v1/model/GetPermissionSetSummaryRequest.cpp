

#include "huaweicloud/identitycenter/v1/model/GetPermissionSetSummaryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




GetPermissionSetSummaryRequest::GetPermissionSetSummaryRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
}

GetPermissionSetSummaryRequest::~GetPermissionSetSummaryRequest() = default;

void GetPermissionSetSummaryRequest::validate()
{
}

web::json::value GetPermissionSetSummaryRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }

    return val;
}
bool GetPermissionSetSummaryRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-Security-Token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Security-Token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSecurityToken(refVal);
        }
    }
    return ok;
}


std::string GetPermissionSetSummaryRequest::getInstanceId() const
{
    return instanceId_;
}

void GetPermissionSetSummaryRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool GetPermissionSetSummaryRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void GetPermissionSetSummaryRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string GetPermissionSetSummaryRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void GetPermissionSetSummaryRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool GetPermissionSetSummaryRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void GetPermissionSetSummaryRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

}
}
}
}
}


