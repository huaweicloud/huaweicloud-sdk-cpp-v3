

#include "huaweicloud/metastudio/v1/model/ShowSummaryUsageDataResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowSummaryUsageDataResponse::ShowSummaryUsageDataResponse()
{
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    businessType_ = "";
    businessTypeIsSet_ = false;
    number_ = 0;
    numberIsSet_ = false;
    usage_ = 0.0f;
    usageIsSet_ = false;
    unit_ = "";
    unitIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowSummaryUsageDataResponse::~ShowSummaryUsageDataResponse() = default;

void ShowSummaryUsageDataResponse::validate()
{
}

web::json::value ShowSummaryUsageDataResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(businessTypeIsSet_) {
        val[utility::conversions::to_string_t("business_type")] = ModelBase::toJson(businessType_);
    }
    if(numberIsSet_) {
        val[utility::conversions::to_string_t("number")] = ModelBase::toJson(number_);
    }
    if(usageIsSet_) {
        val[utility::conversions::to_string_t("usage")] = ModelBase::toJson(usage_);
    }
    if(unitIsSet_) {
        val[utility::conversions::to_string_t("unit")] = ModelBase::toJson(unit_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowSummaryUsageDataResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("business_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("business_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBusinessType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("number"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("usage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("usage"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("unit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUnit(refVal);
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


std::string ShowSummaryUsageDataResponse::getResourceType() const
{
    return resourceType_;
}

void ShowSummaryUsageDataResponse::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool ShowSummaryUsageDataResponse::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void ShowSummaryUsageDataResponse::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string ShowSummaryUsageDataResponse::getBusinessType() const
{
    return businessType_;
}

void ShowSummaryUsageDataResponse::setBusinessType(const std::string& value)
{
    businessType_ = value;
    businessTypeIsSet_ = true;
}

bool ShowSummaryUsageDataResponse::businessTypeIsSet() const
{
    return businessTypeIsSet_;
}

void ShowSummaryUsageDataResponse::unsetbusinessType()
{
    businessTypeIsSet_ = false;
}

int32_t ShowSummaryUsageDataResponse::getNumber() const
{
    return number_;
}

void ShowSummaryUsageDataResponse::setNumber(int32_t value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool ShowSummaryUsageDataResponse::numberIsSet() const
{
    return numberIsSet_;
}

void ShowSummaryUsageDataResponse::unsetnumber()
{
    numberIsSet_ = false;
}

float ShowSummaryUsageDataResponse::getUsage() const
{
    return usage_;
}

void ShowSummaryUsageDataResponse::setUsage(float value)
{
    usage_ = value;
    usageIsSet_ = true;
}

bool ShowSummaryUsageDataResponse::usageIsSet() const
{
    return usageIsSet_;
}

void ShowSummaryUsageDataResponse::unsetusage()
{
    usageIsSet_ = false;
}

std::string ShowSummaryUsageDataResponse::getUnit() const
{
    return unit_;
}

void ShowSummaryUsageDataResponse::setUnit(const std::string& value)
{
    unit_ = value;
    unitIsSet_ = true;
}

bool ShowSummaryUsageDataResponse::unitIsSet() const
{
    return unitIsSet_;
}

void ShowSummaryUsageDataResponse::unsetunit()
{
    unitIsSet_ = false;
}

std::string ShowSummaryUsageDataResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowSummaryUsageDataResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowSummaryUsageDataResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowSummaryUsageDataResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


