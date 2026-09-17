

#include "huaweicloud/projectman/v4/model/BaseCategory.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BaseCategory::BaseCategory()
{
    tenantId_ = "";
    tenantIdIsSet_ = false;
    modifiedBy_ = "";
    modifiedByIsSet_ = false;
    modifiedDate_ = "";
    modifiedDateIsSet_ = false;
    createdBy_ = "";
    createdByIsSet_ = false;
    createdDate_ = "";
    createdDateIsSet_ = false;
    code_ = "";
    codeIsSet_ = false;
    prefix_ = "";
    prefixIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    icon_ = "";
    iconIsSet_ = false;
    color_ = "";
    colorIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    definitionType_ = 0L;
    definitionTypeIsSet_ = false;
    typeId_ = "";
    typeIdIsSet_ = false;
}

BaseCategory::~BaseCategory() = default;

void BaseCategory::validate()
{
}

web::json::value BaseCategory::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(modifiedByIsSet_) {
        val[utility::conversions::to_string_t("modified_by")] = ModelBase::toJson(modifiedBy_);
    }
    if(modifiedDateIsSet_) {
        val[utility::conversions::to_string_t("modified_date")] = ModelBase::toJson(modifiedDate_);
    }
    if(createdByIsSet_) {
        val[utility::conversions::to_string_t("created_by")] = ModelBase::toJson(createdBy_);
    }
    if(createdDateIsSet_) {
        val[utility::conversions::to_string_t("created_date")] = ModelBase::toJson(createdDate_);
    }
    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(prefixIsSet_) {
        val[utility::conversions::to_string_t("prefix")] = ModelBase::toJson(prefix_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(iconIsSet_) {
        val[utility::conversions::to_string_t("icon")] = ModelBase::toJson(icon_);
    }
    if(colorIsSet_) {
        val[utility::conversions::to_string_t("color")] = ModelBase::toJson(color_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(definitionTypeIsSet_) {
        val[utility::conversions::to_string_t("definition_type")] = ModelBase::toJson(definitionType_);
    }
    if(typeIdIsSet_) {
        val[utility::conversions::to_string_t("type_id")] = ModelBase::toJson(typeId_);
    }

    return val;
}
bool BaseCategory::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tenant_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenant_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenantId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modified_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modified_by"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModifiedBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modified_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modified_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModifiedDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_by"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("prefix"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("prefix"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrefix(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("icon"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("icon"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIcon(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("color"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("color"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setColor(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("definition_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("definition_type"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefinitionType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTypeId(refVal);
        }
    }
    return ok;
}


std::string BaseCategory::getTenantId() const
{
    return tenantId_;
}

void BaseCategory::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool BaseCategory::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void BaseCategory::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string BaseCategory::getModifiedBy() const
{
    return modifiedBy_;
}

void BaseCategory::setModifiedBy(const std::string& value)
{
    modifiedBy_ = value;
    modifiedByIsSet_ = true;
}

bool BaseCategory::modifiedByIsSet() const
{
    return modifiedByIsSet_;
}

void BaseCategory::unsetmodifiedBy()
{
    modifiedByIsSet_ = false;
}

std::string BaseCategory::getModifiedDate() const
{
    return modifiedDate_;
}

void BaseCategory::setModifiedDate(const std::string& value)
{
    modifiedDate_ = value;
    modifiedDateIsSet_ = true;
}

bool BaseCategory::modifiedDateIsSet() const
{
    return modifiedDateIsSet_;
}

void BaseCategory::unsetmodifiedDate()
{
    modifiedDateIsSet_ = false;
}

std::string BaseCategory::getCreatedBy() const
{
    return createdBy_;
}

void BaseCategory::setCreatedBy(const std::string& value)
{
    createdBy_ = value;
    createdByIsSet_ = true;
}

bool BaseCategory::createdByIsSet() const
{
    return createdByIsSet_;
}

void BaseCategory::unsetcreatedBy()
{
    createdByIsSet_ = false;
}

std::string BaseCategory::getCreatedDate() const
{
    return createdDate_;
}

void BaseCategory::setCreatedDate(const std::string& value)
{
    createdDate_ = value;
    createdDateIsSet_ = true;
}

bool BaseCategory::createdDateIsSet() const
{
    return createdDateIsSet_;
}

void BaseCategory::unsetcreatedDate()
{
    createdDateIsSet_ = false;
}

std::string BaseCategory::getCode() const
{
    return code_;
}

void BaseCategory::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool BaseCategory::codeIsSet() const
{
    return codeIsSet_;
}

void BaseCategory::unsetcode()
{
    codeIsSet_ = false;
}

std::string BaseCategory::getPrefix() const
{
    return prefix_;
}

void BaseCategory::setPrefix(const std::string& value)
{
    prefix_ = value;
    prefixIsSet_ = true;
}

bool BaseCategory::prefixIsSet() const
{
    return prefixIsSet_;
}

void BaseCategory::unsetprefix()
{
    prefixIsSet_ = false;
}

std::string BaseCategory::getDomainId() const
{
    return domainId_;
}

void BaseCategory::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool BaseCategory::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void BaseCategory::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string BaseCategory::getIcon() const
{
    return icon_;
}

void BaseCategory::setIcon(const std::string& value)
{
    icon_ = value;
    iconIsSet_ = true;
}

bool BaseCategory::iconIsSet() const
{
    return iconIsSet_;
}

void BaseCategory::unseticon()
{
    iconIsSet_ = false;
}

std::string BaseCategory::getColor() const
{
    return color_;
}

void BaseCategory::setColor(const std::string& value)
{
    color_ = value;
    colorIsSet_ = true;
}

bool BaseCategory::colorIsSet() const
{
    return colorIsSet_;
}

void BaseCategory::unsetcolor()
{
    colorIsSet_ = false;
}

std::string BaseCategory::getDescription() const
{
    return description_;
}

void BaseCategory::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool BaseCategory::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void BaseCategory::unsetdescription()
{
    descriptionIsSet_ = false;
}

int64_t BaseCategory::getDefinitionType() const
{
    return definitionType_;
}

void BaseCategory::setDefinitionType(int64_t value)
{
    definitionType_ = value;
    definitionTypeIsSet_ = true;
}

bool BaseCategory::definitionTypeIsSet() const
{
    return definitionTypeIsSet_;
}

void BaseCategory::unsetdefinitionType()
{
    definitionTypeIsSet_ = false;
}

std::string BaseCategory::getTypeId() const
{
    return typeId_;
}

void BaseCategory::setTypeId(const std::string& value)
{
    typeId_ = value;
    typeIdIsSet_ = true;
}

bool BaseCategory::typeIdIsSet() const
{
    return typeIdIsSet_;
}

void BaseCategory::unsettypeId()
{
    typeIdIsSet_ = false;
}

}
}
}
}
}


