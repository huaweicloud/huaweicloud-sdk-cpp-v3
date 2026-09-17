

#include "huaweicloud/cloudtest/v1/model/AssignCaseInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




AssignCaseInfo::AssignCaseInfo()
{
    caseUri_ = "";
    caseUriIsSet_ = false;
    isAvailable_ = false;
    isAvailableIsSet_ = false;
}

AssignCaseInfo::~AssignCaseInfo() = default;

void AssignCaseInfo::validate()
{
}

web::json::value AssignCaseInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(caseUriIsSet_) {
        val[utility::conversions::to_string_t("case_uri")] = ModelBase::toJson(caseUri_);
    }
    if(isAvailableIsSet_) {
        val[utility::conversions::to_string_t("is_available")] = ModelBase::toJson(isAvailable_);
    }

    return val;
}
bool AssignCaseInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("case_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaseUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_available"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_available"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAvailable(refVal);
        }
    }
    return ok;
}


std::string AssignCaseInfo::getCaseUri() const
{
    return caseUri_;
}

void AssignCaseInfo::setCaseUri(const std::string& value)
{
    caseUri_ = value;
    caseUriIsSet_ = true;
}

bool AssignCaseInfo::caseUriIsSet() const
{
    return caseUriIsSet_;
}

void AssignCaseInfo::unsetcaseUri()
{
    caseUriIsSet_ = false;
}

bool AssignCaseInfo::isIsAvailable() const
{
    return isAvailable_;
}

void AssignCaseInfo::setIsAvailable(bool value)
{
    isAvailable_ = value;
    isAvailableIsSet_ = true;
}

bool AssignCaseInfo::isAvailableIsSet() const
{
    return isAvailableIsSet_;
}

void AssignCaseInfo::unsetisAvailable()
{
    isAvailableIsSet_ = false;
}

}
}
}
}
}


