

#include "huaweicloud/metastudio/v1/model/AllocateSpResourceSummaryInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




AllocateSpResourceSummaryInfo::AllocateSpResourceSummaryInfo()
{
    resourceSpecCode_ = "";
    resourceSpecCodeIsSet_ = false;
    resourceNum_ = 0.0;
    resourceNumIsSet_ = false;
    resourceUsedNum_ = 0.0;
    resourceUsedNumIsSet_ = false;
    resourceRemindQuota_ = 0.0;
    resourceRemindQuotaIsSet_ = false;
}

AllocateSpResourceSummaryInfo::~AllocateSpResourceSummaryInfo() = default;

void AllocateSpResourceSummaryInfo::validate()
{
}

web::json::value AllocateSpResourceSummaryInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceSpecCodeIsSet_) {
        val[utility::conversions::to_string_t("resource_spec_code")] = ModelBase::toJson(resourceSpecCode_);
    }
    if(resourceNumIsSet_) {
        val[utility::conversions::to_string_t("resource_num")] = ModelBase::toJson(resourceNum_);
    }
    if(resourceUsedNumIsSet_) {
        val[utility::conversions::to_string_t("resource_used_num")] = ModelBase::toJson(resourceUsedNum_);
    }
    if(resourceRemindQuotaIsSet_) {
        val[utility::conversions::to_string_t("resource_remind_quota")] = ModelBase::toJson(resourceRemindQuota_);
    }

    return val;
}
bool AllocateSpResourceSummaryInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_spec_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_spec_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceSpecCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_num"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_used_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_used_num"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceUsedNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_remind_quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_remind_quota"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceRemindQuota(refVal);
        }
    }
    return ok;
}


std::string AllocateSpResourceSummaryInfo::getResourceSpecCode() const
{
    return resourceSpecCode_;
}

void AllocateSpResourceSummaryInfo::setResourceSpecCode(const std::string& value)
{
    resourceSpecCode_ = value;
    resourceSpecCodeIsSet_ = true;
}

bool AllocateSpResourceSummaryInfo::resourceSpecCodeIsSet() const
{
    return resourceSpecCodeIsSet_;
}

void AllocateSpResourceSummaryInfo::unsetresourceSpecCode()
{
    resourceSpecCodeIsSet_ = false;
}

double AllocateSpResourceSummaryInfo::getResourceNum() const
{
    return resourceNum_;
}

void AllocateSpResourceSummaryInfo::setResourceNum(double value)
{
    resourceNum_ = value;
    resourceNumIsSet_ = true;
}

bool AllocateSpResourceSummaryInfo::resourceNumIsSet() const
{
    return resourceNumIsSet_;
}

void AllocateSpResourceSummaryInfo::unsetresourceNum()
{
    resourceNumIsSet_ = false;
}

double AllocateSpResourceSummaryInfo::getResourceUsedNum() const
{
    return resourceUsedNum_;
}

void AllocateSpResourceSummaryInfo::setResourceUsedNum(double value)
{
    resourceUsedNum_ = value;
    resourceUsedNumIsSet_ = true;
}

bool AllocateSpResourceSummaryInfo::resourceUsedNumIsSet() const
{
    return resourceUsedNumIsSet_;
}

void AllocateSpResourceSummaryInfo::unsetresourceUsedNum()
{
    resourceUsedNumIsSet_ = false;
}

double AllocateSpResourceSummaryInfo::getResourceRemindQuota() const
{
    return resourceRemindQuota_;
}

void AllocateSpResourceSummaryInfo::setResourceRemindQuota(double value)
{
    resourceRemindQuota_ = value;
    resourceRemindQuotaIsSet_ = true;
}

bool AllocateSpResourceSummaryInfo::resourceRemindQuotaIsSet() const
{
    return resourceRemindQuotaIsSet_;
}

void AllocateSpResourceSummaryInfo::unsetresourceRemindQuota()
{
    resourceRemindQuotaIsSet_ = false;
}

}
}
}
}
}


