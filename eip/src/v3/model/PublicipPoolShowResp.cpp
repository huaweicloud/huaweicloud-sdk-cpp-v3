

#include "huaweicloud/eip/v3/model/PublicipPoolShowResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




PublicipPoolShowResp::PublicipPoolShowResp()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
    used_ = 0;
    usedIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
    billingInfoIsSet_ = false;
    publicBorderGroup_ = "";
    publicBorderGroupIsSet_ = false;
    shared_ = false;
    sharedIsSet_ = false;
    isCommon_ = false;
    isCommonIsSet_ = false;
    tagsIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    allowShareBandwidthTypesIsSet_ = false;
}

PublicipPoolShowResp::~PublicipPoolShowResp() = default;

void PublicipPoolShowResp::validate()
{
}

web::json::value PublicipPoolShowResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(usedIsSet_) {
        val[utility::conversions::to_string_t("used")] = ModelBase::toJson(used_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(billingInfoIsSet_) {
        val[utility::conversions::to_string_t("billing_info")] = ModelBase::toJson(billingInfo_);
    }
    if(publicBorderGroupIsSet_) {
        val[utility::conversions::to_string_t("public_border_group")] = ModelBase::toJson(publicBorderGroup_);
    }
    if(sharedIsSet_) {
        val[utility::conversions::to_string_t("shared")] = ModelBase::toJson(shared_);
    }
    if(isCommonIsSet_) {
        val[utility::conversions::to_string_t("is_common")] = ModelBase::toJson(isCommon_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(allowShareBandwidthTypesIsSet_) {
        val[utility::conversions::to_string_t("allow_share_bandwidth_types")] = ModelBase::toJson(allowShareBandwidthTypes_);
    }

    return val;
}
bool PublicipPoolShowResp::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("used"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("used"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsed(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("billing_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("billing_info"));
        if(!fieldValue.is_null())
        {
            BillingInfoDict refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBillingInfo(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("shared"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("shared"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShared(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_common"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_common"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsCommon(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TagsInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("allow_share_bandwidth_types"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("allow_share_bandwidth_types"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllowShareBandwidthTypes(refVal);
        }
    }
    return ok;
}


std::string PublicipPoolShowResp::getId() const
{
    return id_;
}

void PublicipPoolShowResp::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool PublicipPoolShowResp::idIsSet() const
{
    return idIsSet_;
}

void PublicipPoolShowResp::unsetid()
{
    idIsSet_ = false;
}

std::string PublicipPoolShowResp::getName() const
{
    return name_;
}

void PublicipPoolShowResp::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PublicipPoolShowResp::nameIsSet() const
{
    return nameIsSet_;
}

void PublicipPoolShowResp::unsetname()
{
    nameIsSet_ = false;
}

std::string PublicipPoolShowResp::getStatus() const
{
    return status_;
}

void PublicipPoolShowResp::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool PublicipPoolShowResp::statusIsSet() const
{
    return statusIsSet_;
}

void PublicipPoolShowResp::unsetstatus()
{
    statusIsSet_ = false;
}

std::string PublicipPoolShowResp::getType() const
{
    return type_;
}

void PublicipPoolShowResp::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool PublicipPoolShowResp::typeIsSet() const
{
    return typeIsSet_;
}

void PublicipPoolShowResp::unsettype()
{
    typeIsSet_ = false;
}

std::string PublicipPoolShowResp::getDescription() const
{
    return description_;
}

void PublicipPoolShowResp::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool PublicipPoolShowResp::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void PublicipPoolShowResp::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string PublicipPoolShowResp::getProjectId() const
{
    return projectId_;
}

void PublicipPoolShowResp::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool PublicipPoolShowResp::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void PublicipPoolShowResp::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t PublicipPoolShowResp::getSize() const
{
    return size_;
}

void PublicipPoolShowResp::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool PublicipPoolShowResp::sizeIsSet() const
{
    return sizeIsSet_;
}

void PublicipPoolShowResp::unsetsize()
{
    sizeIsSet_ = false;
}

int32_t PublicipPoolShowResp::getUsed() const
{
    return used_;
}

void PublicipPoolShowResp::setUsed(int32_t value)
{
    used_ = value;
    usedIsSet_ = true;
}

bool PublicipPoolShowResp::usedIsSet() const
{
    return usedIsSet_;
}

void PublicipPoolShowResp::unsetused()
{
    usedIsSet_ = false;
}

std::string PublicipPoolShowResp::getCreatedAt() const
{
    return createdAt_;
}

void PublicipPoolShowResp::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool PublicipPoolShowResp::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void PublicipPoolShowResp::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string PublicipPoolShowResp::getUpdatedAt() const
{
    return updatedAt_;
}

void PublicipPoolShowResp::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool PublicipPoolShowResp::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void PublicipPoolShowResp::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

BillingInfoDict PublicipPoolShowResp::getBillingInfo() const
{
    return billingInfo_;
}

void PublicipPoolShowResp::setBillingInfo(const BillingInfoDict& value)
{
    billingInfo_ = value;
    billingInfoIsSet_ = true;
}

bool PublicipPoolShowResp::billingInfoIsSet() const
{
    return billingInfoIsSet_;
}

void PublicipPoolShowResp::unsetbillingInfo()
{
    billingInfoIsSet_ = false;
}

std::string PublicipPoolShowResp::getPublicBorderGroup() const
{
    return publicBorderGroup_;
}

void PublicipPoolShowResp::setPublicBorderGroup(const std::string& value)
{
    publicBorderGroup_ = value;
    publicBorderGroupIsSet_ = true;
}

bool PublicipPoolShowResp::publicBorderGroupIsSet() const
{
    return publicBorderGroupIsSet_;
}

void PublicipPoolShowResp::unsetpublicBorderGroup()
{
    publicBorderGroupIsSet_ = false;
}

bool PublicipPoolShowResp::isShared() const
{
    return shared_;
}

void PublicipPoolShowResp::setShared(bool value)
{
    shared_ = value;
    sharedIsSet_ = true;
}

bool PublicipPoolShowResp::sharedIsSet() const
{
    return sharedIsSet_;
}

void PublicipPoolShowResp::unsetshared()
{
    sharedIsSet_ = false;
}

bool PublicipPoolShowResp::isIsCommon() const
{
    return isCommon_;
}

void PublicipPoolShowResp::setIsCommon(bool value)
{
    isCommon_ = value;
    isCommonIsSet_ = true;
}

bool PublicipPoolShowResp::isCommonIsSet() const
{
    return isCommonIsSet_;
}

void PublicipPoolShowResp::unsetisCommon()
{
    isCommonIsSet_ = false;
}

std::vector<TagsInfo>& PublicipPoolShowResp::getTags()
{
    return tags_;
}

void PublicipPoolShowResp::setTags(const std::vector<TagsInfo>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool PublicipPoolShowResp::tagsIsSet() const
{
    return tagsIsSet_;
}

void PublicipPoolShowResp::unsettags()
{
    tagsIsSet_ = false;
}

std::string PublicipPoolShowResp::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void PublicipPoolShowResp::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool PublicipPoolShowResp::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void PublicipPoolShowResp::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::vector<std::string>& PublicipPoolShowResp::getAllowShareBandwidthTypes()
{
    return allowShareBandwidthTypes_;
}

void PublicipPoolShowResp::setAllowShareBandwidthTypes(const std::vector<std::string>& value)
{
    allowShareBandwidthTypes_ = value;
    allowShareBandwidthTypesIsSet_ = true;
}

bool PublicipPoolShowResp::allowShareBandwidthTypesIsSet() const
{
    return allowShareBandwidthTypesIsSet_;
}

void PublicipPoolShowResp::unsetallowShareBandwidthTypes()
{
    allowShareBandwidthTypesIsSet_ = false;
}

}
}
}
}
}


