

#include "huaweicloud/modelarts/v1/model/Image.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Image::Image()
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
    supportResCategoriesIsSet_ = false;
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

Image::~Image() = default;

void Image::validate()
{
}

web::json::value Image::toJson() const
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
    if(supportResCategoriesIsSet_) {
        val[utility::conversions::to_string_t("support_res_categories")] = ModelBase::toJson(supportResCategories_);
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
bool Image::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("support_res_categories"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("support_res_categories"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportResCategories(refVal);
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


std::string Image::getArch() const
{
    return arch_;
}

void Image::setArch(const std::string& value)
{
    arch_ = value;
    archIsSet_ = true;
}

bool Image::archIsSet() const
{
    return archIsSet_;
}

void Image::unsetarch()
{
    archIsSet_ = false;
}

int64_t Image::getCreateAt() const
{
    return createAt_;
}

void Image::setCreateAt(int64_t value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool Image::createAtIsSet() const
{
    return createAtIsSet_;
}

void Image::unsetcreateAt()
{
    createAtIsSet_ = false;
}

std::string Image::getDescription() const
{
    return description_;
}

void Image::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool Image::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void Image::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<std::string>& Image::getDevServices()
{
    return devServices_;
}

void Image::setDevServices(const std::vector<std::string>& value)
{
    devServices_ = value;
    devServicesIsSet_ = true;
}

bool Image::devServicesIsSet() const
{
    return devServicesIsSet_;
}

void Image::unsetdevServices()
{
    devServicesIsSet_ = false;
}

std::string Image::getId() const
{
    return id_;
}

void Image::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool Image::idIsSet() const
{
    return idIsSet_;
}

void Image::unsetid()
{
    idIsSet_ = false;
}

std::string Image::getName() const
{
    return name_;
}

void Image::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Image::nameIsSet() const
{
    return nameIsSet_;
}

void Image::unsetname()
{
    nameIsSet_ = false;
}

std::string Image::getNamespace() const
{
    return namespace_;
}

void Image::setNamespace(const std::string& value)
{
    namespace_ = value;
    namespaceIsSet_ = true;
}

bool Image::namespaceIsSet() const
{
    return namespaceIsSet_;
}

void Image::unsetnamespace()
{
    namespaceIsSet_ = false;
}

std::string Image::getOrigin() const
{
    return origin_;
}

void Image::setOrigin(const std::string& value)
{
    origin_ = value;
    originIsSet_ = true;
}

bool Image::originIsSet() const
{
    return originIsSet_;
}

void Image::unsetorigin()
{
    originIsSet_ = false;
}

std::vector<std::string>& Image::getResourceCategories()
{
    return resourceCategories_;
}

void Image::setResourceCategories(const std::vector<std::string>& value)
{
    resourceCategories_ = value;
    resourceCategoriesIsSet_ = true;
}

bool Image::resourceCategoriesIsSet() const
{
    return resourceCategoriesIsSet_;
}

void Image::unsetresourceCategories()
{
    resourceCategoriesIsSet_ = false;
}

std::string Image::getServiceType() const
{
    return serviceType_;
}

void Image::setServiceType(const std::string& value)
{
    serviceType_ = value;
    serviceTypeIsSet_ = true;
}

bool Image::serviceTypeIsSet() const
{
    return serviceTypeIsSet_;
}

void Image::unsetserviceType()
{
    serviceTypeIsSet_ = false;
}

int64_t Image::getSize() const
{
    return size_;
}

void Image::setSize(int64_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool Image::sizeIsSet() const
{
    return sizeIsSet_;
}

void Image::unsetsize()
{
    sizeIsSet_ = false;
}

std::string Image::getStatus() const
{
    return status_;
}

void Image::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool Image::statusIsSet() const
{
    return statusIsSet_;
}

void Image::unsetstatus()
{
    statusIsSet_ = false;
}

std::string Image::getStatusMessage() const
{
    return statusMessage_;
}

void Image::setStatusMessage(const std::string& value)
{
    statusMessage_ = value;
    statusMessageIsSet_ = true;
}

bool Image::statusMessageIsSet() const
{
    return statusMessageIsSet_;
}

void Image::unsetstatusMessage()
{
    statusMessageIsSet_ = false;
}

std::vector<std::string>& Image::getSupportResCategories()
{
    return supportResCategories_;
}

void Image::setSupportResCategories(const std::vector<std::string>& value)
{
    supportResCategories_ = value;
    supportResCategoriesIsSet_ = true;
}

bool Image::supportResCategoriesIsSet() const
{
    return supportResCategoriesIsSet_;
}

void Image::unsetsupportResCategories()
{
    supportResCategoriesIsSet_ = false;
}

std::string Image::getSwrPath() const
{
    return swrPath_;
}

void Image::setSwrPath(const std::string& value)
{
    swrPath_ = value;
    swrPathIsSet_ = true;
}

bool Image::swrPathIsSet() const
{
    return swrPathIsSet_;
}

void Image::unsetswrPath()
{
    swrPathIsSet_ = false;
}

std::string Image::getTag() const
{
    return tag_;
}

void Image::setTag(const std::string& value)
{
    tag_ = value;
    tagIsSet_ = true;
}

bool Image::tagIsSet() const
{
    return tagIsSet_;
}

void Image::unsettag()
{
    tagIsSet_ = false;
}

std::string Image::getType() const
{
    return type_;
}

void Image::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool Image::typeIsSet() const
{
    return typeIsSet_;
}

void Image::unsettype()
{
    typeIsSet_ = false;
}

int64_t Image::getUpdateAt() const
{
    return updateAt_;
}

void Image::setUpdateAt(int64_t value)
{
    updateAt_ = value;
    updateAtIsSet_ = true;
}

bool Image::updateAtIsSet() const
{
    return updateAtIsSet_;
}

void Image::unsetupdateAt()
{
    updateAtIsSet_ = false;
}

std::string Image::getVisibility() const
{
    return visibility_;
}

void Image::setVisibility(const std::string& value)
{
    visibility_ = value;
    visibilityIsSet_ = true;
}

bool Image::visibilityIsSet() const
{
    return visibilityIsSet_;
}

void Image::unsetvisibility()
{
    visibilityIsSet_ = false;
}

std::string Image::getWorkspaceId() const
{
    return workspaceId_;
}

void Image::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool Image::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void Image::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

std::string Image::getFlavorType() const
{
    return flavorType_;
}

void Image::setFlavorType(const std::string& value)
{
    flavorType_ = value;
    flavorTypeIsSet_ = true;
}

bool Image::flavorTypeIsSet() const
{
    return flavorTypeIsSet_;
}

void Image::unsetflavorType()
{
    flavorTypeIsSet_ = false;
}

std::string Image::getSwrInstanceId() const
{
    return swrInstanceId_;
}

void Image::setSwrInstanceId(const std::string& value)
{
    swrInstanceId_ = value;
    swrInstanceIdIsSet_ = true;
}

bool Image::swrInstanceIdIsSet() const
{
    return swrInstanceIdIsSet_;
}

void Image::unsetswrInstanceId()
{
    swrInstanceIdIsSet_ = false;
}

std::string Image::getShowName() const
{
    return showName_;
}

void Image::setShowName(const std::string& value)
{
    showName_ = value;
    showNameIsSet_ = true;
}

bool Image::showNameIsSet() const
{
    return showNameIsSet_;
}

void Image::unsetshowName()
{
    showNameIsSet_ = false;
}

std::string Image::getShowTag() const
{
    return showTag_;
}

void Image::setShowTag(const std::string& value)
{
    showTag_ = value;
    showTagIsSet_ = true;
}

bool Image::showTagIsSet() const
{
    return showTagIsSet_;
}

void Image::unsetshowTag()
{
    showTagIsSet_ = false;
}

std::vector<TmsTagResponse>& Image::getTags()
{
    return tags_;
}

void Image::setTags(const std::vector<TmsTagResponse>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool Image::tagsIsSet() const
{
    return tagsIsSet_;
}

void Image::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


