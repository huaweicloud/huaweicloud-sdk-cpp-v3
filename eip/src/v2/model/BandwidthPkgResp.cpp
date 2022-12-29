

#include "huaweicloud/eip/v2/model/BandwidthPkgResp.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




BandwidthPkgResp::BandwidthPkgResp()
{
    resourceId_ = "";
    resourceIdIsSet_ = false;
    resourceName_ = "";
    resourceNameIsSet_ = false;
    processedTime_ = "";
    processedTimeIsSet_ = false;
    bandwidthId_ = "";
    bandwidthIdIsSet_ = false;
    pkgSize_ = 0;
    pkgSizeIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
    billingInfo_ = "";
    billingInfoIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

BandwidthPkgResp::~BandwidthPkgResp() = default;

void BandwidthPkgResp::validate()
{
}

web::json::value BandwidthPkgResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resourceId")] = ModelBase::toJson(resourceId_);
    }
    if(resourceNameIsSet_) {
        val[utility::conversions::to_string_t("resourceName")] = ModelBase::toJson(resourceName_);
    }
    if(processedTimeIsSet_) {
        val[utility::conversions::to_string_t("processedTime")] = ModelBase::toJson(processedTime_);
    }
    if(bandwidthIdIsSet_) {
        val[utility::conversions::to_string_t("bandwidthId")] = ModelBase::toJson(bandwidthId_);
    }
    if(pkgSizeIsSet_) {
        val[utility::conversions::to_string_t("pkgSize")] = ModelBase::toJson(pkgSize_);
    }
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenantId")] = ModelBase::toJson(tenantId_);
    }
    if(billingInfoIsSet_) {
        val[utility::conversions::to_string_t("billingInfo")] = ModelBase::toJson(billingInfo_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("startTime")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("endTime")] = ModelBase::toJson(endTime_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}

bool BandwidthPkgResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resourceId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resourceId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resourceName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resourceName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("processedTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("processedTime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProcessedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bandwidthId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidthId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidthId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pkgSize"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pkgSize"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPkgSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tenantId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenantId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenantId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("billingInfo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("billingInfo"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBillingInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("startTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("startTime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endTime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
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
    return ok;
}


std::string BandwidthPkgResp::getResourceId() const
{
    return resourceId_;
}

void BandwidthPkgResp::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool BandwidthPkgResp::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void BandwidthPkgResp::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string BandwidthPkgResp::getResourceName() const
{
    return resourceName_;
}

void BandwidthPkgResp::setResourceName(const std::string& value)
{
    resourceName_ = value;
    resourceNameIsSet_ = true;
}

bool BandwidthPkgResp::resourceNameIsSet() const
{
    return resourceNameIsSet_;
}

void BandwidthPkgResp::unsetresourceName()
{
    resourceNameIsSet_ = false;
}

std::string BandwidthPkgResp::getProcessedTime() const
{
    return processedTime_;
}

void BandwidthPkgResp::setProcessedTime(const std::string& value)
{
    processedTime_ = value;
    processedTimeIsSet_ = true;
}

bool BandwidthPkgResp::processedTimeIsSet() const
{
    return processedTimeIsSet_;
}

void BandwidthPkgResp::unsetprocessedTime()
{
    processedTimeIsSet_ = false;
}

std::string BandwidthPkgResp::getBandwidthId() const
{
    return bandwidthId_;
}

void BandwidthPkgResp::setBandwidthId(const std::string& value)
{
    bandwidthId_ = value;
    bandwidthIdIsSet_ = true;
}

bool BandwidthPkgResp::bandwidthIdIsSet() const
{
    return bandwidthIdIsSet_;
}

void BandwidthPkgResp::unsetbandwidthId()
{
    bandwidthIdIsSet_ = false;
}

int32_t BandwidthPkgResp::getPkgSize() const
{
    return pkgSize_;
}

void BandwidthPkgResp::setPkgSize(int32_t value)
{
    pkgSize_ = value;
    pkgSizeIsSet_ = true;
}

bool BandwidthPkgResp::pkgSizeIsSet() const
{
    return pkgSizeIsSet_;
}

void BandwidthPkgResp::unsetpkgSize()
{
    pkgSizeIsSet_ = false;
}

std::string BandwidthPkgResp::getTenantId() const
{
    return tenantId_;
}

void BandwidthPkgResp::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool BandwidthPkgResp::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void BandwidthPkgResp::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string BandwidthPkgResp::getBillingInfo() const
{
    return billingInfo_;
}

void BandwidthPkgResp::setBillingInfo(const std::string& value)
{
    billingInfo_ = value;
    billingInfoIsSet_ = true;
}

bool BandwidthPkgResp::billingInfoIsSet() const
{
    return billingInfoIsSet_;
}

void BandwidthPkgResp::unsetbillingInfo()
{
    billingInfoIsSet_ = false;
}

std::string BandwidthPkgResp::getStartTime() const
{
    return startTime_;
}

void BandwidthPkgResp::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool BandwidthPkgResp::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void BandwidthPkgResp::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string BandwidthPkgResp::getEndTime() const
{
    return endTime_;
}

void BandwidthPkgResp::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool BandwidthPkgResp::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void BandwidthPkgResp::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string BandwidthPkgResp::getStatus() const
{
    return status_;
}

void BandwidthPkgResp::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BandwidthPkgResp::statusIsSet() const
{
    return statusIsSet_;
}

void BandwidthPkgResp::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


