

#include "huaweicloud/gaussdb/v3/model/ShowSlowLogDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowSlowLogDetailResponse::ShowSlowLogDetailResponse()
{
    slowLogListIsSet_ = false;
}

ShowSlowLogDetailResponse::~ShowSlowLogDetailResponse() = default;

void ShowSlowLogDetailResponse::validate()
{
}

web::json::value ShowSlowLogDetailResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(slowLogListIsSet_) {
        val[utility::conversions::to_string_t("slow_log_list")] = ModelBase::toJson(slowLogList_);
    }

    return val;
}
bool ShowSlowLogDetailResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("slow_log_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("slow_log_list"));
        if(!fieldValue.is_null())
        {
            std::vector<ShowStarRocksSlowLogDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSlowLogList(refVal);
        }
    }
    return ok;
}


std::vector<ShowStarRocksSlowLogDetail>& ShowSlowLogDetailResponse::getSlowLogList()
{
    return slowLogList_;
}

void ShowSlowLogDetailResponse::setSlowLogList(const std::vector<ShowStarRocksSlowLogDetail>& value)
{
    slowLogList_ = value;
    slowLogListIsSet_ = true;
}

bool ShowSlowLogDetailResponse::slowLogListIsSet() const
{
    return slowLogListIsSet_;
}

void ShowSlowLogDetailResponse::unsetslowLogList()
{
    slowLogListIsSet_ = false;
}

}
}
}
}
}


