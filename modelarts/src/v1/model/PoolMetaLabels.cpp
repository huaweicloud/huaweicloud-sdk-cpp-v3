

#include "huaweicloud/modelarts/v1/model/PoolMetaLabels.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PoolMetaLabels::PoolMetaLabels()
{
    osModelartsName_ = "";
    osModelartsNameIsSet_ = false;
    osModelartsWorkspaceId_ = "";
    osModelartsWorkspaceIdIsSet_ = false;
    osModelartsNodePrefix_ = "";
    osModelartsNodePrefixIsSet_ = false;
    osModelartsResourceId_ = "";
    osModelartsResourceIdIsSet_ = false;
    osModelartsTenantDomainId_ = "";
    osModelartsTenantDomainIdIsSet_ = false;
    osModelartsTenantProjectId_ = "";
    osModelartsTenantProjectIdIsSet_ = false;
    osModelartsEnterpriseProjectId_ = "";
    osModelartsEnterpriseProjectIdIsSet_ = false;
    osModelartsPoolBiz_ = "";
    osModelartsPoolBizIsSet_ = false;
    osModelartsCreateFrom_ = "";
    osModelartsCreateFromIsSet_ = false;
    osModelartsNobilling_ = "";
    osModelartsNobillingIsSet_ = false;
    osModelartsOrderName_ = "";
    osModelartsOrderNameIsSet_ = false;
    osModelartsRegion_ = "";
    osModelartsRegionIsSet_ = false;
}

PoolMetaLabels::~PoolMetaLabels() = default;

void PoolMetaLabels::validate()
{
}

web::json::value PoolMetaLabels::toJson() const
{
    web::json::value val = web::json::value::object();

    if(osModelartsNameIsSet_) {
        val[utility::conversions::to_string_t("os.modelarts/name")] = ModelBase::toJson(osModelartsName_);
    }
    if(osModelartsWorkspaceIdIsSet_) {
        val[utility::conversions::to_string_t("os.modelarts/workspace.id")] = ModelBase::toJson(osModelartsWorkspaceId_);
    }
    if(osModelartsNodePrefixIsSet_) {
        val[utility::conversions::to_string_t("os.modelarts/node.prefix")] = ModelBase::toJson(osModelartsNodePrefix_);
    }
    if(osModelartsResourceIdIsSet_) {
        val[utility::conversions::to_string_t("os.modelarts/resource.id")] = ModelBase::toJson(osModelartsResourceId_);
    }
    if(osModelartsTenantDomainIdIsSet_) {
        val[utility::conversions::to_string_t("os.modelarts/tenant.domain.id")] = ModelBase::toJson(osModelartsTenantDomainId_);
    }
    if(osModelartsTenantProjectIdIsSet_) {
        val[utility::conversions::to_string_t("os.modelarts/tenant.project.id")] = ModelBase::toJson(osModelartsTenantProjectId_);
    }
    if(osModelartsEnterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("os.modelarts/enterprise.project.id")] = ModelBase::toJson(osModelartsEnterpriseProjectId_);
    }
    if(osModelartsPoolBizIsSet_) {
        val[utility::conversions::to_string_t("os.modelarts.pool/biz")] = ModelBase::toJson(osModelartsPoolBiz_);
    }
    if(osModelartsCreateFromIsSet_) {
        val[utility::conversions::to_string_t("os.modelarts/create-from")] = ModelBase::toJson(osModelartsCreateFrom_);
    }
    if(osModelartsNobillingIsSet_) {
        val[utility::conversions::to_string_t("os.modelarts/nobilling")] = ModelBase::toJson(osModelartsNobilling_);
    }
    if(osModelartsOrderNameIsSet_) {
        val[utility::conversions::to_string_t("os.modelarts/order.name")] = ModelBase::toJson(osModelartsOrderName_);
    }
    if(osModelartsRegionIsSet_) {
        val[utility::conversions::to_string_t("os.modelarts/region")] = ModelBase::toJson(osModelartsRegion_);
    }

    return val;
}
bool PoolMetaLabels::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("os.modelarts/name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os.modelarts/name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsModelartsName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os.modelarts/workspace.id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os.modelarts/workspace.id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsModelartsWorkspaceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os.modelarts/node.prefix"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os.modelarts/node.prefix"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsModelartsNodePrefix(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os.modelarts/resource.id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os.modelarts/resource.id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsModelartsResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os.modelarts/tenant.domain.id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os.modelarts/tenant.domain.id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsModelartsTenantDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os.modelarts/tenant.project.id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os.modelarts/tenant.project.id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsModelartsTenantProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os.modelarts/enterprise.project.id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os.modelarts/enterprise.project.id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsModelartsEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os.modelarts.pool/biz"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os.modelarts.pool/biz"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsModelartsPoolBiz(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os.modelarts/create-from"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os.modelarts/create-from"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsModelartsCreateFrom(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os.modelarts/nobilling"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os.modelarts/nobilling"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsModelartsNobilling(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os.modelarts/order.name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os.modelarts/order.name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsModelartsOrderName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os.modelarts/region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os.modelarts/region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsModelartsRegion(refVal);
        }
    }
    return ok;
}


std::string PoolMetaLabels::getOsModelartsName() const
{
    return osModelartsName_;
}

void PoolMetaLabels::setOsModelartsName(const std::string& value)
{
    osModelartsName_ = value;
    osModelartsNameIsSet_ = true;
}

bool PoolMetaLabels::osModelartsNameIsSet() const
{
    return osModelartsNameIsSet_;
}

void PoolMetaLabels::unsetosModelartsName()
{
    osModelartsNameIsSet_ = false;
}

std::string PoolMetaLabels::getOsModelartsWorkspaceId() const
{
    return osModelartsWorkspaceId_;
}

void PoolMetaLabels::setOsModelartsWorkspaceId(const std::string& value)
{
    osModelartsWorkspaceId_ = value;
    osModelartsWorkspaceIdIsSet_ = true;
}

bool PoolMetaLabels::osModelartsWorkspaceIdIsSet() const
{
    return osModelartsWorkspaceIdIsSet_;
}

void PoolMetaLabels::unsetosModelartsWorkspaceId()
{
    osModelartsWorkspaceIdIsSet_ = false;
}

std::string PoolMetaLabels::getOsModelartsNodePrefix() const
{
    return osModelartsNodePrefix_;
}

void PoolMetaLabels::setOsModelartsNodePrefix(const std::string& value)
{
    osModelartsNodePrefix_ = value;
    osModelartsNodePrefixIsSet_ = true;
}

bool PoolMetaLabels::osModelartsNodePrefixIsSet() const
{
    return osModelartsNodePrefixIsSet_;
}

void PoolMetaLabels::unsetosModelartsNodePrefix()
{
    osModelartsNodePrefixIsSet_ = false;
}

std::string PoolMetaLabels::getOsModelartsResourceId() const
{
    return osModelartsResourceId_;
}

void PoolMetaLabels::setOsModelartsResourceId(const std::string& value)
{
    osModelartsResourceId_ = value;
    osModelartsResourceIdIsSet_ = true;
}

bool PoolMetaLabels::osModelartsResourceIdIsSet() const
{
    return osModelartsResourceIdIsSet_;
}

void PoolMetaLabels::unsetosModelartsResourceId()
{
    osModelartsResourceIdIsSet_ = false;
}

std::string PoolMetaLabels::getOsModelartsTenantDomainId() const
{
    return osModelartsTenantDomainId_;
}

void PoolMetaLabels::setOsModelartsTenantDomainId(const std::string& value)
{
    osModelartsTenantDomainId_ = value;
    osModelartsTenantDomainIdIsSet_ = true;
}

bool PoolMetaLabels::osModelartsTenantDomainIdIsSet() const
{
    return osModelartsTenantDomainIdIsSet_;
}

void PoolMetaLabels::unsetosModelartsTenantDomainId()
{
    osModelartsTenantDomainIdIsSet_ = false;
}

std::string PoolMetaLabels::getOsModelartsTenantProjectId() const
{
    return osModelartsTenantProjectId_;
}

void PoolMetaLabels::setOsModelartsTenantProjectId(const std::string& value)
{
    osModelartsTenantProjectId_ = value;
    osModelartsTenantProjectIdIsSet_ = true;
}

bool PoolMetaLabels::osModelartsTenantProjectIdIsSet() const
{
    return osModelartsTenantProjectIdIsSet_;
}

void PoolMetaLabels::unsetosModelartsTenantProjectId()
{
    osModelartsTenantProjectIdIsSet_ = false;
}

std::string PoolMetaLabels::getOsModelartsEnterpriseProjectId() const
{
    return osModelartsEnterpriseProjectId_;
}

void PoolMetaLabels::setOsModelartsEnterpriseProjectId(const std::string& value)
{
    osModelartsEnterpriseProjectId_ = value;
    osModelartsEnterpriseProjectIdIsSet_ = true;
}

bool PoolMetaLabels::osModelartsEnterpriseProjectIdIsSet() const
{
    return osModelartsEnterpriseProjectIdIsSet_;
}

void PoolMetaLabels::unsetosModelartsEnterpriseProjectId()
{
    osModelartsEnterpriseProjectIdIsSet_ = false;
}

std::string PoolMetaLabels::getOsModelartsPoolBiz() const
{
    return osModelartsPoolBiz_;
}

void PoolMetaLabels::setOsModelartsPoolBiz(const std::string& value)
{
    osModelartsPoolBiz_ = value;
    osModelartsPoolBizIsSet_ = true;
}

bool PoolMetaLabels::osModelartsPoolBizIsSet() const
{
    return osModelartsPoolBizIsSet_;
}

void PoolMetaLabels::unsetosModelartsPoolBiz()
{
    osModelartsPoolBizIsSet_ = false;
}

std::string PoolMetaLabels::getOsModelartsCreateFrom() const
{
    return osModelartsCreateFrom_;
}

void PoolMetaLabels::setOsModelartsCreateFrom(const std::string& value)
{
    osModelartsCreateFrom_ = value;
    osModelartsCreateFromIsSet_ = true;
}

bool PoolMetaLabels::osModelartsCreateFromIsSet() const
{
    return osModelartsCreateFromIsSet_;
}

void PoolMetaLabels::unsetosModelartsCreateFrom()
{
    osModelartsCreateFromIsSet_ = false;
}

std::string PoolMetaLabels::getOsModelartsNobilling() const
{
    return osModelartsNobilling_;
}

void PoolMetaLabels::setOsModelartsNobilling(const std::string& value)
{
    osModelartsNobilling_ = value;
    osModelartsNobillingIsSet_ = true;
}

bool PoolMetaLabels::osModelartsNobillingIsSet() const
{
    return osModelartsNobillingIsSet_;
}

void PoolMetaLabels::unsetosModelartsNobilling()
{
    osModelartsNobillingIsSet_ = false;
}

std::string PoolMetaLabels::getOsModelartsOrderName() const
{
    return osModelartsOrderName_;
}

void PoolMetaLabels::setOsModelartsOrderName(const std::string& value)
{
    osModelartsOrderName_ = value;
    osModelartsOrderNameIsSet_ = true;
}

bool PoolMetaLabels::osModelartsOrderNameIsSet() const
{
    return osModelartsOrderNameIsSet_;
}

void PoolMetaLabels::unsetosModelartsOrderName()
{
    osModelartsOrderNameIsSet_ = false;
}

std::string PoolMetaLabels::getOsModelartsRegion() const
{
    return osModelartsRegion_;
}

void PoolMetaLabels::setOsModelartsRegion(const std::string& value)
{
    osModelartsRegion_ = value;
    osModelartsRegionIsSet_ = true;
}

bool PoolMetaLabels::osModelartsRegionIsSet() const
{
    return osModelartsRegionIsSet_;
}

void PoolMetaLabels::unsetosModelartsRegion()
{
    osModelartsRegionIsSet_ = false;
}

}
}
}
}
}


