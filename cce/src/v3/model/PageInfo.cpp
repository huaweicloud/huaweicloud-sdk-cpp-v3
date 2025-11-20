

#include "huaweicloud/cce/v3/model/PageInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




PageInfo::PageInfo()
{
    currentCount_ = 0;
    currentCountIsSet_ = false;
}

PageInfo::~PageInfo() = default;

void PageInfo::validate()
{
}

web::json::value PageInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(currentCountIsSet_) {
        val[utility::conversions::to_string_t("currentCount")] = ModelBase::toJson(currentCount_);
    }

    return val;
}
bool PageInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("currentCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("currentCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrentCount(refVal);
        }
    }
    return ok;
}


int32_t PageInfo::getCurrentCount() const
{
    return currentCount_;
}

void PageInfo::setCurrentCount(int32_t value)
{
    currentCount_ = value;
    currentCountIsSet_ = true;
}

bool PageInfo::currentCountIsSet() const
{
    return currentCountIsSet_;
}

void PageInfo::unsetcurrentCount()
{
    currentCountIsSet_ = false;
}

}
}
}
}
}


