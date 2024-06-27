

#include "huaweicloud/gaussdb/v3/model/ShowClickHouseSlowLogDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowClickHouseSlowLogDetailResponse::ShowClickHouseSlowLogDetailResponse()
{
    slowLogListIsSet_ = false;
}

ShowClickHouseSlowLogDetailResponse::~ShowClickHouseSlowLogDetailResponse() = default;

void ShowClickHouseSlowLogDetailResponse::validate()
{
}

web::json::value ShowClickHouseSlowLogDetailResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(slowLogListIsSet_) {
        val[utility::conversions::to_string_t("slow_log_list")] = ModelBase::toJson(slowLogList_);
    }

    return val;
}
bool ShowClickHouseSlowLogDetailResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("slow_log_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("slow_log_list"));
        if(!fieldValue.is_null())
        {
            std::vector<ChSlowLogDetailResponse_slow_log_list> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSlowLogList(refVal);
        }
    }
    return ok;
}


std::vector<ChSlowLogDetailResponse_slow_log_list>& ShowClickHouseSlowLogDetailResponse::getSlowLogList()
{
    return slowLogList_;
}

void ShowClickHouseSlowLogDetailResponse::setSlowLogList(const std::vector<ChSlowLogDetailResponse_slow_log_list>& value)
{
    slowLogList_ = value;
    slowLogListIsSet_ = true;
}

bool ShowClickHouseSlowLogDetailResponse::slowLogListIsSet() const
{
    return slowLogListIsSet_;
}

void ShowClickHouseSlowLogDetailResponse::unsetslowLogList()
{
    slowLogListIsSet_ = false;
}

}
}
}
}
}


