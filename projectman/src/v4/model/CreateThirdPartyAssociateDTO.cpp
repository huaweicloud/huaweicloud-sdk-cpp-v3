

#include "huaweicloud/projectman/v4/model/CreateThirdPartyAssociateDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CreateThirdPartyAssociateDTO::CreateThirdPartyAssociateDTO()
{
    tenantId_ = "";
    tenantIdIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    modifiedDate_ = "";
    modifiedDateIsSet_ = false;
    createdBy_ = "";
    createdByIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    workitemId_ = "";
    workitemIdIsSet_ = false;
    modifiedBy_ = "";
    modifiedByIsSet_ = false;
    operationId_ = "";
    operationIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    createdDate_ = "";
    createdDateIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    category_ = "";
    categoryIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
}

CreateThirdPartyAssociateDTO::~CreateThirdPartyAssociateDTO() = default;

void CreateThirdPartyAssociateDTO::validate()
{
}

web::json::value CreateThirdPartyAssociateDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(modifiedDateIsSet_) {
        val[utility::conversions::to_string_t("modified_date")] = ModelBase::toJson(modifiedDate_);
    }
    if(createdByIsSet_) {
        val[utility::conversions::to_string_t("created_by")] = ModelBase::toJson(createdBy_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(workitemIdIsSet_) {
        val[utility::conversions::to_string_t("workitem_id")] = ModelBase::toJson(workitemId_);
    }
    if(modifiedByIsSet_) {
        val[utility::conversions::to_string_t("modified_by")] = ModelBase::toJson(modifiedBy_);
    }
    if(operationIdIsSet_) {
        val[utility::conversions::to_string_t("operation_id")] = ModelBase::toJson(operationId_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(createdDateIsSet_) {
        val[utility::conversions::to_string_t("created_date")] = ModelBase::toJson(createdDate_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }

    return val;
}
bool CreateThirdPartyAssociateDTO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTitle(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("workitem_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workitem_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkitemId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("operation_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operation_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperationId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("created_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedDate(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategory(refVal);
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
    return ok;
}


std::string CreateThirdPartyAssociateDTO::getTenantId() const
{
    return tenantId_;
}

void CreateThirdPartyAssociateDTO::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool CreateThirdPartyAssociateDTO::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void CreateThirdPartyAssociateDTO::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string CreateThirdPartyAssociateDTO::getTitle() const
{
    return title_;
}

void CreateThirdPartyAssociateDTO::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool CreateThirdPartyAssociateDTO::titleIsSet() const
{
    return titleIsSet_;
}

void CreateThirdPartyAssociateDTO::unsettitle()
{
    titleIsSet_ = false;
}

std::string CreateThirdPartyAssociateDTO::getType() const
{
    return type_;
}

void CreateThirdPartyAssociateDTO::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CreateThirdPartyAssociateDTO::typeIsSet() const
{
    return typeIsSet_;
}

void CreateThirdPartyAssociateDTO::unsettype()
{
    typeIsSet_ = false;
}

std::string CreateThirdPartyAssociateDTO::getModifiedDate() const
{
    return modifiedDate_;
}

void CreateThirdPartyAssociateDTO::setModifiedDate(const std::string& value)
{
    modifiedDate_ = value;
    modifiedDateIsSet_ = true;
}

bool CreateThirdPartyAssociateDTO::modifiedDateIsSet() const
{
    return modifiedDateIsSet_;
}

void CreateThirdPartyAssociateDTO::unsetmodifiedDate()
{
    modifiedDateIsSet_ = false;
}

std::string CreateThirdPartyAssociateDTO::getCreatedBy() const
{
    return createdBy_;
}

void CreateThirdPartyAssociateDTO::setCreatedBy(const std::string& value)
{
    createdBy_ = value;
    createdByIsSet_ = true;
}

bool CreateThirdPartyAssociateDTO::createdByIsSet() const
{
    return createdByIsSet_;
}

void CreateThirdPartyAssociateDTO::unsetcreatedBy()
{
    createdByIsSet_ = false;
}

std::string CreateThirdPartyAssociateDTO::getUrl() const
{
    return url_;
}

void CreateThirdPartyAssociateDTO::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool CreateThirdPartyAssociateDTO::urlIsSet() const
{
    return urlIsSet_;
}

void CreateThirdPartyAssociateDTO::unseturl()
{
    urlIsSet_ = false;
}

std::string CreateThirdPartyAssociateDTO::getDomainId() const
{
    return domainId_;
}

void CreateThirdPartyAssociateDTO::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool CreateThirdPartyAssociateDTO::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void CreateThirdPartyAssociateDTO::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string CreateThirdPartyAssociateDTO::getWorkitemId() const
{
    return workitemId_;
}

void CreateThirdPartyAssociateDTO::setWorkitemId(const std::string& value)
{
    workitemId_ = value;
    workitemIdIsSet_ = true;
}

bool CreateThirdPartyAssociateDTO::workitemIdIsSet() const
{
    return workitemIdIsSet_;
}

void CreateThirdPartyAssociateDTO::unsetworkitemId()
{
    workitemIdIsSet_ = false;
}

std::string CreateThirdPartyAssociateDTO::getModifiedBy() const
{
    return modifiedBy_;
}

void CreateThirdPartyAssociateDTO::setModifiedBy(const std::string& value)
{
    modifiedBy_ = value;
    modifiedByIsSet_ = true;
}

bool CreateThirdPartyAssociateDTO::modifiedByIsSet() const
{
    return modifiedByIsSet_;
}

void CreateThirdPartyAssociateDTO::unsetmodifiedBy()
{
    modifiedByIsSet_ = false;
}

std::string CreateThirdPartyAssociateDTO::getOperationId() const
{
    return operationId_;
}

void CreateThirdPartyAssociateDTO::setOperationId(const std::string& value)
{
    operationId_ = value;
    operationIdIsSet_ = true;
}

bool CreateThirdPartyAssociateDTO::operationIdIsSet() const
{
    return operationIdIsSet_;
}

void CreateThirdPartyAssociateDTO::unsetoperationId()
{
    operationIdIsSet_ = false;
}

std::string CreateThirdPartyAssociateDTO::getId() const
{
    return id_;
}

void CreateThirdPartyAssociateDTO::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateThirdPartyAssociateDTO::idIsSet() const
{
    return idIsSet_;
}

void CreateThirdPartyAssociateDTO::unsetid()
{
    idIsSet_ = false;
}

std::string CreateThirdPartyAssociateDTO::getCreatedDate() const
{
    return createdDate_;
}

void CreateThirdPartyAssociateDTO::setCreatedDate(const std::string& value)
{
    createdDate_ = value;
    createdDateIsSet_ = true;
}

bool CreateThirdPartyAssociateDTO::createdDateIsSet() const
{
    return createdDateIsSet_;
}

void CreateThirdPartyAssociateDTO::unsetcreatedDate()
{
    createdDateIsSet_ = false;
}

std::string CreateThirdPartyAssociateDTO::getState() const
{
    return state_;
}

void CreateThirdPartyAssociateDTO::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool CreateThirdPartyAssociateDTO::stateIsSet() const
{
    return stateIsSet_;
}

void CreateThirdPartyAssociateDTO::unsetstate()
{
    stateIsSet_ = false;
}

std::string CreateThirdPartyAssociateDTO::getCategory() const
{
    return category_;
}

void CreateThirdPartyAssociateDTO::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool CreateThirdPartyAssociateDTO::categoryIsSet() const
{
    return categoryIsSet_;
}

void CreateThirdPartyAssociateDTO::unsetcategory()
{
    categoryIsSet_ = false;
}

std::string CreateThirdPartyAssociateDTO::getRegion() const
{
    return region_;
}

void CreateThirdPartyAssociateDTO::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool CreateThirdPartyAssociateDTO::regionIsSet() const
{
    return regionIsSet_;
}

void CreateThirdPartyAssociateDTO::unsetregion()
{
    regionIsSet_ = false;
}

}
}
}
}
}


