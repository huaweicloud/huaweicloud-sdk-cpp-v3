

#include "huaweicloud/drs/v5/model/ShowAgencyInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowAgencyInfoRequest::ShowAgencyInfoRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    agencyName_ = "";
    agencyNameIsSet_ = false;
}

ShowAgencyInfoRequest::~ShowAgencyInfoRequest() = default;

void ShowAgencyInfoRequest::validate()
{
}

web::json::value ShowAgencyInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(agencyNameIsSet_) {
        val[utility::conversions::to_string_t("agency_name")] = ModelBase::toJson(agencyName_);
    }

    return val;
}
bool ShowAgencyInfoRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("agency_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agency_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgencyName(refVal);
        }
    }
    return ok;
}


std::string ShowAgencyInfoRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowAgencyInfoRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowAgencyInfoRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowAgencyInfoRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowAgencyInfoRequest::getAgencyName() const
{
    return agencyName_;
}

void ShowAgencyInfoRequest::setAgencyName(const std::string& value)
{
    agencyName_ = value;
    agencyNameIsSet_ = true;
}

bool ShowAgencyInfoRequest::agencyNameIsSet() const
{
    return agencyNameIsSet_;
}

void ShowAgencyInfoRequest::unsetagencyName()
{
    agencyNameIsSet_ = false;
}

}
}
}
}
}


