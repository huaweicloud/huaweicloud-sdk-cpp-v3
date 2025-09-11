

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowMetricNamesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowMetricNamesRequest::ShowMetricNamesRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    groupName_ = "";
    groupNameIsSet_ = false;
}

ShowMetricNamesRequest::~ShowMetricNamesRequest() = default;

void ShowMetricNamesRequest::validate()
{
}

web::json::value ShowMetricNamesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(groupNameIsSet_) {
        val[utility::conversions::to_string_t("group_name")] = ModelBase::toJson(groupName_);
    }

    return val;
}
bool ShowMetricNamesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupName(refVal);
        }
    }
    return ok;
}


std::string ShowMetricNamesRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowMetricNamesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowMetricNamesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowMetricNamesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowMetricNamesRequest::getGroupName() const
{
    return groupName_;
}

void ShowMetricNamesRequest::setGroupName(const std::string& value)
{
    groupName_ = value;
    groupNameIsSet_ = true;
}

bool ShowMetricNamesRequest::groupNameIsSet() const
{
    return groupNameIsSet_;
}

void ShowMetricNamesRequest::unsetgroupName()
{
    groupNameIsSet_ = false;
}

}
}
}
}
}


