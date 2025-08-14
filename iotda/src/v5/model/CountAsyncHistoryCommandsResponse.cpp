

#include "huaweicloud/iotda/v5/model/CountAsyncHistoryCommandsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CountAsyncHistoryCommandsResponse::CountAsyncHistoryCommandsResponse()
{
    count_ = 0L;
    countIsSet_ = false;
}

CountAsyncHistoryCommandsResponse::~CountAsyncHistoryCommandsResponse() = default;

void CountAsyncHistoryCommandsResponse::validate()
{
}

web::json::value CountAsyncHistoryCommandsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}
bool CountAsyncHistoryCommandsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    return ok;
}


int64_t CountAsyncHistoryCommandsResponse::getCount() const
{
    return count_;
}

void CountAsyncHistoryCommandsResponse::setCount(int64_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool CountAsyncHistoryCommandsResponse::countIsSet() const
{
    return countIsSet_;
}

void CountAsyncHistoryCommandsResponse::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


