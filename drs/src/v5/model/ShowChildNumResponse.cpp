

#include "huaweicloud/drs/v5/model/ShowChildNumResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowChildNumResponse::ShowChildNumResponse()
{
    count_ = 0;
    countIsSet_ = false;
}

ShowChildNumResponse::~ShowChildNumResponse() = default;

void ShowChildNumResponse::validate()
{
}

web::json::value ShowChildNumResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}
bool ShowChildNumResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    return ok;
}


int32_t ShowChildNumResponse::getCount() const
{
    return count_;
}

void ShowChildNumResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ShowChildNumResponse::countIsSet() const
{
    return countIsSet_;
}

void ShowChildNumResponse::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


