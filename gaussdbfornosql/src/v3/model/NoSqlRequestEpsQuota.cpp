

#include "huaweicloud/gaussdbfornosql/v3/model/NoSqlRequestEpsQuota.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




NoSqlRequestEpsQuota::NoSqlRequestEpsQuota()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    quotaIsSet_ = false;
}

NoSqlRequestEpsQuota::~NoSqlRequestEpsQuota() = default;

void NoSqlRequestEpsQuota::validate()
{
}

web::json::value NoSqlRequestEpsQuota::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(quotaIsSet_) {
        val[utility::conversions::to_string_t("quota")] = ModelBase::toJson(quota_);
    }

    return val;
}

bool NoSqlRequestEpsQuota::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quota"));
        if(!fieldValue.is_null())
        {
            NoSqlEpsQuotaRequestInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuota(refVal);
        }
    }
    return ok;
}

std::string NoSqlRequestEpsQuota::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void NoSqlRequestEpsQuota::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool NoSqlRequestEpsQuota::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void NoSqlRequestEpsQuota::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

NoSqlEpsQuotaRequestInfo NoSqlRequestEpsQuota::getQuota() const
{
    return quota_;
}

void NoSqlRequestEpsQuota::setQuota(const NoSqlEpsQuotaRequestInfo& value)
{
    quota_ = value;
    quotaIsSet_ = true;
}

bool NoSqlRequestEpsQuota::quotaIsSet() const
{
    return quotaIsSet_;
}

void NoSqlRequestEpsQuota::unsetquota()
{
    quotaIsSet_ = false;
}

}
}
}
}
}


