

#include "huaweicloud/gaussdbforopengauss/v3/model/ListAgencyInfosRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListAgencyInfosRequest::ListAgencyInfosRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    agencyName_ = "";
    agencyNameIsSet_ = false;
}

ListAgencyInfosRequest::~ListAgencyInfosRequest() = default;

void ListAgencyInfosRequest::validate()
{
}

web::json::value ListAgencyInfosRequest::toJson() const
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
bool ListAgencyInfosRequest::fromJson(const web::json::value& val)
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


std::string ListAgencyInfosRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListAgencyInfosRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListAgencyInfosRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListAgencyInfosRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListAgencyInfosRequest::getAgencyName() const
{
    return agencyName_;
}

void ListAgencyInfosRequest::setAgencyName(const std::string& value)
{
    agencyName_ = value;
    agencyNameIsSet_ = true;
}

bool ListAgencyInfosRequest::agencyNameIsSet() const
{
    return agencyNameIsSet_;
}

void ListAgencyInfosRequest::unsetagencyName()
{
    agencyNameIsSet_ = false;
}

}
}
}
}
}


