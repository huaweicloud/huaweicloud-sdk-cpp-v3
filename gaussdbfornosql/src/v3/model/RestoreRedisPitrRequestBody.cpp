

#include "huaweicloud/gaussdbfornosql/v3/model/RestoreRedisPitrRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




RestoreRedisPitrRequestBody::RestoreRedisPitrRequestBody()
{
    restoreTime_ = "";
    restoreTimeIsSet_ = false;
}

RestoreRedisPitrRequestBody::~RestoreRedisPitrRequestBody() = default;

void RestoreRedisPitrRequestBody::validate()
{
}

web::json::value RestoreRedisPitrRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(restoreTimeIsSet_) {
        val[utility::conversions::to_string_t("restore_time")] = ModelBase::toJson(restoreTime_);
    }

    return val;
}
bool RestoreRedisPitrRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("restore_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("restore_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRestoreTime(refVal);
        }
    }
    return ok;
}


std::string RestoreRedisPitrRequestBody::getRestoreTime() const
{
    return restoreTime_;
}

void RestoreRedisPitrRequestBody::setRestoreTime(const std::string& value)
{
    restoreTime_ = value;
    restoreTimeIsSet_ = true;
}

bool RestoreRedisPitrRequestBody::restoreTimeIsSet() const
{
    return restoreTimeIsSet_;
}

void RestoreRedisPitrRequestBody::unsetrestoreTime()
{
    restoreTimeIsSet_ = false;
}

}
}
}
}
}


