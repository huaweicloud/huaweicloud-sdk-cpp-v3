

#include "huaweicloud/modelarts/v1/model/WorkspaceQuotasResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




WorkspaceQuotasResponse::WorkspaceQuotasResponse()
{
    maxQuota_ = 0;
    maxQuotaIsSet_ = false;
    updateTime_ = 0L;
    updateTimeIsSet_ = false;
    resource_ = "";
    resourceIsSet_ = false;
    quota_ = 0;
    quotaIsSet_ = false;
    minQuota_ = 0;
    minQuotaIsSet_ = false;
    nameCn_ = "";
    nameCnIsSet_ = false;
    unitCn_ = "";
    unitCnIsSet_ = false;
    nameEn_ = "";
    nameEnIsSet_ = false;
    unitEn_ = "";
    unitEnIsSet_ = false;
    usedQuota_ = 0;
    usedQuotaIsSet_ = false;
}

WorkspaceQuotasResponse::~WorkspaceQuotasResponse() = default;

void WorkspaceQuotasResponse::validate()
{
}

web::json::value WorkspaceQuotasResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(maxQuotaIsSet_) {
        val[utility::conversions::to_string_t("max_quota")] = ModelBase::toJson(maxQuota_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(resourceIsSet_) {
        val[utility::conversions::to_string_t("resource")] = ModelBase::toJson(resource_);
    }
    if(quotaIsSet_) {
        val[utility::conversions::to_string_t("quota")] = ModelBase::toJson(quota_);
    }
    if(minQuotaIsSet_) {
        val[utility::conversions::to_string_t("min_quota")] = ModelBase::toJson(minQuota_);
    }
    if(nameCnIsSet_) {
        val[utility::conversions::to_string_t("name_cn")] = ModelBase::toJson(nameCn_);
    }
    if(unitCnIsSet_) {
        val[utility::conversions::to_string_t("unit_cn")] = ModelBase::toJson(unitCn_);
    }
    if(nameEnIsSet_) {
        val[utility::conversions::to_string_t("name_en")] = ModelBase::toJson(nameEn_);
    }
    if(unitEnIsSet_) {
        val[utility::conversions::to_string_t("unit_en")] = ModelBase::toJson(unitEn_);
    }
    if(usedQuotaIsSet_) {
        val[utility::conversions::to_string_t("used_quota")] = ModelBase::toJson(usedQuota_);
    }

    return val;
}
bool WorkspaceQuotasResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("max_quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_quota"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxQuota(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quota"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuota(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("min_quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min_quota"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinQuota(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name_cn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name_cn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNameCn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("unit_cn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unit_cn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUnitCn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name_en"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name_en"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNameEn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("unit_en"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unit_en"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUnitEn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("used_quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("used_quota"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsedQuota(refVal);
        }
    }
    return ok;
}


int32_t WorkspaceQuotasResponse::getMaxQuota() const
{
    return maxQuota_;
}

void WorkspaceQuotasResponse::setMaxQuota(int32_t value)
{
    maxQuota_ = value;
    maxQuotaIsSet_ = true;
}

bool WorkspaceQuotasResponse::maxQuotaIsSet() const
{
    return maxQuotaIsSet_;
}

void WorkspaceQuotasResponse::unsetmaxQuota()
{
    maxQuotaIsSet_ = false;
}

int64_t WorkspaceQuotasResponse::getUpdateTime() const
{
    return updateTime_;
}

void WorkspaceQuotasResponse::setUpdateTime(int64_t value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool WorkspaceQuotasResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void WorkspaceQuotasResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string WorkspaceQuotasResponse::getResource() const
{
    return resource_;
}

void WorkspaceQuotasResponse::setResource(const std::string& value)
{
    resource_ = value;
    resourceIsSet_ = true;
}

bool WorkspaceQuotasResponse::resourceIsSet() const
{
    return resourceIsSet_;
}

void WorkspaceQuotasResponse::unsetresource()
{
    resourceIsSet_ = false;
}

int32_t WorkspaceQuotasResponse::getQuota() const
{
    return quota_;
}

void WorkspaceQuotasResponse::setQuota(int32_t value)
{
    quota_ = value;
    quotaIsSet_ = true;
}

bool WorkspaceQuotasResponse::quotaIsSet() const
{
    return quotaIsSet_;
}

void WorkspaceQuotasResponse::unsetquota()
{
    quotaIsSet_ = false;
}

int32_t WorkspaceQuotasResponse::getMinQuota() const
{
    return minQuota_;
}

void WorkspaceQuotasResponse::setMinQuota(int32_t value)
{
    minQuota_ = value;
    minQuotaIsSet_ = true;
}

bool WorkspaceQuotasResponse::minQuotaIsSet() const
{
    return minQuotaIsSet_;
}

void WorkspaceQuotasResponse::unsetminQuota()
{
    minQuotaIsSet_ = false;
}

std::string WorkspaceQuotasResponse::getNameCn() const
{
    return nameCn_;
}

void WorkspaceQuotasResponse::setNameCn(const std::string& value)
{
    nameCn_ = value;
    nameCnIsSet_ = true;
}

bool WorkspaceQuotasResponse::nameCnIsSet() const
{
    return nameCnIsSet_;
}

void WorkspaceQuotasResponse::unsetnameCn()
{
    nameCnIsSet_ = false;
}

std::string WorkspaceQuotasResponse::getUnitCn() const
{
    return unitCn_;
}

void WorkspaceQuotasResponse::setUnitCn(const std::string& value)
{
    unitCn_ = value;
    unitCnIsSet_ = true;
}

bool WorkspaceQuotasResponse::unitCnIsSet() const
{
    return unitCnIsSet_;
}

void WorkspaceQuotasResponse::unsetunitCn()
{
    unitCnIsSet_ = false;
}

std::string WorkspaceQuotasResponse::getNameEn() const
{
    return nameEn_;
}

void WorkspaceQuotasResponse::setNameEn(const std::string& value)
{
    nameEn_ = value;
    nameEnIsSet_ = true;
}

bool WorkspaceQuotasResponse::nameEnIsSet() const
{
    return nameEnIsSet_;
}

void WorkspaceQuotasResponse::unsetnameEn()
{
    nameEnIsSet_ = false;
}

std::string WorkspaceQuotasResponse::getUnitEn() const
{
    return unitEn_;
}

void WorkspaceQuotasResponse::setUnitEn(const std::string& value)
{
    unitEn_ = value;
    unitEnIsSet_ = true;
}

bool WorkspaceQuotasResponse::unitEnIsSet() const
{
    return unitEnIsSet_;
}

void WorkspaceQuotasResponse::unsetunitEn()
{
    unitEnIsSet_ = false;
}

int32_t WorkspaceQuotasResponse::getUsedQuota() const
{
    return usedQuota_;
}

void WorkspaceQuotasResponse::setUsedQuota(int32_t value)
{
    usedQuota_ = value;
    usedQuotaIsSet_ = true;
}

bool WorkspaceQuotasResponse::usedQuotaIsSet() const
{
    return usedQuotaIsSet_;
}

void WorkspaceQuotasResponse::unsetusedQuota()
{
    usedQuotaIsSet_ = false;
}

}
}
}
}
}


