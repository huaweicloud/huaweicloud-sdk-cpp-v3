

#include "huaweicloud/dbss/v1/model/SecurityGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




SecurityGroupRequest::SecurityGroupRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    securitygroupIdsIsSet_ = false;
}

SecurityGroupRequest::~SecurityGroupRequest() = default;

void SecurityGroupRequest::validate()
{
}

web::json::value SecurityGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(securitygroupIdsIsSet_) {
        val[utility::conversions::to_string_t("securitygroup_ids")] = ModelBase::toJson(securitygroupIds_);
    }

    return val;
}
bool SecurityGroupRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("securitygroup_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("securitygroup_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecuritygroupIds(refVal);
        }
    }
    return ok;
}


std::string SecurityGroupRequest::getInstanceId() const
{
    return instanceId_;
}

void SecurityGroupRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SecurityGroupRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SecurityGroupRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::vector<std::string>& SecurityGroupRequest::getSecuritygroupIds()
{
    return securitygroupIds_;
}

void SecurityGroupRequest::setSecuritygroupIds(const std::vector<std::string>& value)
{
    securitygroupIds_ = value;
    securitygroupIdsIsSet_ = true;
}

bool SecurityGroupRequest::securitygroupIdsIsSet() const
{
    return securitygroupIdsIsSet_;
}

void SecurityGroupRequest::unsetsecuritygroupIds()
{
    securitygroupIdsIsSet_ = false;
}

}
}
}
}
}


