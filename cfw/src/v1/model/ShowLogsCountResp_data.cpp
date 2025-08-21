

#include "huaweicloud/cfw/v1/model/ShowLogsCountResp_data.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ShowLogsCountResp_data::ShowLogsCountResp_data()
{
    count_ = 0L;
    countIsSet_ = false;
}

ShowLogsCountResp_data::~ShowLogsCountResp_data() = default;

void ShowLogsCountResp_data::validate()
{
}

web::json::value ShowLogsCountResp_data::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}
bool ShowLogsCountResp_data::fromJson(const web::json::value& val)
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


int64_t ShowLogsCountResp_data::getCount() const
{
    return count_;
}

void ShowLogsCountResp_data::setCount(int64_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ShowLogsCountResp_data::countIsSet() const
{
    return countIsSet_;
}

void ShowLogsCountResp_data::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


