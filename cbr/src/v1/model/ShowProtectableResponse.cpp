

#include "huaweicloud/cbr/v1/model/ShowProtectableResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ShowProtectableResponse::ShowProtectableResponse()
{
    instanceIsSet_ = false;
}

ShowProtectableResponse::~ShowProtectableResponse() = default;

void ShowProtectableResponse::validate()
{
}

web::json::value ShowProtectableResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIsSet_) {
        val[utility::conversions::to_string_t("instance")] = ModelBase::toJson(instance_);
    }

    return val;
}

bool ShowProtectableResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance"));
        if(!fieldValue.is_null())
        {
            ProtectablesResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstance(refVal);
        }
    }
    return ok;
}

ProtectablesResp ShowProtectableResponse::getInstance() const
{
    return instance_;
}

void ShowProtectableResponse::setInstance(const ProtectablesResp& value)
{
    instance_ = value;
    instanceIsSet_ = true;
}

bool ShowProtectableResponse::instanceIsSet() const
{
    return instanceIsSet_;
}

void ShowProtectableResponse::unsetinstance()
{
    instanceIsSet_ = false;
}

}
}
}
}
}


