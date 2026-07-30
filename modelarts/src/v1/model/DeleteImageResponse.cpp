

#include "huaweicloud/modelarts/v1/model/DeleteImageResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DeleteImageResponse::DeleteImageResponse()
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

DeleteImageResponse::~DeleteImageResponse() = default;

void DeleteImageResponse::validate()
{
}

web::json::value DeleteImageResponse::toJson() const
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
bool DeleteImageResponse::fromJson(const web::json::value& val)
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


std::string DeleteImageResponse::getArch() const
{
    return arch_;
}

void DeleteImageResponse::setArch(const std::string& value)
{
    arch_ = value;
    archIsSet_ = true;
}

bool DeleteImageResponse::archIsSet() const
{
    return archIsSet_;
}

void DeleteImageResponse::unsetarch()
{
    archIsSet_ = false;
}

int64_t DeleteImageResponse::getCreateAt() const
{
    return createAt_;
}

void DeleteImageResponse::setCreateAt(int64_t value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool DeleteImageResponse::createAtIsSet() const
{
    return createAtIsSet_;
}

void DeleteImageResponse::unsetcreateAt()
{
    createAtIsSet_ = false;
}

std::string DeleteImageResponse::getDescription() const
{
    return description_;
}

void DeleteImageResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool DeleteImageResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void DeleteImageResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<std::string>& DeleteImageResponse::getDevServices()
{
    return devServices_;
}

void DeleteImageResponse::setDevServices(const std::vector<std::string>& value)
{
    devServices_ = value;
    devServicesIsSet_ = true;
}

bool DeleteImageResponse::devServicesIsSet() const
{
    return devServicesIsSet_;
}

void DeleteImageResponse::unsetdevServices()
{
    devServicesIsSet_ = false;
}

std::string DeleteImageResponse::getId() const
{
    return id_;
}

void DeleteImageResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteImageResponse::idIsSet() const
{
    return idIsSet_;
}

void DeleteImageResponse::unsetid()
{
    idIsSet_ = false;
}

std::string DeleteImageResponse::getName() const
{
    return name_;
}

void DeleteImageResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DeleteImageResponse::nameIsSet() const
{
    return nameIsSet_;
}

void DeleteImageResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string DeleteImageResponse::getNamespace() const
{
    return namespace_;
}

void DeleteImageResponse::setNamespace(const std::string& value)
{
    namespace_ = value;
    namespaceIsSet_ = true;
}

bool DeleteImageResponse::namespaceIsSet() const
{
    return namespaceIsSet_;
}

void DeleteImageResponse::unsetnamespace()
{
    namespaceIsSet_ = false;
}

std::string DeleteImageResponse::getOrigin() const
{
    return origin_;
}

void DeleteImageResponse::setOrigin(const std::string& value)
{
    origin_ = value;
    originIsSet_ = true;
}

bool DeleteImageResponse::originIsSet() const
{
    return originIsSet_;
}

void DeleteImageResponse::unsetorigin()
{
    originIsSet_ = false;
}

std::vector<std::string>& DeleteImageResponse::getResourceCategories()
{
    return resourceCategories_;
}

void DeleteImageResponse::setResourceCategories(const std::vector<std::string>& value)
{
    resourceCategories_ = value;
    resourceCategoriesIsSet_ = true;
}

bool DeleteImageResponse::resourceCategoriesIsSet() const
{
    return resourceCategoriesIsSet_;
}

void DeleteImageResponse::unsetresourceCategories()
{
    resourceCategoriesIsSet_ = false;
}

std::string DeleteImageResponse::getServiceType() const
{
    return serviceType_;
}

void DeleteImageResponse::setServiceType(const std::string& value)
{
    serviceType_ = value;
    serviceTypeIsSet_ = true;
}

bool DeleteImageResponse::serviceTypeIsSet() const
{
    return serviceTypeIsSet_;
}

void DeleteImageResponse::unsetserviceType()
{
    serviceTypeIsSet_ = false;
}

int64_t DeleteImageResponse::getSize() const
{
    return size_;
}

void DeleteImageResponse::setSize(int64_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool DeleteImageResponse::sizeIsSet() const
{
    return sizeIsSet_;
}

void DeleteImageResponse::unsetsize()
{
    sizeIsSet_ = false;
}

std::string DeleteImageResponse::getStatus() const
{
    return status_;
}

void DeleteImageResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeleteImageResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DeleteImageResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string DeleteImageResponse::getStatusMessage() const
{
    return statusMessage_;
}

void DeleteImageResponse::setStatusMessage(const std::string& value)
{
    statusMessage_ = value;
    statusMessageIsSet_ = true;
}

bool DeleteImageResponse::statusMessageIsSet() const
{
    return statusMessageIsSet_;
}

void DeleteImageResponse::unsetstatusMessage()
{
    statusMessageIsSet_ = false;
}

std::vector<std::string>& DeleteImageResponse::getSupportResCategories()
{
    return supportResCategories_;
}

void DeleteImageResponse::setSupportResCategories(const std::vector<std::string>& value)
{
    supportResCategories_ = value;
    supportResCategoriesIsSet_ = true;
}

bool DeleteImageResponse::supportResCategoriesIsSet() const
{
    return supportResCategoriesIsSet_;
}

void DeleteImageResponse::unsetsupportResCategories()
{
    supportResCategoriesIsSet_ = false;
}

std::string DeleteImageResponse::getSwrPath() const
{
    return swrPath_;
}

void DeleteImageResponse::setSwrPath(const std::string& value)
{
    swrPath_ = value;
    swrPathIsSet_ = true;
}

bool DeleteImageResponse::swrPathIsSet() const
{
    return swrPathIsSet_;
}

void DeleteImageResponse::unsetswrPath()
{
    swrPathIsSet_ = false;
}

std::string DeleteImageResponse::getTag() const
{
    return tag_;
}

void DeleteImageResponse::setTag(const std::string& value)
{
    tag_ = value;
    tagIsSet_ = true;
}

bool DeleteImageResponse::tagIsSet() const
{
    return tagIsSet_;
}

void DeleteImageResponse::unsettag()
{
    tagIsSet_ = false;
}

std::string DeleteImageResponse::getType() const
{
    return type_;
}

void DeleteImageResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool DeleteImageResponse::typeIsSet() const
{
    return typeIsSet_;
}

void DeleteImageResponse::unsettype()
{
    typeIsSet_ = false;
}

int64_t DeleteImageResponse::getUpdateAt() const
{
    return updateAt_;
}

void DeleteImageResponse::setUpdateAt(int64_t value)
{
    updateAt_ = value;
    updateAtIsSet_ = true;
}

bool DeleteImageResponse::updateAtIsSet() const
{
    return updateAtIsSet_;
}

void DeleteImageResponse::unsetupdateAt()
{
    updateAtIsSet_ = false;
}

std::string DeleteImageResponse::getVisibility() const
{
    return visibility_;
}

void DeleteImageResponse::setVisibility(const std::string& value)
{
    visibility_ = value;
    visibilityIsSet_ = true;
}

bool DeleteImageResponse::visibilityIsSet() const
{
    return visibilityIsSet_;
}

void DeleteImageResponse::unsetvisibility()
{
    visibilityIsSet_ = false;
}

std::string DeleteImageResponse::getWorkspaceId() const
{
    return workspaceId_;
}

void DeleteImageResponse::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool DeleteImageResponse::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void DeleteImageResponse::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

std::string DeleteImageResponse::getFlavorType() const
{
    return flavorType_;
}

void DeleteImageResponse::setFlavorType(const std::string& value)
{
    flavorType_ = value;
    flavorTypeIsSet_ = true;
}

bool DeleteImageResponse::flavorTypeIsSet() const
{
    return flavorTypeIsSet_;
}

void DeleteImageResponse::unsetflavorType()
{
    flavorTypeIsSet_ = false;
}

std::string DeleteImageResponse::getSwrInstanceId() const
{
    return swrInstanceId_;
}

void DeleteImageResponse::setSwrInstanceId(const std::string& value)
{
    swrInstanceId_ = value;
    swrInstanceIdIsSet_ = true;
}

bool DeleteImageResponse::swrInstanceIdIsSet() const
{
    return swrInstanceIdIsSet_;
}

void DeleteImageResponse::unsetswrInstanceId()
{
    swrInstanceIdIsSet_ = false;
}

std::string DeleteImageResponse::getShowName() const
{
    return showName_;
}

void DeleteImageResponse::setShowName(const std::string& value)
{
    showName_ = value;
    showNameIsSet_ = true;
}

bool DeleteImageResponse::showNameIsSet() const
{
    return showNameIsSet_;
}

void DeleteImageResponse::unsetshowName()
{
    showNameIsSet_ = false;
}

std::string DeleteImageResponse::getShowTag() const
{
    return showTag_;
}

void DeleteImageResponse::setShowTag(const std::string& value)
{
    showTag_ = value;
    showTagIsSet_ = true;
}

bool DeleteImageResponse::showTagIsSet() const
{
    return showTagIsSet_;
}

void DeleteImageResponse::unsetshowTag()
{
    showTagIsSet_ = false;
}

std::vector<TmsTagResponse>& DeleteImageResponse::getTags()
{
    return tags_;
}

void DeleteImageResponse::setTags(const std::vector<TmsTagResponse>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool DeleteImageResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void DeleteImageResponse::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


