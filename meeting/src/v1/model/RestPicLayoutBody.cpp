

#include "huaweicloud/meeting/v1/model/RestPicLayoutBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




RestPicLayoutBody::RestPicLayoutBody()
{
    restPicLayoutIsSet_ = false;
}

RestPicLayoutBody::~RestPicLayoutBody() = default;

void RestPicLayoutBody::validate()
{
}

web::json::value RestPicLayoutBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(restPicLayoutIsSet_) {
        val[utility::conversions::to_string_t("restPicLayout")] = ModelBase::toJson(restPicLayout_);
    }

    return val;
}
bool RestPicLayoutBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("restPicLayout"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("restPicLayout"));
        if(!fieldValue.is_null())
        {
            RestPicLayout refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRestPicLayout(refVal);
        }
    }
    return ok;
}


RestPicLayout RestPicLayoutBody::getRestPicLayout() const
{
    return restPicLayout_;
}

void RestPicLayoutBody::setRestPicLayout(const RestPicLayout& value)
{
    restPicLayout_ = value;
    restPicLayoutIsSet_ = true;
}

bool RestPicLayoutBody::restPicLayoutIsSet() const
{
    return restPicLayoutIsSet_;
}

void RestPicLayoutBody::unsetrestPicLayout()
{
    restPicLayoutIsSet_ = false;
}

}
}
}
}
}


