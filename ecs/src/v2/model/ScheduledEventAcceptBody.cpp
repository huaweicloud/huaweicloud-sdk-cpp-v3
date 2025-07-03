

#include "huaweicloud/ecs/v2/model/ScheduledEventAcceptBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ScheduledEventAcceptBody::ScheduledEventAcceptBody()
{
    notBefore_ = "";
    notBeforeIsSet_ = false;
}

ScheduledEventAcceptBody::~ScheduledEventAcceptBody() = default;

void ScheduledEventAcceptBody::validate()
{
}

web::json::value ScheduledEventAcceptBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(notBeforeIsSet_) {
        val[utility::conversions::to_string_t("not_before")] = ModelBase::toJson(notBefore_);
    }

    return val;
}
bool ScheduledEventAcceptBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("not_before"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("not_before"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotBefore(refVal);
        }
    }
    return ok;
}


std::string ScheduledEventAcceptBody::getNotBefore() const
{
    return notBefore_;
}

void ScheduledEventAcceptBody::setNotBefore(const std::string& value)
{
    notBefore_ = value;
    notBeforeIsSet_ = true;
}

bool ScheduledEventAcceptBody::notBeforeIsSet() const
{
    return notBeforeIsSet_;
}

void ScheduledEventAcceptBody::unsetnotBefore()
{
    notBeforeIsSet_ = false;
}

}
}
}
}
}


