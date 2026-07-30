

#include "huaweicloud/modelarts/v1/model/ImageResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ImageResponse::ImageResponse()
{
    arch_ = "";
    archIsSet_ = false;
    createAt_ = 0L;
    createAtIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    devServicesIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    namespace_ = "";
    namespaceIsSet_ = false;
    origin_ = "";
    originIsSet_ = false;
    resourceCategoriesIsSet_ = false;
    serviceType_ = "";
    serviceTypeIsSet_ = false;
    size_ = 0L;
    sizeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    statusMessage_ = "";
    statusMessageIsSet_ = false;
    swrPath_ = "";
    swrPathIsSet_ = false;
    tag_ = "";
    tagIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    updateAt_ = 0L;
    updateAtIsSet_ = false;
    visibility_ = "";
    visibilityIsSet_ = false;
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    flavorType_ = "";
    flavorTypeIsSet_ = false;
    swrInstanceId_ = "";
    swrInstanceIdIsSet_ = false;
    showName_ = "";
    showNameIsSet_ = false;
    showTag_ = "";
    showTagIsSet_ = false;
    tagsIsSet_ = false;
}

ImageResponse::~ImageResponse() = default;

void ImageResponse::validate()
{
}

web::json::value ImageResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(archIsSet_) {
        val[utility::conversions::to_string_t("arch")] = ModelBase::toJson(arch_);
    }
    if(createAtIsSet_) {
        val[utility::conversions::to_string_t("create_at")] = ModelBase::toJson(createAt_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(devServicesIsSet_) {
        val[utility::conversions::to_string_t("dev_services")] = ModelBase::toJson(devServices_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(namespaceIsSet_) {
        val[utility::conversions::to_string_t("namespace")] = ModelBase::toJson(namespace_);
    }
    if(originIsSet_) {
        val[utility::conversions::to_string_t("origin")] = ModelBase::toJson(origin_);
    }
    if(resourceCategoriesIsSet_) {
        val[utility::conversions::to_string_t("resource_categories")] = ModelBase::toJson(resourceCategories_);
    }
    if(serviceTypeIsSet_) {
        val[utility::conversions::to_string_t("service_type")] = ModelBase::toJson(serviceType_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(statusMessageIsSet_) {
        val[utility::conversions::to_string_t("status_message")] = ModelBase::toJson(statusMessage_);
    }
    if(swrPathIsSet_) {
        val[utility::conversions::to_string_t("swr_path")] = ModelBase::toJson(swrPath_);
    }
    if(tagIsSet_) {
        val[utility::conversions::to_string_t("tag")] = ModelBase::toJson(tag_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(updateAtIsSet_) {
        val[utility::conversions::to_string_t("update_at")] = ModelBase::toJson(updateAt_);
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
    if(swrInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("swr_instance_id")] = ModelBase::toJson(swrInstanceId_);
    }
    if(showNameIsSet_) {
        val[utility::conversions::to_string_t("show_name")] = ModelBase::toJson(showName_);
    }
    if(showTagIsSet_) {
        val[utility::conversions::to_string_t("show_tag")] = ModelBase::toJson(showTag_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool ImageResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("create_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateAt(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("dev_services"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dev_services"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDevServices(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("namespace"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("namespace"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNamespace(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("resource_categories"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_categories"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceCategories(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatusMessage(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateAt(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("swr_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("swr_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSwrInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("show_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("show_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShowName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("show_tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("show_tag"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShowTag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TmsTagResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::string ImageResponse::getArch() const
{
    return arch_;
}

void ImageResponse::setArch(const std::string& value)
{
    arch_ = value;
    archIsSet_ = true;
}

bool ImageResponse::archIsSet() const
{
    return archIsSet_;
}

void ImageResponse::unsetarch()
{
    archIsSet_ = false;
}

int64_t ImageResponse::getCreateAt() const
{
    return createAt_;
}

void ImageResponse::setCreateAt(int64_t value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool ImageResponse::createAtIsSet() const
{
    return createAtIsSet_;
}

void ImageResponse::unsetcreateAt()
{
    createAtIsSet_ = false;
}

std::string ImageResponse::getDescription() const
{
    return description_;
}

void ImageResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ImageResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ImageResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<std::string>& ImageResponse::getDevServices()
{
    return devServices_;
}

void ImageResponse::setDevServices(const std::vector<std::string>& value)
{
    devServices_ = value;
    devServicesIsSet_ = true;
}

bool ImageResponse::devServicesIsSet() const
{
    return devServicesIsSet_;
}

void ImageResponse::unsetdevServices()
{
    devServicesIsSet_ = false;
}

std::string ImageResponse::getId() const
{
    return id_;
}

void ImageResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ImageResponse::idIsSet() const
{
    return idIsSet_;
}

void ImageResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ImageResponse::getName() const
{
    return name_;
}

void ImageResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ImageResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ImageResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ImageResponse::getNamespace() const
{
    return namespace_;
}

void ImageResponse::setNamespace(const std::string& value)
{
    namespace_ = value;
    namespaceIsSet_ = true;
}

bool ImageResponse::namespaceIsSet() const
{
    return namespaceIsSet_;
}

void ImageResponse::unsetnamespace()
{
    namespaceIsSet_ = false;
}

std::string ImageResponse::getOrigin() const
{
    return origin_;
}

void ImageResponse::setOrigin(const std::string& value)
{
    origin_ = value;
    originIsSet_ = true;
}

bool ImageResponse::originIsSet() const
{
    return originIsSet_;
}

void ImageResponse::unsetorigin()
{
    originIsSet_ = false;
}

std::vector<std::string>& ImageResponse::getResourceCategories()
{
    return resourceCategories_;
}

void ImageResponse::setResourceCategories(const std::vector<std::string>& value)
{
    resourceCategories_ = value;
    resourceCategoriesIsSet_ = true;
}

bool ImageResponse::resourceCategoriesIsSet() const
{
    return resourceCategoriesIsSet_;
}

void ImageResponse::unsetresourceCategories()
{
    resourceCategoriesIsSet_ = false;
}

std::string ImageResponse::getServiceType() const
{
    return serviceType_;
}

void ImageResponse::setServiceType(const std::string& value)
{
    serviceType_ = value;
    serviceTypeIsSet_ = true;
}

bool ImageResponse::serviceTypeIsSet() const
{
    return serviceTypeIsSet_;
}

void ImageResponse::unsetserviceType()
{
    serviceTypeIsSet_ = false;
}

int64_t ImageResponse::getSize() const
{
    return size_;
}

void ImageResponse::setSize(int64_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ImageResponse::sizeIsSet() const
{
    return sizeIsSet_;
}

void ImageResponse::unsetsize()
{
    sizeIsSet_ = false;
}

std::string ImageResponse::getStatus() const
{
    return status_;
}

void ImageResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ImageResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ImageResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ImageResponse::getStatusMessage() const
{
    return statusMessage_;
}

void ImageResponse::setStatusMessage(const std::string& value)
{
    statusMessage_ = value;
    statusMessageIsSet_ = true;
}

bool ImageResponse::statusMessageIsSet() const
{
    return statusMessageIsSet_;
}

void ImageResponse::unsetstatusMessage()
{
    statusMessageIsSet_ = false;
}

std::string ImageResponse::getSwrPath() const
{
    return swrPath_;
}

void ImageResponse::setSwrPath(const std::string& value)
{
    swrPath_ = value;
    swrPathIsSet_ = true;
}

bool ImageResponse::swrPathIsSet() const
{
    return swrPathIsSet_;
}

void ImageResponse::unsetswrPath()
{
    swrPathIsSet_ = false;
}

std::string ImageResponse::getTag() const
{
    return tag_;
}

void ImageResponse::setTag(const std::string& value)
{
    tag_ = value;
    tagIsSet_ = true;
}

bool ImageResponse::tagIsSet() const
{
    return tagIsSet_;
}

void ImageResponse::unsettag()
{
    tagIsSet_ = false;
}

std::string ImageResponse::getType() const
{
    return type_;
}

void ImageResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ImageResponse::typeIsSet() const
{
    return typeIsSet_;
}

void ImageResponse::unsettype()
{
    typeIsSet_ = false;
}

int64_t ImageResponse::getUpdateAt() const
{
    return updateAt_;
}

void ImageResponse::setUpdateAt(int64_t value)
{
    updateAt_ = value;
    updateAtIsSet_ = true;
}

bool ImageResponse::updateAtIsSet() const
{
    return updateAtIsSet_;
}

void ImageResponse::unsetupdateAt()
{
    updateAtIsSet_ = false;
}

std::string ImageResponse::getVisibility() const
{
    return visibility_;
}

void ImageResponse::setVisibility(const std::string& value)
{
    visibility_ = value;
    visibilityIsSet_ = true;
}

bool ImageResponse::visibilityIsSet() const
{
    return visibilityIsSet_;
}

void ImageResponse::unsetvisibility()
{
    visibilityIsSet_ = false;
}

std::string ImageResponse::getWorkspaceId() const
{
    return workspaceId_;
}

void ImageResponse::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool ImageResponse::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void ImageResponse::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

std::string ImageResponse::getFlavorType() const
{
    return flavorType_;
}

void ImageResponse::setFlavorType(const std::string& value)
{
    flavorType_ = value;
    flavorTypeIsSet_ = true;
}

bool ImageResponse::flavorTypeIsSet() const
{
    return flavorTypeIsSet_;
}

void ImageResponse::unsetflavorType()
{
    flavorTypeIsSet_ = false;
}

std::string ImageResponse::getSwrInstanceId() const
{
    return swrInstanceId_;
}

void ImageResponse::setSwrInstanceId(const std::string& value)
{
    swrInstanceId_ = value;
    swrInstanceIdIsSet_ = true;
}

bool ImageResponse::swrInstanceIdIsSet() const
{
    return swrInstanceIdIsSet_;
}

void ImageResponse::unsetswrInstanceId()
{
    swrInstanceIdIsSet_ = false;
}

std::string ImageResponse::getShowName() const
{
    return showName_;
}

void ImageResponse::setShowName(const std::string& value)
{
    showName_ = value;
    showNameIsSet_ = true;
}

bool ImageResponse::showNameIsSet() const
{
    return showNameIsSet_;
}

void ImageResponse::unsetshowName()
{
    showNameIsSet_ = false;
}

std::string ImageResponse::getShowTag() const
{
    return showTag_;
}

void ImageResponse::setShowTag(const std::string& value)
{
    showTag_ = value;
    showTagIsSet_ = true;
}

bool ImageResponse::showTagIsSet() const
{
    return showTagIsSet_;
}

void ImageResponse::unsetshowTag()
{
    showTagIsSet_ = false;
}

std::vector<TmsTagResponse>& ImageResponse::getTags()
{
    return tags_;
}

void ImageResponse::setTags(const std::vector<TmsTagResponse>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ImageResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ImageResponse::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


