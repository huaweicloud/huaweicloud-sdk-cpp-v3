

#include "huaweicloud/modelarts/v1/model/TrainingQuotaResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




TrainingQuotaResponse::TrainingQuotaResponse()
{
    resource_ = "";
    resourceIsSet_ = false;
    quota_ = 0;
    quotaIsSet_ = false;
    used_ = 0;
    usedIsSet_ = false;
}

TrainingQuotaResponse::~TrainingQuotaResponse() = default;

void TrainingQuotaResponse::validate()
{
}

web::json::value TrainingQuotaResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceIsSet_) {
        val[utility::conversions::to_string_t("resource")] = ModelBase::toJson(resource_);
    }
    if(quotaIsSet_) {
        val[utility::conversions::to_string_t("quota")] = ModelBase::toJson(quota_);
    }
    if(usedIsSet_) {
        val[utility::conversions::to_string_t("used")] = ModelBase::toJson(used_);
    }

    return val;
}
bool TrainingQuotaResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("used"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("used"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsed(refVal);
        }
    }
    return ok;
}


std::string TrainingQuotaResponse::getResource() const
{
    return resource_;
}

void TrainingQuotaResponse::setResource(const std::string& value)
{
    resource_ = value;
    resourceIsSet_ = true;
}

bool TrainingQuotaResponse::resourceIsSet() const
{
    return resourceIsSet_;
}

void TrainingQuotaResponse::unsetresource()
{
    resourceIsSet_ = false;
}

int32_t TrainingQuotaResponse::getQuota() const
{
    return quota_;
}

void TrainingQuotaResponse::setQuota(int32_t value)
{
    quota_ = value;
    quotaIsSet_ = true;
}

bool TrainingQuotaResponse::quotaIsSet() const
{
    return quotaIsSet_;
}

void TrainingQuotaResponse::unsetquota()
{
    quotaIsSet_ = false;
}

int32_t TrainingQuotaResponse::getUsed() const
{
    return used_;
}

void TrainingQuotaResponse::setUsed(int32_t value)
{
    used_ = value;
    usedIsSet_ = true;
}

bool TrainingQuotaResponse::usedIsSet() const
{
    return usedIsSet_;
}

void TrainingQuotaResponse::unsetused()
{
    usedIsSet_ = false;
}

}
}
}
}
}


