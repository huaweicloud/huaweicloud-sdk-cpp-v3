

#include "huaweicloud/ecs/v2/model/ScheduledEventUpdateBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ScheduledEventUpdateBody::ScheduledEventUpdateBody()
{
    notBefore_ = "";
    notBeforeIsSet_ = false;
}

ScheduledEventUpdateBody::~ScheduledEventUpdateBody() = default;

void ScheduledEventUpdateBody::validate()
{
}

web::json::value ScheduledEventUpdateBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(notBeforeIsSet_) {
        val[utility::conversions::to_string_t("not_before")] = ModelBase::toJson(notBefore_);
    }

    return val;
}
bool ScheduledEventUpdateBody::fromJson(const web::json::value& val)
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


std::string ScheduledEventUpdateBody::getNotBefore() const
{
    return notBefore_;
}

void ScheduledEventUpdateBody::setNotBefore(const std::string& value)
{
    notBefore_ = value;
    notBeforeIsSet_ = true;
}

bool ScheduledEventUpdateBody::notBeforeIsSet() const
{
    return notBeforeIsSet_;
}

void ScheduledEventUpdateBody::unsetnotBefore()
{
    notBeforeIsSet_ = false;
}

}
}
}
}
}


