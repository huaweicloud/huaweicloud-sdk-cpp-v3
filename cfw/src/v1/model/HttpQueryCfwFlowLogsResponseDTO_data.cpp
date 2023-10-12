

#include "huaweicloud/cfw/v1/model/HttpQueryCfwFlowLogsResponseDTO_data.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




HttpQueryCfwFlowLogsResponseDTO_data::HttpQueryCfwFlowLogsResponseDTO_data()
{
    total_ = 0;
    totalIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    recordsIsSet_ = false;
}

HttpQueryCfwFlowLogsResponseDTO_data::~HttpQueryCfwFlowLogsResponseDTO_data() = default;

void HttpQueryCfwFlowLogsResponseDTO_data::validate()
{
}

web::json::value HttpQueryCfwFlowLogsResponseDTO_data::toJson() const
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
bool HttpQueryCfwFlowLogsResponseDTO_data::fromJson(const web::json::value& val)
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
            std::vector<HttpQueryCfwFlowLogsResponseDTO_data_records> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecords(refVal);
        }
    }
    return ok;
}


int32_t HttpQueryCfwFlowLogsResponseDTO_data::getTotal() const
{
    return total_;
}

void HttpQueryCfwFlowLogsResponseDTO_data::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool HttpQueryCfwFlowLogsResponseDTO_data::totalIsSet() const
{
    return totalIsSet_;
}

void HttpQueryCfwFlowLogsResponseDTO_data::unsettotal()
{
    totalIsSet_ = false;
}

int32_t HttpQueryCfwFlowLogsResponseDTO_data::getLimit() const
{
    return limit_;
}

void HttpQueryCfwFlowLogsResponseDTO_data::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool HttpQueryCfwFlowLogsResponseDTO_data::limitIsSet() const
{
    return limitIsSet_;
}

void HttpQueryCfwFlowLogsResponseDTO_data::unsetlimit()
{
    limitIsSet_ = false;
}

std::vector<HttpQueryCfwFlowLogsResponseDTO_data_records>& HttpQueryCfwFlowLogsResponseDTO_data::getRecords()
{
    return records_;
}

void HttpQueryCfwFlowLogsResponseDTO_data::setRecords(const std::vector<HttpQueryCfwFlowLogsResponseDTO_data_records>& value)
{
    records_ = value;
    recordsIsSet_ = true;
}

bool HttpQueryCfwFlowLogsResponseDTO_data::recordsIsSet() const
{
    return recordsIsSet_;
}

void HttpQueryCfwFlowLogsResponseDTO_data::unsetrecords()
{
    recordsIsSet_ = false;
}

}
}
}
}
}


