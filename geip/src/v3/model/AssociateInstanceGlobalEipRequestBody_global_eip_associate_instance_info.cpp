

#include "huaweicloud/geip/v3/model/AssociateInstanceGlobalEipRequestBody_global_eip_associate_instance_info.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




AssociateInstanceGlobalEipRequestBody_global_eip_associate_instance_info::AssociateInstanceGlobalEipRequestBody_global_eip_associate_instance_info()
{
    region_ = "";
    regionIsSet_ = false;
    instanceType_ = "";
    instanceTypeIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    serviceId_ = "";
    serviceIdIsSet_ = false;
    serviceType_ = "";
    serviceTypeIsSet_ = false;
}

AssociateInstanceGlobalEipRequestBody_global_eip_associate_instance_info::~AssociateInstanceGlobalEipRequestBody_global_eip_associate_instance_info() = default;

void AssociateInstanceGlobalEipRequestBody_global_eip_associate_instance_info::validate()
{
}

web::json::value AssociateInstanceGlobalEipRequestBody_global_eip_associate_instance_info::toJson() const
{
    web::json::value val = web::json::value::object();

    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(instanceTypeIsSet_) {
        val[utility::conversions::to_string_t("instance_type")] = ModelBase::toJson(instanceType_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(serviceIdIsSet_) {
        val[utility::conversions::to_string_t("service_id")] = ModelBase::toJson(serviceId_);
    }
    if(serviceTypeIsSet_) {
        val[utility::conversions::to_string_t("service_type")] = ModelBase::toJson(serviceType_);
    }

    return val;
}
bool AssociateInstanceGlobalEipRequestBody_global_eip_associate_instance_info::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceType(refVal);
        }
    }
    return ok;
}


std::string AssociateInstanceGlobalEipRequestBody_global_eip_associate_instance_info::getRegion() const
{
    return region_;
}

void AssociateInstanceGlobalEipRequestBody_global_eip_associate_instance_info::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool AssociateInstanceGlobalEipRequestBody_global_eip_associate_instance_info::regionIsSet() const
{
    return regionIsSet_;
}

void AssociateInstanceGlobalEipRequestBody_global_eip_associate_instance_info::unsetregion()
{
    regionIsSet_ = false;
}

std::string AssociateInstanceGlobalEipRequestBody_global_eip_associate_instance_info::getInstanceType() const
{
    return instanceType_;
}

void AssociateInstanceGlobalEipRequestBody_global_eip_associate_instance_info::setInstanceType(const std::string& value)
{
    instanceType_ = value;
    instanceTypeIsSet_ = true;
}

bool AssociateInstanceGlobalEipRequestBody_global_eip_associate_instance_info::instanceTypeIsSet() const
{
    return instanceTypeIsSet_;
}

void AssociateInstanceGlobalEipRequestBody_global_eip_associate_instance_info::unsetinstanceType()
{
    instanceTypeIsSet_ = false;
}

std::string AssociateInstanceGlobalEipRequestBody_global_eip_associate_instance_info::getInstanceId() const
{
    return instanceId_;
}

void AssociateInstanceGlobalEipRequestBody_global_eip_associate_instance_info::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool AssociateInstanceGlobalEipRequestBody_global_eip_associate_instance_info::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void AssociateInstanceGlobalEipRequestBody_global_eip_associate_instance_info::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string AssociateInstanceGlobalEipRequestBody_global_eip_associate_instance_info::getProjectId() const
{
    return projectId_;
}

void AssociateInstanceGlobalEipRequestBody_global_eip_associate_instance_info::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool AssociateInstanceGlobalEipRequestBody_global_eip_associate_instance_info::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void AssociateInstanceGlobalEipRequestBody_global_eip_associate_instance_info::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string AssociateInstanceGlobalEipRequestBody_global_eip_associate_instance_info::getServiceId() const
{
    return serviceId_;
}

void AssociateInstanceGlobalEipRequestBody_global_eip_associate_instance_info::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool AssociateInstanceGlobalEipRequestBody_global_eip_associate_instance_info::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void AssociateInstanceGlobalEipRequestBody_global_eip_associate_instance_info::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string AssociateInstanceGlobalEipRequestBody_global_eip_associate_instance_info::getServiceType() const
{
    return serviceType_;
}

void AssociateInstanceGlobalEipRequestBody_global_eip_associate_instance_info::setServiceType(const std::string& value)
{
    serviceType_ = value;
    serviceTypeIsSet_ = true;
}

bool AssociateInstanceGlobalEipRequestBody_global_eip_associate_instance_info::serviceTypeIsSet() const
{
    return serviceTypeIsSet_;
}

void AssociateInstanceGlobalEipRequestBody_global_eip_associate_instance_info::unsetserviceType()
{
    serviceTypeIsSet_ = false;
}

}
}
}
}
}


