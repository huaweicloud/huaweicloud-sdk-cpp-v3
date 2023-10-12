

#include "huaweicloud/gaussdbfornosql/v3/model/NoSqlQueryEpsQuotaInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




NoSqlQueryEpsQuotaInfo::NoSqlQueryEpsQuotaInfo()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    enterpriseProjectName_ = "";
    enterpriseProjectNameIsSet_ = false;
    quotaIsSet_ = false;
    usedIsSet_ = false;
}

NoSqlQueryEpsQuotaInfo::~NoSqlQueryEpsQuotaInfo() = default;

void NoSqlQueryEpsQuotaInfo::validate()
{
}

web::json::value NoSqlQueryEpsQuotaInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(enterpriseProjectNameIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_name")] = ModelBase::toJson(enterpriseProjectName_);
    }
    if(quotaIsSet_) {
        val[utility::conversions::to_string_t("quota")] = ModelBase::toJson(quota_);
    }
    if(usedIsSet_) {
        val[utility::conversions::to_string_t("used")] = ModelBase::toJson(used_);
    }

    return val;
}
bool NoSqlQueryEpsQuotaInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quota"));
        if(!fieldValue.is_null())
        {
            NoSqlEpsQuotaTotal refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuota(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("used"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("used"));
        if(!fieldValue.is_null())
        {
            NoSqlEpsQuotaUsed refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsed(refVal);
        }
    }
    return ok;
}


std::string NoSqlQueryEpsQuotaInfo::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void NoSqlQueryEpsQuotaInfo::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool NoSqlQueryEpsQuotaInfo::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void NoSqlQueryEpsQuotaInfo::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string NoSqlQueryEpsQuotaInfo::getEnterpriseProjectName() const
{
    return enterpriseProjectName_;
}

void NoSqlQueryEpsQuotaInfo::setEnterpriseProjectName(const std::string& value)
{
    enterpriseProjectName_ = value;
    enterpriseProjectNameIsSet_ = true;
}

bool NoSqlQueryEpsQuotaInfo::enterpriseProjectNameIsSet() const
{
    return enterpriseProjectNameIsSet_;
}

void NoSqlQueryEpsQuotaInfo::unsetenterpriseProjectName()
{
    enterpriseProjectNameIsSet_ = false;
}

NoSqlEpsQuotaTotal NoSqlQueryEpsQuotaInfo::getQuota() const
{
    return quota_;
}

void NoSqlQueryEpsQuotaInfo::setQuota(const NoSqlEpsQuotaTotal& value)
{
    quota_ = value;
    quotaIsSet_ = true;
}

bool NoSqlQueryEpsQuotaInfo::quotaIsSet() const
{
    return quotaIsSet_;
}

void NoSqlQueryEpsQuotaInfo::unsetquota()
{
    quotaIsSet_ = false;
}

NoSqlEpsQuotaUsed NoSqlQueryEpsQuotaInfo::getUsed() const
{
    return used_;
}

void NoSqlQueryEpsQuotaInfo::setUsed(const NoSqlEpsQuotaUsed& value)
{
    used_ = value;
    usedIsSet_ = true;
}

bool NoSqlQueryEpsQuotaInfo::usedIsSet() const
{
    return usedIsSet_;
}

void NoSqlQueryEpsQuotaInfo::unsetused()
{
    usedIsSet_ = false;
}

}
}
}
}
}


