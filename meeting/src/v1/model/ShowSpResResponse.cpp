

#include "huaweicloud/meeting/v1/model/ShowSpResResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowSpResResponse::ShowSpResResponse()
{
    usedAccountsCount_ = 0;
    usedAccountsCountIsSet_ = false;
}

ShowSpResResponse::~ShowSpResResponse() = default;

void ShowSpResResponse::validate()
{
}

web::json::value ShowSpResResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(usedAccountsCountIsSet_) {
        val[utility::conversions::to_string_t("usedAccountsCount")] = ModelBase::toJson(usedAccountsCount_);
    }

    return val;
}
bool ShowSpResResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("usedAccountsCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("usedAccountsCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsedAccountsCount(refVal);
        }
    }
    return ok;
}


int32_t ShowSpResResponse::getUsedAccountsCount() const
{
    return usedAccountsCount_;
}

void ShowSpResResponse::setUsedAccountsCount(int32_t value)
{
    usedAccountsCount_ = value;
    usedAccountsCountIsSet_ = true;
}

bool ShowSpResResponse::usedAccountsCountIsSet() const
{
    return usedAccountsCountIsSet_;
}

void ShowSpResResponse::unsetusedAccountsCount()
{
    usedAccountsCountIsSet_ = false;
}

}
}
}
}
}


