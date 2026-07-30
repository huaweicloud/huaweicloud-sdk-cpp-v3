

#include "huaweicloud/modelarts/v1/model/ImageRegRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ImageRegRequest::ImageRegRequest()
{
    arch_ = "";
    archIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    origin_ = "";
    originIsSet_ = false;
    resourceCategoryIsSet_ = false;
    serviceType_ = "";
    serviceTypeIsSet_ = false;
    servicesIsSet_ = false;
    swrPath_ = "";
    swrPathIsSet_ = false;
    visibility_ = "";
    visibilityIsSet_ = false;
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    flavorType_ = "";
    flavorTypeIsSet_ = false;
    tagsIsSet_ = false;
    swrInstanceId_ = "";
    swrInstanceIdIsSet_ = false;
    readMe_ = "";
    readMeIsSet_ = false;
}

ImageRegRequest::~ImageRegRequest() = default;

void ImageRegRequest::validate()
{
}

web::json::value ImageRegRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(archIsSet_) {
        val[utility::conversions::to_string_t("arch")] = ModelBase::toJson(arch_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(originIsSet_) {
        val[utility::conversions::to_string_t("origin")] = ModelBase::toJson(origin_);
    }
    if(resourceCategoryIsSet_) {
        val[utility::conversions::to_string_t("resource_category")] = ModelBase::toJson(resourceCategory_);
    }
    if(serviceTypeIsSet_) {
        val[utility::conversions::to_string_t("service_type")] = ModelBase::toJson(serviceType_);
    }
    if(servicesIsSet_) {
        val[utility::conversions::to_string_t("services")] = ModelBase::toJson(services_);
    }
    if(swrPathIsSet_) {
        val[utility::conversions::to_string_t("swr_path")] = ModelBase::toJson(swrPath_);
    }
    if(visibilityIsSet_) {
        val[utility::conversions::to_string_t("visibility")] = ModelBase::toJson(visibility_);
    }
    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }
    if(flavorTypeIsSet_) {
        val[utility::conversions::to_string_t("flavor_type")] = ModelBase::toJson(flavorType_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(swrInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("swr_instance_id")] = ModelBase::toJson(swrInstanceId_);
    }
    if(readMeIsSet_) {
        val[utility::conversions::to_string_t("read_me")] = ModelBase::toJson(readMe_);
    }

    return val;
}
bool ImageRegRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("arch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("arch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("origin"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("origin"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrigin(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_category"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceCategory(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("services"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("services"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServices(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("swr_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("swr_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSwrPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("visibility"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("visibility"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVisibility(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("workspace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workspace_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkspaceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("swr_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("swr_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSwrInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("read_me"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("read_me"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReadMe(refVal);
        }
    }
    return ok;
}


std::string ImageRegRequest::getArch() const
{
    return arch_;
}

void ImageRegRequest::setArch(const std::string& value)
{
    arch_ = value;
    archIsSet_ = true;
}

bool ImageRegRequest::archIsSet() const
{
    return archIsSet_;
}

void ImageRegRequest::unsetarch()
{
    archIsSet_ = false;
}

std::string ImageRegRequest::getDescription() const
{
    return description_;
}

void ImageRegRequest::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ImageRegRequest::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ImageRegRequest::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ImageRegRequest::getOrigin() const
{
    return origin_;
}

void ImageRegRequest::setOrigin(const std::string& value)
{
    origin_ = value;
    originIsSet_ = true;
}

bool ImageRegRequest::originIsSet() const
{
    return originIsSet_;
}

void ImageRegRequest::unsetorigin()
{
    originIsSet_ = false;
}

std::vector<std::string>& ImageRegRequest::getResourceCategory()
{
    return resourceCategory_;
}

void ImageRegRequest::setResourceCategory(const std::vector<std::string>& value)
{
    resourceCategory_ = value;
    resourceCategoryIsSet_ = true;
}

bool ImageRegRequest::resourceCategoryIsSet() const
{
    return resourceCategoryIsSet_;
}

void ImageRegRequest::unsetresourceCategory()
{
    resourceCategoryIsSet_ = false;
}

std::string ImageRegRequest::getServiceType() const
{
    return serviceType_;
}

void ImageRegRequest::setServiceType(const std::string& value)
{
    serviceType_ = value;
    serviceTypeIsSet_ = true;
}

bool ImageRegRequest::serviceTypeIsSet() const
{
    return serviceTypeIsSet_;
}

void ImageRegRequest::unsetserviceType()
{
    serviceTypeIsSet_ = false;
}

std::vector<std::string>& ImageRegRequest::getServices()
{
    return services_;
}

void ImageRegRequest::setServices(const std::vector<std::string>& value)
{
    services_ = value;
    servicesIsSet_ = true;
}

bool ImageRegRequest::servicesIsSet() const
{
    return servicesIsSet_;
}

void ImageRegRequest::unsetservices()
{
    servicesIsSet_ = false;
}

std::string ImageRegRequest::getSwrPath() const
{
    return swrPath_;
}

void ImageRegRequest::setSwrPath(const std::string& value)
{
    swrPath_ = value;
    swrPathIsSet_ = true;
}

bool ImageRegRequest::swrPathIsSet() const
{
    return swrPathIsSet_;
}

void ImageRegRequest::unsetswrPath()
{
    swrPathIsSet_ = false;
}

std::string ImageRegRequest::getVisibility() const
{
    return visibility_;
}

void ImageRegRequest::setVisibility(const std::string& value)
{
    visibility_ = value;
    visibilityIsSet_ = true;
}

bool ImageRegRequest::visibilityIsSet() const
{
    return visibilityIsSet_;
}

void ImageRegRequest::unsetvisibility()
{
    visibilityIsSet_ = false;
}

std::string ImageRegRequest::getWorkspaceId() const
{
    return workspaceId_;
}

void ImageRegRequest::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool ImageRegRequest::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void ImageRegRequest::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

std::string ImageRegRequest::getFlavorType() const
{
    return flavorType_;
}

void ImageRegRequest::setFlavorType(const std::string& value)
{
    flavorType_ = value;
    flavorTypeIsSet_ = true;
}

bool ImageRegRequest::flavorTypeIsSet() const
{
    return flavorTypeIsSet_;
}

void ImageRegRequest::unsetflavorType()
{
    flavorTypeIsSet_ = false;
}

std::vector<std::string>& ImageRegRequest::getTags()
{
    return tags_;
}

void ImageRegRequest::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ImageRegRequest::tagsIsSet() const
{
    return tagsIsSet_;
}

void ImageRegRequest::unsettags()
{
    tagsIsSet_ = false;
}

std::string ImageRegRequest::getSwrInstanceId() const
{
    return swrInstanceId_;
}

void ImageRegRequest::setSwrInstanceId(const std::string& value)
{
    swrInstanceId_ = value;
    swrInstanceIdIsSet_ = true;
}

bool ImageRegRequest::swrInstanceIdIsSet() const
{
    return swrInstanceIdIsSet_;
}

void ImageRegRequest::unsetswrInstanceId()
{
    swrInstanceIdIsSet_ = false;
}

std::string ImageRegRequest::getReadMe() const
{
    return readMe_;
}

void ImageRegRequest::setReadMe(const std::string& value)
{
    readMe_ = value;
    readMeIsSet_ = true;
}

bool ImageRegRequest::readMeIsSet() const
{
    return readMeIsSet_;
}

void ImageRegRequest::unsetreadMe()
{
    readMeIsSet_ = false;
}

}
}
}
}
}


