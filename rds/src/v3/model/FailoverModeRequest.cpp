

#include "huaweicloud/rds/v3/model/FailoverModeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




FailoverModeRequest::FailoverModeRequest()
{
    mode_ = "";
    modeIsSet_ = false;
}

FailoverModeRequest::~FailoverModeRequest() = default;

void FailoverModeRequest::validate()
{
}

web::json::value FailoverModeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }

    return val;
}
bool FailoverModeRequest::fromJson(const web::json::value& val)
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


std::string FailoverModeRequest::getMode() const
{
    return mode_;
}

void FailoverModeRequest::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool FailoverModeRequest::modeIsSet() const
{
    return modeIsSet_;
}

void FailoverModeRequest::unsetmode()
{
    modeIsSet_ = false;
}

}
}
}
}
}


