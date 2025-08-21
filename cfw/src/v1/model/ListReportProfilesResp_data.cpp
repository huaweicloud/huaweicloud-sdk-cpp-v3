

#include "huaweicloud/cfw/v1/model/ListReportProfilesResp_data.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListReportProfilesResp_data::ListReportProfilesResp_data()
{
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    recordsIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListReportProfilesResp_data::~ListReportProfilesResp_data() = default;

void ListReportProfilesResp_data::validate()
{
}

web::json::value ListReportProfilesResp_data::toJson() const
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
bool ListReportProfilesResp_data::fromJson(const web::json::value& val)
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
            std::vector<ReportProfileVO> refVal;
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


int32_t ListReportProfilesResp_data::getLimit() const
{
    return limit_;
}

void ListReportProfilesResp_data::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListReportProfilesResp_data::limitIsSet() const
{
    return limitIsSet_;
}

void ListReportProfilesResp_data::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListReportProfilesResp_data::getOffset() const
{
    return offset_;
}

void ListReportProfilesResp_data::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListReportProfilesResp_data::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListReportProfilesResp_data::unsetoffset()
{
    offsetIsSet_ = false;
}

std::vector<ReportProfileVO>& ListReportProfilesResp_data::getRecords()
{
    return records_;
}

void ListReportProfilesResp_data::setRecords(const std::vector<ReportProfileVO>& value)
{
    records_ = value;
    recordsIsSet_ = true;
}

bool ListReportProfilesResp_data::recordsIsSet() const
{
    return recordsIsSet_;
}

void ListReportProfilesResp_data::unsetrecords()
{
    recordsIsSet_ = false;
}

int32_t ListReportProfilesResp_data::getTotal() const
{
    return total_;
}

void ListReportProfilesResp_data::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListReportProfilesResp_data::totalIsSet() const
{
    return totalIsSet_;
}

void ListReportProfilesResp_data::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


