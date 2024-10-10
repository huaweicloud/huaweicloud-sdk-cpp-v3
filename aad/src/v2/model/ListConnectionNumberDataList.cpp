

#include "huaweicloud/aad/v2/model/ListConnectionNumberDataList.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




ListConnectionNumberDataList::ListConnectionNumberDataList()
{
    time_ = 0;
    timeIsSet_ = false;
    value_ = 0;
    valueIsSet_ = false;
}

ListConnectionNumberDataList::~ListConnectionNumberDataList() = default;

void ListConnectionNumberDataList::validate()
{
}

web::json::value ListConnectionNumberDataList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool ListConnectionNumberDataList::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    return ok;
}


int32_t ListConnectionNumberDataList::getTime() const
{
    return time_;
}

void ListConnectionNumberDataList::setTime(int32_t value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool ListConnectionNumberDataList::timeIsSet() const
{
    return timeIsSet_;
}

void ListConnectionNumberDataList::unsettime()
{
    timeIsSet_ = false;
}

int32_t ListConnectionNumberDataList::getValue() const
{
    return value_;
}

void ListConnectionNumberDataList::setValue(int32_t value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ListConnectionNumberDataList::valueIsSet() const
{
    return valueIsSet_;
}

void ListConnectionNumberDataList::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


