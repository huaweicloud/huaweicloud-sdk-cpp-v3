

#include "huaweicloud/cdn/v2/model/AccountConfigModifyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




AccountConfigModifyRequest::AccountConfigModifyRequest()
{
    obsAgencyStatus_ = "";
    obsAgencyStatusIsSet_ = false;
    scmAgencyStatus_ = "";
    scmAgencyStatusIsSet_ = false;
}

AccountConfigModifyRequest::~AccountConfigModifyRequest() = default;

void AccountConfigModifyRequest::validate()
{
}

web::json::value AccountConfigModifyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(obsAgencyStatusIsSet_) {
        val[utility::conversions::to_string_t("obs_agency_status")] = ModelBase::toJson(obsAgencyStatus_);
    }
    if(scmAgencyStatusIsSet_) {
        val[utility::conversions::to_string_t("scm_agency_status")] = ModelBase::toJson(scmAgencyStatus_);
    }

    return val;
}
bool AccountConfigModifyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("obs_agency_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs_agency_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObsAgencyStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scm_agency_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scm_agency_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScmAgencyStatus(refVal);
        }
    }
    return ok;
}


std::string AccountConfigModifyRequest::getObsAgencyStatus() const
{
    return obsAgencyStatus_;
}

void AccountConfigModifyRequest::setObsAgencyStatus(const std::string& value)
{
    obsAgencyStatus_ = value;
    obsAgencyStatusIsSet_ = true;
}

bool AccountConfigModifyRequest::obsAgencyStatusIsSet() const
{
    return obsAgencyStatusIsSet_;
}

void AccountConfigModifyRequest::unsetobsAgencyStatus()
{
    obsAgencyStatusIsSet_ = false;
}

std::string AccountConfigModifyRequest::getScmAgencyStatus() const
{
    return scmAgencyStatus_;
}

void AccountConfigModifyRequest::setScmAgencyStatus(const std::string& value)
{
    scmAgencyStatus_ = value;
    scmAgencyStatusIsSet_ = true;
}

bool AccountConfigModifyRequest::scmAgencyStatusIsSet() const
{
    return scmAgencyStatusIsSet_;
}

void AccountConfigModifyRequest::unsetscmAgencyStatus()
{
    scmAgencyStatusIsSet_ = false;
}

}
}
}
}
}


