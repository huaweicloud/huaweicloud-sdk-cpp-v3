

#include "huaweicloud/metastudio/v1/model/NotifyEventEnum.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {



NotifyEventEnum::NotifyEventEnum()
{
}

NotifyEventEnum::~NotifyEventEnum()
{
}

void NotifyEventEnum::validate()
{
}

web::json::value NotifyEventEnum::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (value_ == eNotifyEventEnum::NotifyEventEnum_AUTO_EXIT) val = web::json::value::string(U("AUTO_EXIT"));

    return val;
}

bool NotifyEventEnum::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t("AUTO_EXIT")) value_ = eNotifyEventEnum::NotifyEventEnum_AUTO_EXIT;
    return true;
}

NotifyEventEnum::eNotifyEventEnum NotifyEventEnum::getValue() const
{
   return value_;
}

void NotifyEventEnum::setValue(NotifyEventEnum::eNotifyEventEnum const value)
{
   value_ = value;
}


}
}
}
}
}


