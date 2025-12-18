

#include "huaweicloud/meeting/v1/model/RestSetCohostBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




RestSetCohostBody::RestSetCohostBody()
{
    isCohost_ = 0;
    isCohostIsSet_ = false;
}

RestSetCohostBody::~RestSetCohostBody() = default;

void RestSetCohostBody::validate()
{
}

web::json::value RestSetCohostBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isCohostIsSet_) {
        val[utility::conversions::to_string_t("isCohost")] = ModelBase::toJson(isCohost_);
    }

    return val;
}
bool RestSetCohostBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("isCohost"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isCohost"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsCohost(refVal);
        }
    }
    return ok;
}


int32_t RestSetCohostBody::getIsCohost() const
{
    return isCohost_;
}

void RestSetCohostBody::setIsCohost(int32_t value)
{
    isCohost_ = value;
    isCohostIsSet_ = true;
}

bool RestSetCohostBody::isCohostIsSet() const
{
    return isCohostIsSet_;
}

void RestSetCohostBody::unsetisCohost()
{
    isCohostIsSet_ = false;
}

}
}
}
}
}


