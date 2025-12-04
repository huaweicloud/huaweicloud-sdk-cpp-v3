

#include "huaweicloud/rds/v3/model/ShowAutoCesAlarmRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowAutoCesAlarmRequest::ShowAutoCesAlarmRequest()
{
    engine_ = "";
    engineIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ShowAutoCesAlarmRequest::~ShowAutoCesAlarmRequest() = default;

void ShowAutoCesAlarmRequest::validate()
{
}

web::json::value ShowAutoCesAlarmRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(engineIsSet_) {
        val[utility::conversions::to_string_t("engine")] = ModelBase::toJson(engine_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool ShowAutoCesAlarmRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("engine"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngine(refVal);
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


std::string ShowAutoCesAlarmRequest::getEngine() const
{
    return engine_;
}

void ShowAutoCesAlarmRequest::setEngine(const std::string& value)
{
    engine_ = value;
    engineIsSet_ = true;
}

bool ShowAutoCesAlarmRequest::engineIsSet() const
{
    return engineIsSet_;
}

void ShowAutoCesAlarmRequest::unsetengine()
{
    engineIsSet_ = false;
}

std::string ShowAutoCesAlarmRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowAutoCesAlarmRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowAutoCesAlarmRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowAutoCesAlarmRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


