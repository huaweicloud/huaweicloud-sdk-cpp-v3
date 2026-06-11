

#include "huaweicloud/rds/v3/model/ShowAvailableBuildDrInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowAvailableBuildDrInstanceRequest::ShowAvailableBuildDrInstanceRequest()
{
    type_ = "";
    typeIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ShowAvailableBuildDrInstanceRequest::~ShowAvailableBuildDrInstanceRequest() = default;

void ShowAvailableBuildDrInstanceRequest::validate()
{
}

web::json::value ShowAvailableBuildDrInstanceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool ShowAvailableBuildDrInstanceRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    return ok;
}


std::string ShowAvailableBuildDrInstanceRequest::getType() const
{
    return type_;
}

void ShowAvailableBuildDrInstanceRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowAvailableBuildDrInstanceRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ShowAvailableBuildDrInstanceRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string ShowAvailableBuildDrInstanceRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowAvailableBuildDrInstanceRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowAvailableBuildDrInstanceRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowAvailableBuildDrInstanceRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


