

#include "huaweicloud/cfw/v1/model/VpcAttachmentDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




VpcAttachmentDetail::VpcAttachmentDetail()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    vpcId_ = "";
    vpcIdIsSet_ = false;
    virsubnetId_ = "";
    virsubnetIdIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
    tagsIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    vpcProjectId_ = "";
    vpcProjectIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
}

VpcAttachmentDetail::~VpcAttachmentDetail() = default;

void VpcAttachmentDetail::validate()
{
}

web::json::value VpcAttachmentDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }
    if(virsubnetIdIsSet_) {
        val[utility::conversions::to_string_t("virsubnet_id")] = ModelBase::toJson(virsubnetId_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(vpcProjectIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_project_id")] = ModelBase::toJson(vpcProjectId_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }

    return val;
}
bool VpcAttachmentDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("vpc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("virsubnet_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("virsubnet_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVirsubnetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<Tag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vpc_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    return ok;
}


std::string VpcAttachmentDetail::getId() const
{
    return id_;
}

void VpcAttachmentDetail::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool VpcAttachmentDetail::idIsSet() const
{
    return idIsSet_;
}

void VpcAttachmentDetail::unsetid()
{
    idIsSet_ = false;
}

std::string VpcAttachmentDetail::getName() const
{
    return name_;
}

void VpcAttachmentDetail::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool VpcAttachmentDetail::nameIsSet() const
{
    return nameIsSet_;
}

void VpcAttachmentDetail::unsetname()
{
    nameIsSet_ = false;
}

std::string VpcAttachmentDetail::getVpcId() const
{
    return vpcId_;
}

void VpcAttachmentDetail::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool VpcAttachmentDetail::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void VpcAttachmentDetail::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string VpcAttachmentDetail::getVirsubnetId() const
{
    return virsubnetId_;
}

void VpcAttachmentDetail::setVirsubnetId(const std::string& value)
{
    virsubnetId_ = value;
    virsubnetIdIsSet_ = true;
}

bool VpcAttachmentDetail::virsubnetIdIsSet() const
{
    return virsubnetIdIsSet_;
}

void VpcAttachmentDetail::unsetvirsubnetId()
{
    virsubnetIdIsSet_ = false;
}

std::string VpcAttachmentDetail::getState() const
{
    return state_;
}

void VpcAttachmentDetail::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool VpcAttachmentDetail::stateIsSet() const
{
    return stateIsSet_;
}

void VpcAttachmentDetail::unsetstate()
{
    stateIsSet_ = false;
}

std::string VpcAttachmentDetail::getCreatedAt() const
{
    return createdAt_;
}

void VpcAttachmentDetail::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool VpcAttachmentDetail::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void VpcAttachmentDetail::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string VpcAttachmentDetail::getUpdatedAt() const
{
    return updatedAt_;
}

void VpcAttachmentDetail::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool VpcAttachmentDetail::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void VpcAttachmentDetail::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::vector<Tag>& VpcAttachmentDetail::getTags()
{
    return tags_;
}

void VpcAttachmentDetail::setTags(const std::vector<Tag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool VpcAttachmentDetail::tagsIsSet() const
{
    return tagsIsSet_;
}

void VpcAttachmentDetail::unsettags()
{
    tagsIsSet_ = false;
}

std::string VpcAttachmentDetail::getDescription() const
{
    return description_;
}

void VpcAttachmentDetail::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool VpcAttachmentDetail::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void VpcAttachmentDetail::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string VpcAttachmentDetail::getProjectId() const
{
    return projectId_;
}

void VpcAttachmentDetail::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool VpcAttachmentDetail::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void VpcAttachmentDetail::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string VpcAttachmentDetail::getVpcProjectId() const
{
    return vpcProjectId_;
}

void VpcAttachmentDetail::setVpcProjectId(const std::string& value)
{
    vpcProjectId_ = value;
    vpcProjectIdIsSet_ = true;
}

bool VpcAttachmentDetail::vpcProjectIdIsSet() const
{
    return vpcProjectIdIsSet_;
}

void VpcAttachmentDetail::unsetvpcProjectId()
{
    vpcProjectIdIsSet_ = false;
}

std::string VpcAttachmentDetail::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void VpcAttachmentDetail::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool VpcAttachmentDetail::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void VpcAttachmentDetail::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

}
}
}
}
}


