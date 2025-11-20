

#include "huaweicloud/metastudio/v1/model/ShowTenantAssginRecordResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowTenantAssginRecordResponse::ShowTenantAssginRecordResponse()
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
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowTenantAssginRecordResponse::~ShowTenantAssginRecordResponse() = default;

void ShowTenantAssginRecordResponse::validate()
{
}

web::json::value ShowTenantAssginRecordResponse::toJson() const
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
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowTenantAssginRecordResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string ShowTenantAssginRecordResponse::getCustomerProjectId() const
{
    return customerProjectId_;
}

void ShowTenantAssginRecordResponse::setCustomerProjectId(const std::string& value)
{
    customerProjectId_ = value;
    customerProjectIdIsSet_ = true;
}

bool ShowTenantAssginRecordResponse::customerProjectIdIsSet() const
{
    return customerProjectIdIsSet_;
}

void ShowTenantAssginRecordResponse::unsetcustomerProjectId()
{
    customerProjectIdIsSet_ = false;
}

std::string ShowTenantAssginRecordResponse::getCustomerName() const
{
    return customerName_;
}

void ShowTenantAssginRecordResponse::setCustomerName(const std::string& value)
{
    customerName_ = value;
    customerNameIsSet_ = true;
}

bool ShowTenantAssginRecordResponse::customerNameIsSet() const
{
    return customerNameIsSet_;
}

void ShowTenantAssginRecordResponse::unsetcustomerName()
{
    customerNameIsSet_ = false;
}

std::string ShowTenantAssginRecordResponse::getRegionId() const
{
    return regionId_;
}

void ShowTenantAssginRecordResponse::setRegionId(const std::string& value)
{
    regionId_ = value;
    regionIdIsSet_ = true;
}

bool ShowTenantAssginRecordResponse::regionIdIsSet() const
{
    return regionIdIsSet_;
}

void ShowTenantAssginRecordResponse::unsetregionId()
{
    regionIdIsSet_ = false;
}

int32_t ShowTenantAssginRecordResponse::getResourceCount() const
{
    return resourceCount_;
}

void ShowTenantAssginRecordResponse::setResourceCount(int32_t value)
{
    resourceCount_ = value;
    resourceCountIsSet_ = true;
}

bool ShowTenantAssginRecordResponse::resourceCountIsSet() const
{
    return resourceCountIsSet_;
}

void ShowTenantAssginRecordResponse::unsetresourceCount()
{
    resourceCountIsSet_ = false;
}

std::vector<AllocateSpResourceInfo>& ShowTenantAssginRecordResponse::getResources()
{
    return resources_;
}

void ShowTenantAssginRecordResponse::setResources(const std::vector<AllocateSpResourceInfo>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool ShowTenantAssginRecordResponse::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void ShowTenantAssginRecordResponse::unsetresources()
{
    resourcesIsSet_ = false;
}

std::vector<AllocateSpResourceSummaryInfo>& ShowTenantAssginRecordResponse::getResourcesOverview()
{
    return resourcesOverview_;
}

void ShowTenantAssginRecordResponse::setResourcesOverview(const std::vector<AllocateSpResourceSummaryInfo>& value)
{
    resourcesOverview_ = value;
    resourcesOverviewIsSet_ = true;
}

bool ShowTenantAssginRecordResponse::resourcesOverviewIsSet() const
{
    return resourcesOverviewIsSet_;
}

void ShowTenantAssginRecordResponse::unsetresourcesOverview()
{
    resourcesOverviewIsSet_ = false;
}

std::string ShowTenantAssginRecordResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowTenantAssginRecordResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowTenantAssginRecordResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowTenantAssginRecordResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


