

#include "huaweicloud/cfw/v1/model/ListLogsResp_data.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListLogsResp_data::ListLogsResp_data()
{
    limit_ = 0;
    limitIsSet_ = false;
    recordsIsSet_ = false;
    total_ = 0L;
    totalIsSet_ = false;
}

ListLogsResp_data::~ListLogsResp_data() = default;

void ListLogsResp_data::validate()
{
}

web::json::value ListLogsResp_data::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(recordsIsSet_) {
        val[utility::conversions::to_string_t("records")] = ModelBase::toJson(records_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ListLogsResp_data::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("records"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("records"));
        if(!fieldValue.is_null())
        {
            std::vector<LogVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecords(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


int32_t ListLogsResp_data::getLimit() const
{
    return limit_;
}

void ListLogsResp_data::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListLogsResp_data::limitIsSet() const
{
    return limitIsSet_;
}

void ListLogsResp_data::unsetlimit()
{
    limitIsSet_ = false;
}

std::vector<LogVO>& ListLogsResp_data::getRecords()
{
    return records_;
}

void ListLogsResp_data::setRecords(const std::vector<LogVO>& value)
{
    records_ = value;
    recordsIsSet_ = true;
}

bool ListLogsResp_data::recordsIsSet() const
{
    return recordsIsSet_;
}

void ListLogsResp_data::unsetrecords()
{
    recordsIsSet_ = false;
}

int64_t ListLogsResp_data::getTotal() const
{
    return total_;
}

void ListLogsResp_data::setTotal(int64_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListLogsResp_data::totalIsSet() const
{
    return totalIsSet_;
}

void ListLogsResp_data::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


