

#include "huaweicloud/gaussdbfornosql/v3/model/StopBackupRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




StopBackupRequestBody::StopBackupRequestBody()
{
    action_ = "";
    actionIsSet_ = false;
}

StopBackupRequestBody::~StopBackupRequestBody() = default;

void StopBackupRequestBody::validate()
{
}

web::json::value StopBackupRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }

    return val;
}
bool StopBackupRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    return ok;
}


std::string StopBackupRequestBody::getAction() const
{
    return action_;
}

void StopBackupRequestBody::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool StopBackupRequestBody::actionIsSet() const
{
    return actionIsSet_;
}

void StopBackupRequestBody::unsetaction()
{
    actionIsSet_ = false;
}

}
}
}
}
}


