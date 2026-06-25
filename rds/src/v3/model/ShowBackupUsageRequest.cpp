

#include "huaweicloud/rds/v3/model/ShowBackupUsageRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowBackupUsageRequest::ShowBackupUsageRequest()
{
    engine_ = "";
    engineIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ShowBackupUsageRequest::~ShowBackupUsageRequest() = default;

void ShowBackupUsageRequest::validate()
{
}

web::json::value ShowBackupUsageRequest::toJson() const
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
bool ShowBackupUsageRequest::fromJson(const web::json::value& val)
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


std::string ShowBackupUsageRequest::getEngine() const
{
    return engine_;
}

void ShowBackupUsageRequest::setEngine(const std::string& value)
{
    engine_ = value;
    engineIsSet_ = true;
}

bool ShowBackupUsageRequest::engineIsSet() const
{
    return engineIsSet_;
}

void ShowBackupUsageRequest::unsetengine()
{
    engineIsSet_ = false;
}

std::string ShowBackupUsageRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowBackupUsageRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowBackupUsageRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowBackupUsageRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


