

#include "huaweicloud/cfw/v1/model/HttpQueryCfwAttackLogsResponseDTO_data.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




HttpQueryCfwAttackLogsResponseDTO_data::HttpQueryCfwAttackLogsResponseDTO_data()
{
    total_ = 0;
    totalIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    recordsIsSet_ = false;
}

HttpQueryCfwAttackLogsResponseDTO_data::~HttpQueryCfwAttackLogsResponseDTO_data() = default;

void HttpQueryCfwAttackLogsResponseDTO_data::validate()
{
}

web::json::value HttpQueryCfwAttackLogsResponseDTO_data::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(recordsIsSet_) {
        val[utility::conversions::to_string_t("records")] = ModelBase::toJson(records_);
    }

    return val;
}

bool HttpQueryCfwAttackLogsResponseDTO_data::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
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
            std::vector<HttpQueryCfwAttackLogsResponseDTO_data_records> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecords(refVal);
        }
    }
    return ok;
}


int32_t HttpQueryCfwAttackLogsResponseDTO_data::getTotal() const
{
    return total_;
}

void HttpQueryCfwAttackLogsResponseDTO_data::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool HttpQueryCfwAttackLogsResponseDTO_data::totalIsSet() const
{
    return totalIsSet_;
}

void HttpQueryCfwAttackLogsResponseDTO_data::unsettotal()
{
    totalIsSet_ = false;
}

int32_t HttpQueryCfwAttackLogsResponseDTO_data::getLimit() const
{
    return limit_;
}

void HttpQueryCfwAttackLogsResponseDTO_data::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool HttpQueryCfwAttackLogsResponseDTO_data::limitIsSet() const
{
    return limitIsSet_;
}

void HttpQueryCfwAttackLogsResponseDTO_data::unsetlimit()
{
    limitIsSet_ = false;
}

std::vector<HttpQueryCfwAttackLogsResponseDTO_data_records>& HttpQueryCfwAttackLogsResponseDTO_data::getRecords()
{
    return records_;
}

void HttpQueryCfwAttackLogsResponseDTO_data::setRecords(const std::vector<HttpQueryCfwAttackLogsResponseDTO_data_records>& value)
{
    records_ = value;
    recordsIsSet_ = true;
}

bool HttpQueryCfwAttackLogsResponseDTO_data::recordsIsSet() const
{
    return recordsIsSet_;
}

void HttpQueryCfwAttackLogsResponseDTO_data::unsetrecords()
{
    recordsIsSet_ = false;
}

}
}
}
}
}


