

#include "huaweicloud/cloudtest/v1/model/LabelVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




LabelVo::LabelVo()
{
    uri_ = "";
    uriIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    labelName_ = "";
    labelNameIsSet_ = false;
    serviceType_ = "";
    serviceTypeIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
}

LabelVo::~LabelVo() = default;

void LabelVo::validate()
{
}

web::json::value LabelVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uriIsSet_) {
        val[utility::conversions::to_string_t("uri")] = ModelBase::toJson(uri_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(labelNameIsSet_) {
        val[utility::conversions::to_string_t("label_name")] = ModelBase::toJson(labelName_);
    }
    if(serviceTypeIsSet_) {
        val[utility::conversions::to_string_t("service_type")] = ModelBase::toJson(serviceType_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool LabelVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("label_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("label_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLabelName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
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
    return ok;
}


std::string LabelVo::getUri() const
{
    return uri_;
}

void LabelVo::setUri(const std::string& value)
{
    uri_ = value;
    uriIsSet_ = true;
}

bool LabelVo::uriIsSet() const
{
    return uriIsSet_;
}

void LabelVo::unseturi()
{
    uriIsSet_ = false;
}

std::string LabelVo::getRegion() const
{
    return region_;
}

void LabelVo::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool LabelVo::regionIsSet() const
{
    return regionIsSet_;
}

void LabelVo::unsetregion()
{
    regionIsSet_ = false;
}

std::string LabelVo::getLabelName() const
{
    return labelName_;
}

void LabelVo::setLabelName(const std::string& value)
{
    labelName_ = value;
    labelNameIsSet_ = true;
}

bool LabelVo::labelNameIsSet() const
{
    return labelNameIsSet_;
}

void LabelVo::unsetlabelName()
{
    labelNameIsSet_ = false;
}

std::string LabelVo::getServiceType() const
{
    return serviceType_;
}

void LabelVo::setServiceType(const std::string& value)
{
    serviceType_ = value;
    serviceTypeIsSet_ = true;
}

bool LabelVo::serviceTypeIsSet() const
{
    return serviceTypeIsSet_;
}

void LabelVo::unsetserviceType()
{
    serviceTypeIsSet_ = false;
}

std::string LabelVo::getResourceType() const
{
    return resourceType_;
}

void LabelVo::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool LabelVo::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void LabelVo::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string LabelVo::getProjectId() const
{
    return projectId_;
}

void LabelVo::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool LabelVo::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void LabelVo::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}


