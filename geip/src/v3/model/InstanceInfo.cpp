

#include "huaweicloud/geip/v3/model/InstanceInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




InstanceInfo::InstanceInfo()
{
    region_ = "";
    regionIsSet_ = false;
    quarkVpcEndpoint_ = "";
    quarkVpcEndpointIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    instanceType_ = "";
    instanceTypeIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    serviceType_ = "";
    serviceTypeIsSet_ = false;
    serviceId_ = "";
    serviceIdIsSet_ = false;
    publicBorderGroup_ = "";
    publicBorderGroupIsSet_ = false;
    instanceSite_ = "";
    instanceSiteIsSet_ = false;
}

InstanceInfo::~InstanceInfo() = default;

void InstanceInfo::validate()
{
}

web::json::value InstanceInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(quarkVpcEndpointIsSet_) {
        val[utility::conversions::to_string_t("quarkVpcEndpoint")] = ModelBase::toJson(quarkVpcEndpoint_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(instanceTypeIsSet_) {
        val[utility::conversions::to_string_t("instance_type")] = ModelBase::toJson(instanceType_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(serviceTypeIsSet_) {
        val[utility::conversions::to_string_t("service_type")] = ModelBase::toJson(serviceType_);
    }
    if(serviceIdIsSet_) {
        val[utility::conversions::to_string_t("service_id")] = ModelBase::toJson(serviceId_);
    }
    if(publicBorderGroupIsSet_) {
        val[utility::conversions::to_string_t("public_border_group")] = ModelBase::toJson(publicBorderGroup_);
    }
    if(instanceSiteIsSet_) {
        val[utility::conversions::to_string_t("instance_site")] = ModelBase::toJson(instanceSite_);
    }

    return val;
}
bool InstanceInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("quarkVpcEndpoint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quarkVpcEndpoint"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuarkVpcEndpoint(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("service_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("public_border_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_border_group"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicBorderGroup(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_site"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_site"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceSite(refVal);
        }
    }
    return ok;
}


std::string InstanceInfo::getRegion() const
{
    return region_;
}

void InstanceInfo::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool InstanceInfo::regionIsSet() const
{
    return regionIsSet_;
}

void InstanceInfo::unsetregion()
{
    regionIsSet_ = false;
}

std::string InstanceInfo::getQuarkVpcEndpoint() const
{
    return quarkVpcEndpoint_;
}

void InstanceInfo::setQuarkVpcEndpoint(const std::string& value)
{
    quarkVpcEndpoint_ = value;
    quarkVpcEndpointIsSet_ = true;
}

bool InstanceInfo::quarkVpcEndpointIsSet() const
{
    return quarkVpcEndpointIsSet_;
}

void InstanceInfo::unsetquarkVpcEndpoint()
{
    quarkVpcEndpointIsSet_ = false;
}

std::string InstanceInfo::getProjectId() const
{
    return projectId_;
}

void InstanceInfo::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool InstanceInfo::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void InstanceInfo::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string InstanceInfo::getInstanceType() const
{
    return instanceType_;
}

void InstanceInfo::setInstanceType(const std::string& value)
{
    instanceType_ = value;
    instanceTypeIsSet_ = true;
}

bool InstanceInfo::instanceTypeIsSet() const
{
    return instanceTypeIsSet_;
}

void InstanceInfo::unsetinstanceType()
{
    instanceTypeIsSet_ = false;
}

std::string InstanceInfo::getInstanceId() const
{
    return instanceId_;
}

void InstanceInfo::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool InstanceInfo::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void InstanceInfo::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string InstanceInfo::getServiceType() const
{
    return serviceType_;
}

void InstanceInfo::setServiceType(const std::string& value)
{
    serviceType_ = value;
    serviceTypeIsSet_ = true;
}

bool InstanceInfo::serviceTypeIsSet() const
{
    return serviceTypeIsSet_;
}

void InstanceInfo::unsetserviceType()
{
    serviceTypeIsSet_ = false;
}

std::string InstanceInfo::getServiceId() const
{
    return serviceId_;
}

void InstanceInfo::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool InstanceInfo::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void InstanceInfo::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string InstanceInfo::getPublicBorderGroup() const
{
    return publicBorderGroup_;
}

void InstanceInfo::setPublicBorderGroup(const std::string& value)
{
    publicBorderGroup_ = value;
    publicBorderGroupIsSet_ = true;
}

bool InstanceInfo::publicBorderGroupIsSet() const
{
    return publicBorderGroupIsSet_;
}

void InstanceInfo::unsetpublicBorderGroup()
{
    publicBorderGroupIsSet_ = false;
}

std::string InstanceInfo::getInstanceSite() const
{
    return instanceSite_;
}

void InstanceInfo::setInstanceSite(const std::string& value)
{
    instanceSite_ = value;
    instanceSiteIsSet_ = true;
}

bool InstanceInfo::instanceSiteIsSet() const
{
    return instanceSiteIsSet_;
}

void InstanceInfo::unsetinstanceSite()
{
    instanceSiteIsSet_ = false;
}

}
}
}
}
}


