

#include "huaweicloud/evs/model/CinderListQuotasRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




CinderListQuotasRequest::CinderListQuotasRequest()
{
    targetProjectId_ = "";
    targetProjectIdIsSet_ = false;
    usage_ = "";
    usageIsSet_ = false;
}

CinderListQuotasRequest::~CinderListQuotasRequest() = default;

void CinderListQuotasRequest::validate()
{
}

web::json::value CinderListQuotasRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(targetProjectIdIsSet_) {
        val[utility::conversions::to_string_t("target_project_id")] = ModelBase::toJson(targetProjectId_);
    }
    if(usageIsSet_) {
        val[utility::conversions::to_string_t("usage")] = ModelBase::toJson(usage_);
    }

    return val;
}

bool CinderListQuotasRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("target_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("usage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("usage"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsage(refVal);
        }
    }
    return ok;
}


std::string CinderListQuotasRequest::getTargetProjectId() const
{
    return targetProjectId_;
}

void CinderListQuotasRequest::setTargetProjectId(const std::string& value)
{
    targetProjectId_ = value;
    targetProjectIdIsSet_ = true;
}

bool CinderListQuotasRequest::targetProjectIdIsSet() const
{
    return targetProjectIdIsSet_;
}

void CinderListQuotasRequest::unsettargetProjectId()
{
    targetProjectIdIsSet_ = false;
}

std::string CinderListQuotasRequest::getUsage() const
{
    return usage_;
}

void CinderListQuotasRequest::setUsage(const std::string& value)
{
    usage_ = value;
    usageIsSet_ = true;
}

bool CinderListQuotasRequest::usageIsSet() const
{
    return usageIsSet_;
}

void CinderListQuotasRequest::unsetusage()
{
    usageIsSet_ = false;
}

}
}
}
}
}


