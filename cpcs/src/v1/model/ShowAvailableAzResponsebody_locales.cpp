

#include "huaweicloud/cpcs/v1/model/ShowAvailableAzResponsebody_locales.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ShowAvailableAzResponsebody_locales::ShowAvailableAzResponsebody_locales()
{
    enUs_ = "";
    enUsIsSet_ = false;
    zhCn_ = "";
    zhCnIsSet_ = false;
}

ShowAvailableAzResponsebody_locales::~ShowAvailableAzResponsebody_locales() = default;

void ShowAvailableAzResponsebody_locales::validate()
{
}

web::json::value ShowAvailableAzResponsebody_locales::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enUsIsSet_) {
        val[utility::conversions::to_string_t("en-us")] = ModelBase::toJson(enUs_);
    }
    if(zhCnIsSet_) {
        val[utility::conversions::to_string_t("zh-cn")] = ModelBase::toJson(zhCn_);
    }

    return val;
}
bool ShowAvailableAzResponsebody_locales::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("en-us"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("en-us"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnUs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("zh-cn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("zh-cn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setZhCn(refVal);
        }
    }
    return ok;
}


std::string ShowAvailableAzResponsebody_locales::getEnUs() const
{
    return enUs_;
}

void ShowAvailableAzResponsebody_locales::setEnUs(const std::string& value)
{
    enUs_ = value;
    enUsIsSet_ = true;
}

bool ShowAvailableAzResponsebody_locales::enUsIsSet() const
{
    return enUsIsSet_;
}

void ShowAvailableAzResponsebody_locales::unsetenUs()
{
    enUsIsSet_ = false;
}

std::string ShowAvailableAzResponsebody_locales::getZhCn() const
{
    return zhCn_;
}

void ShowAvailableAzResponsebody_locales::setZhCn(const std::string& value)
{
    zhCn_ = value;
    zhCnIsSet_ = true;
}

bool ShowAvailableAzResponsebody_locales::zhCnIsSet() const
{
    return zhCnIsSet_;
}

void ShowAvailableAzResponsebody_locales::unsetzhCn()
{
    zhCnIsSet_ = false;
}

}
}
}
}
}


