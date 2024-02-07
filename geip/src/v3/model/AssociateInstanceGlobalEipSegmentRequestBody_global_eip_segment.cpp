

#include "huaweicloud/geip/v3/model/AssociateInstanceGlobalEipSegmentRequestBody_global_eip_segment.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




AssociateInstanceGlobalEipSegmentRequestBody_global_eip_segment::AssociateInstanceGlobalEipSegmentRequestBody_global_eip_segment()
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

AssociateInstanceGlobalEipSegmentRequestBody_global_eip_segment::~AssociateInstanceGlobalEipSegmentRequestBody_global_eip_segment() = default;

void AssociateInstanceGlobalEipSegmentRequestBody_global_eip_segment::validate()
{
}

web::json::value AssociateInstanceGlobalEipSegmentRequestBody_global_eip_segment::toJson() const
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
bool AssociateInstanceGlobalEipSegmentRequestBody_global_eip_segment::fromJson(const web::json::value& val)
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


std::string AssociateInstanceGlobalEipSegmentRequestBody_global_eip_segment::getRegion() const
{
    return region_;
}

void AssociateInstanceGlobalEipSegmentRequestBody_global_eip_segment::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool AssociateInstanceGlobalEipSegmentRequestBody_global_eip_segment::regionIsSet() const
{
    return regionIsSet_;
}

void AssociateInstanceGlobalEipSegmentRequestBody_global_eip_segment::unsetregion()
{
    regionIsSet_ = false;
}

std::string AssociateInstanceGlobalEipSegmentRequestBody_global_eip_segment::getInstanceType() const
{
    return instanceType_;
}

void AssociateInstanceGlobalEipSegmentRequestBody_global_eip_segment::setInstanceType(const std::string& value)
{
    instanceType_ = value;
    instanceTypeIsSet_ = true;
}

bool AssociateInstanceGlobalEipSegmentRequestBody_global_eip_segment::instanceTypeIsSet() const
{
    return instanceTypeIsSet_;
}

void AssociateInstanceGlobalEipSegmentRequestBody_global_eip_segment::unsetinstanceType()
{
    instanceTypeIsSet_ = false;
}

std::string AssociateInstanceGlobalEipSegmentRequestBody_global_eip_segment::getInstanceId() const
{
    return instanceId_;
}

void AssociateInstanceGlobalEipSegmentRequestBody_global_eip_segment::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool AssociateInstanceGlobalEipSegmentRequestBody_global_eip_segment::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void AssociateInstanceGlobalEipSegmentRequestBody_global_eip_segment::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string AssociateInstanceGlobalEipSegmentRequestBody_global_eip_segment::getProjectId() const
{
    return projectId_;
}

void AssociateInstanceGlobalEipSegmentRequestBody_global_eip_segment::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool AssociateInstanceGlobalEipSegmentRequestBody_global_eip_segment::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void AssociateInstanceGlobalEipSegmentRequestBody_global_eip_segment::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string AssociateInstanceGlobalEipSegmentRequestBody_global_eip_segment::getServiceId() const
{
    return serviceId_;
}

void AssociateInstanceGlobalEipSegmentRequestBody_global_eip_segment::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool AssociateInstanceGlobalEipSegmentRequestBody_global_eip_segment::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void AssociateInstanceGlobalEipSegmentRequestBody_global_eip_segment::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string AssociateInstanceGlobalEipSegmentRequestBody_global_eip_segment::getServiceType() const
{
    return serviceType_;
}

void AssociateInstanceGlobalEipSegmentRequestBody_global_eip_segment::setServiceType(const std::string& value)
{
    serviceType_ = value;
    serviceTypeIsSet_ = true;
}

bool AssociateInstanceGlobalEipSegmentRequestBody_global_eip_segment::serviceTypeIsSet() const
{
    return serviceTypeIsSet_;
}

void AssociateInstanceGlobalEipSegmentRequestBody_global_eip_segment::unsetserviceType()
{
    serviceTypeIsSet_ = false;
}

}
}
}
}
}


