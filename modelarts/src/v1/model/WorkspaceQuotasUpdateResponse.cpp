

#include "huaweicloud/modelarts/v1/model/WorkspaceQuotasUpdateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




WorkspaceQuotasUpdateResponse::WorkspaceQuotasUpdateResponse()
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
}

WorkspaceQuotasUpdateResponse::~WorkspaceQuotasUpdateResponse() = default;

void WorkspaceQuotasUpdateResponse::validate()
{
}

web::json::value WorkspaceQuotasUpdateResponse::toJson() const
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

    return val;
}
bool WorkspaceQuotasUpdateResponse::fromJson(const web::json::value& val)
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
    return ok;
}


int32_t WorkspaceQuotasUpdateResponse::getMaxQuota() const
{
    return maxQuota_;
}

void WorkspaceQuotasUpdateResponse::setMaxQuota(int32_t value)
{
    maxQuota_ = value;
    maxQuotaIsSet_ = true;
}

bool WorkspaceQuotasUpdateResponse::maxQuotaIsSet() const
{
    return maxQuotaIsSet_;
}

void WorkspaceQuotasUpdateResponse::unsetmaxQuota()
{
    maxQuotaIsSet_ = false;
}

int64_t WorkspaceQuotasUpdateResponse::getUpdateTime() const
{
    return updateTime_;
}

void WorkspaceQuotasUpdateResponse::setUpdateTime(int64_t value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool WorkspaceQuotasUpdateResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void WorkspaceQuotasUpdateResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string WorkspaceQuotasUpdateResponse::getResource() const
{
    return resource_;
}

void WorkspaceQuotasUpdateResponse::setResource(const std::string& value)
{
    resource_ = value;
    resourceIsSet_ = true;
}

bool WorkspaceQuotasUpdateResponse::resourceIsSet() const
{
    return resourceIsSet_;
}

void WorkspaceQuotasUpdateResponse::unsetresource()
{
    resourceIsSet_ = false;
}

int32_t WorkspaceQuotasUpdateResponse::getQuota() const
{
    return quota_;
}

void WorkspaceQuotasUpdateResponse::setQuota(int32_t value)
{
    quota_ = value;
    quotaIsSet_ = true;
}

bool WorkspaceQuotasUpdateResponse::quotaIsSet() const
{
    return quotaIsSet_;
}

void WorkspaceQuotasUpdateResponse::unsetquota()
{
    quotaIsSet_ = false;
}

int32_t WorkspaceQuotasUpdateResponse::getMinQuota() const
{
    return minQuota_;
}

void WorkspaceQuotasUpdateResponse::setMinQuota(int32_t value)
{
    minQuota_ = value;
    minQuotaIsSet_ = true;
}

bool WorkspaceQuotasUpdateResponse::minQuotaIsSet() const
{
    return minQuotaIsSet_;
}

void WorkspaceQuotasUpdateResponse::unsetminQuota()
{
    minQuotaIsSet_ = false;
}

std::string WorkspaceQuotasUpdateResponse::getNameCn() const
{
    return nameCn_;
}

void WorkspaceQuotasUpdateResponse::setNameCn(const std::string& value)
{
    nameCn_ = value;
    nameCnIsSet_ = true;
}

bool WorkspaceQuotasUpdateResponse::nameCnIsSet() const
{
    return nameCnIsSet_;
}

void WorkspaceQuotasUpdateResponse::unsetnameCn()
{
    nameCnIsSet_ = false;
}

std::string WorkspaceQuotasUpdateResponse::getUnitCn() const
{
    return unitCn_;
}

void WorkspaceQuotasUpdateResponse::setUnitCn(const std::string& value)
{
    unitCn_ = value;
    unitCnIsSet_ = true;
}

bool WorkspaceQuotasUpdateResponse::unitCnIsSet() const
{
    return unitCnIsSet_;
}

void WorkspaceQuotasUpdateResponse::unsetunitCn()
{
    unitCnIsSet_ = false;
}

std::string WorkspaceQuotasUpdateResponse::getNameEn() const
{
    return nameEn_;
}

void WorkspaceQuotasUpdateResponse::setNameEn(const std::string& value)
{
    nameEn_ = value;
    nameEnIsSet_ = true;
}

bool WorkspaceQuotasUpdateResponse::nameEnIsSet() const
{
    return nameEnIsSet_;
}

void WorkspaceQuotasUpdateResponse::unsetnameEn()
{
    nameEnIsSet_ = false;
}

std::string WorkspaceQuotasUpdateResponse::getUnitEn() const
{
    return unitEn_;
}

void WorkspaceQuotasUpdateResponse::setUnitEn(const std::string& value)
{
    unitEn_ = value;
    unitEnIsSet_ = true;
}

bool WorkspaceQuotasUpdateResponse::unitEnIsSet() const
{
    return unitEnIsSet_;
}

void WorkspaceQuotasUpdateResponse::unsetunitEn()
{
    unitEnIsSet_ = false;
}

}
}
}
}
}


