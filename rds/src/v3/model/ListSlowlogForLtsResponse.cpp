

#include "huaweicloud/rds/v3/model/ListSlowlogForLtsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListSlowlogForLtsResponse::ListSlowlogForLtsResponse()
{
    slowLogListIsSet_ = false;
    longQueryTime_ = "";
    longQueryTimeIsSet_ = false;
}

ListSlowlogForLtsResponse::~ListSlowlogForLtsResponse() = default;

void ListSlowlogForLtsResponse::validate()
{
}

web::json::value ListSlowlogForLtsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(slowLogListIsSet_) {
        val[utility::conversions::to_string_t("slow_log_list")] = ModelBase::toJson(slowLogList_);
    }
    if(longQueryTimeIsSet_) {
        val[utility::conversions::to_string_t("long_query_time")] = ModelBase::toJson(longQueryTime_);
    }

    return val;
}

bool ListSlowlogForLtsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("slow_log_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("slow_log_list"));
        if(!fieldValue.is_null())
        {
            std::vector<MysqlSlowLogDetailsItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSlowLogList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("long_query_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("long_query_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLongQueryTime(refVal);
        }
    }
    return ok;
}

std::vector<MysqlSlowLogDetailsItem>& ListSlowlogForLtsResponse::getSlowLogList()
{
    return slowLogList_;
}

void ListSlowlogForLtsResponse::setSlowLogList(const std::vector<MysqlSlowLogDetailsItem>& value)
{
    slowLogList_ = value;
    slowLogListIsSet_ = true;
}

bool ListSlowlogForLtsResponse::slowLogListIsSet() const
{
    return slowLogListIsSet_;
}

void ListSlowlogForLtsResponse::unsetslowLogList()
{
    slowLogListIsSet_ = false;
}

std::string ListSlowlogForLtsResponse::getLongQueryTime() const
{
    return longQueryTime_;
}

void ListSlowlogForLtsResponse::setLongQueryTime(const std::string& value)
{
    longQueryTime_ = value;
    longQueryTimeIsSet_ = true;
}

bool ListSlowlogForLtsResponse::longQueryTimeIsSet() const
{
    return longQueryTimeIsSet_;
}

void ListSlowlogForLtsResponse::unsetlongQueryTime()
{
    longQueryTimeIsSet_ = false;
}

}
}
}
}
}


