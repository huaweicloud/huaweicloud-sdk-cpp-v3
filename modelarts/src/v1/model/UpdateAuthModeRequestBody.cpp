

#include "huaweicloud/modelarts/v1/model/UpdateAuthModeRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




UpdateAuthModeRequestBody::UpdateAuthModeRequestBody()
{
    mode_ = "";
    modeIsSet_ = false;
}

UpdateAuthModeRequestBody::~UpdateAuthModeRequestBody() = default;

void UpdateAuthModeRequestBody::validate()
{
}

web::json::value UpdateAuthModeRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }

    return val;
}
bool UpdateAuthModeRequestBody::fromJson(const web::json::value& val)
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


std::string UpdateAuthModeRequestBody::getMode() const
{
    return mode_;
}

void UpdateAuthModeRequestBody::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool UpdateAuthModeRequestBody::modeIsSet() const
{
    return modeIsSet_;
}

void UpdateAuthModeRequestBody::unsetmode()
{
    modeIsSet_ = false;
}

}
}
}
}
}


