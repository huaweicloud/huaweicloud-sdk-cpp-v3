

#include "huaweicloud/meeting/v1/model/RestVideoBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




RestVideoBody::RestVideoBody()
{
    status_ = 0;
    statusIsSet_ = false;
}

RestVideoBody::~RestVideoBody() = default;

void RestVideoBody::validate()
{
}

web::json::value RestVideoBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool RestVideoBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


int32_t RestVideoBody::getStatus() const
{
    return status_;
}

void RestVideoBody::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool RestVideoBody::statusIsSet() const
{
    return statusIsSet_;
}

void RestVideoBody::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


