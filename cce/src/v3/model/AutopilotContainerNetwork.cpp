

#include "huaweicloud/cce/v3/model/AutopilotContainerNetwork.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




AutopilotContainerNetwork::AutopilotContainerNetwork()
{
    mode_ = "";
    modeIsSet_ = false;
}

AutopilotContainerNetwork::~AutopilotContainerNetwork() = default;

void AutopilotContainerNetwork::validate()
{
}

web::json::value AutopilotContainerNetwork::toJson() const
{
    web::json::value val = web::json::value::object();

    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }

    return val;
}
bool AutopilotContainerNetwork::fromJson(const web::json::value& val)
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


std::string AutopilotContainerNetwork::getMode() const
{
    return mode_;
}

void AutopilotContainerNetwork::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool AutopilotContainerNetwork::modeIsSet() const
{
    return modeIsSet_;
}

void AutopilotContainerNetwork::unsetmode()
{
    modeIsSet_ = false;
}

}
}
}
}
}


