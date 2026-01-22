

#include "huaweicloud/cfw/v1/model/ListReportHistoryResp_data.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListReportHistoryResp_data::ListReportHistoryResp_data()
{
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    recordsIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListReportHistoryResp_data::~ListReportHistoryResp_data() = default;

void ListReportHistoryResp_data::validate()
{
}

web::json::value ListReportHistoryResp_data::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(recordsIsSet_) {
        val[utility::conversions::to_string_t("records")] = ModelBase::toJson(records_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ListReportHistoryResp_data::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("records"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("records"));
        if(!fieldValue.is_null())
        {
            std::vector<ReportHistoryVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecords(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


int32_t ListReportHistoryResp_data::getLimit() const
{
    return limit_;
}

void ListReportHistoryResp_data::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListReportHistoryResp_data::limitIsSet() const
{
    return limitIsSet_;
}

void ListReportHistoryResp_data::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListReportHistoryResp_data::getOffset() const
{
    return offset_;
}

void ListReportHistoryResp_data::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListReportHistoryResp_data::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListReportHistoryResp_data::unsetoffset()
{
    offsetIsSet_ = false;
}

std::vector<ReportHistoryVO>& ListReportHistoryResp_data::getRecords()
{
    return records_;
}

void ListReportHistoryResp_data::setRecords(const std::vector<ReportHistoryVO>& value)
{
    records_ = value;
    recordsIsSet_ = true;
}

bool ListReportHistoryResp_data::recordsIsSet() const
{
    return recordsIsSet_;
}

void ListReportHistoryResp_data::unsetrecords()
{
    recordsIsSet_ = false;
}

int32_t ListReportHistoryResp_data::getTotal() const
{
    return total_;
}

void ListReportHistoryResp_data::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListReportHistoryResp_data::totalIsSet() const
{
    return totalIsSet_;
}

void ListReportHistoryResp_data::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


