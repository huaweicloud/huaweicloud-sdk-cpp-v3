

#include "huaweicloud/cce/v3/model/AutopilotAuthentication.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




AutopilotAuthentication::AutopilotAuthentication()
{
    mode_ = "";
    modeIsSet_ = false;
}

AutopilotAuthentication::~AutopilotAuthentication() = default;

void AutopilotAuthentication::validate()
{
}

web::json::value AutopilotAuthentication::toJson() const
{
    web::json::value val = web::json::value::object();

    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }

    return val;
}
bool AutopilotAuthentication::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
        }
    }
    return ok;
}


std::string AutopilotAuthentication::getMode() const
{
    return mode_;
}

void AutopilotAuthentication::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool AutopilotAuthentication::modeIsSet() const
{
    return modeIsSet_;
}

void AutopilotAuthentication::unsetmode()
{
    modeIsSet_ = false;
}

}
}
}
}
}


