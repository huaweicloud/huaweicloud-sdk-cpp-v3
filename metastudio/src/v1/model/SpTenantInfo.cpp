

#include "huaweicloud/metastudio/v1/model/SpTenantInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




SpTenantInfo::SpTenantInfo()
{
    customerProjectId_ = "";
    customerProjectIdIsSet_ = false;
    customerName_ = "";
    customerNameIsSet_ = false;
    regionId_ = "";
    regionIdIsSet_ = false;
    resourceCount_ = 0;
    resourceCountIsSet_ = false;
    resourcesIsSet_ = false;
    resourcesOverviewIsSet_ = false;
}

SpTenantInfo::~SpTenantInfo() = default;

void SpTenantInfo::validate()
{
}

web::json::value SpTenantInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(customerProjectIdIsSet_) {
        val[utility::conversions::to_string_t("customer_project_id")] = ModelBase::toJson(customerProjectId_);
    }
    if(customerNameIsSet_) {
        val[utility::conversions::to_string_t("customer_name")] = ModelBase::toJson(customerName_);
    }
    if(regionIdIsSet_) {
        val[utility::conversions::to_string_t("region_id")] = ModelBase::toJson(regionId_);
    }
    if(resourceCountIsSet_) {
        val[utility::conversions::to_string_t("resource_count")] = ModelBase::toJson(resourceCount_);
    }
    if(resourcesIsSet_) {
        val[utility::conversions::to_string_t("resources")] = ModelBase::toJson(resources_);
    }
    if(resourcesOverviewIsSet_) {
        val[utility::conversions::to_string_t("resources_overview")] = ModelBase::toJson(resourcesOverview_);
    }

    return val;
}
bool SpTenantInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("customer_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("customer_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomerProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("customer_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("customer_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomerName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            std::vector<AllocateSpResourceInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResources(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resources_overview"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources_overview"));
        if(!fieldValue.is_null())
        {
            std::vector<AllocateSpResourceSummaryInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourcesOverview(refVal);
        }
    }
    return ok;
}


std::string SpTenantInfo::getCustomerProjectId() const
{
    return customerProjectId_;
}

void SpTenantInfo::setCustomerProjectId(const std::string& value)
{
    customerProjectId_ = value;
    customerProjectIdIsSet_ = true;
}

bool SpTenantInfo::customerProjectIdIsSet() const
{
    return customerProjectIdIsSet_;
}

void SpTenantInfo::unsetcustomerProjectId()
{
    customerProjectIdIsSet_ = false;
}

std::string SpTenantInfo::getCustomerName() const
{
    return customerName_;
}

void SpTenantInfo::setCustomerName(const std::string& value)
{
    customerName_ = value;
    customerNameIsSet_ = true;
}

bool SpTenantInfo::customerNameIsSet() const
{
    return customerNameIsSet_;
}

void SpTenantInfo::unsetcustomerName()
{
    customerNameIsSet_ = false;
}

std::string SpTenantInfo::getRegionId() const
{
    return regionId_;
}

void SpTenantInfo::setRegionId(const std::string& value)
{
    regionId_ = value;
    regionIdIsSet_ = true;
}

bool SpTenantInfo::regionIdIsSet() const
{
    return regionIdIsSet_;
}

void SpTenantInfo::unsetregionId()
{
    regionIdIsSet_ = false;
}

int32_t SpTenantInfo::getResourceCount() const
{
    return resourceCount_;
}

void SpTenantInfo::setResourceCount(int32_t value)
{
    resourceCount_ = value;
    resourceCountIsSet_ = true;
}

bool SpTenantInfo::resourceCountIsSet() const
{
    return resourceCountIsSet_;
}

void SpTenantInfo::unsetresourceCount()
{
    resourceCountIsSet_ = false;
}

std::vector<AllocateSpResourceInfo>& SpTenantInfo::getResources()
{
    return resources_;
}

void SpTenantInfo::setResources(const std::vector<AllocateSpResourceInfo>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool SpTenantInfo::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void SpTenantInfo::unsetresources()
{
    resourcesIsSet_ = false;
}

std::vector<AllocateSpResourceSummaryInfo>& SpTenantInfo::getResourcesOverview()
{
    return resourcesOverview_;
}

void SpTenantInfo::setResourcesOverview(const std::vector<AllocateSpResourceSummaryInfo>& value)
{
    resourcesOverview_ = value;
    resourcesOverviewIsSet_ = true;
}

bool SpTenantInfo::resourcesOverviewIsSet() const
{
    return resourcesOverviewIsSet_;
}

void SpTenantInfo::unsetresourcesOverview()
{
    resourcesOverviewIsSet_ = false;
}

}
}
}
}
}


