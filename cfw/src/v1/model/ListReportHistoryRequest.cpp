

#include "huaweicloud/cfw/v1/model/ListReportHistoryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListReportHistoryRequest::ListReportHistoryRequest()
{
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    reportProfileId_ = "";
    reportProfileIdIsSet_ = false;
}

ListReportHistoryRequest::~ListReportHistoryRequest() = default;

void ListReportHistoryRequest::validate()
{
}

web::json::value ListReportHistoryRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(reportProfileIdIsSet_) {
        val[utility::conversions::to_string_t("report_profile_id")] = ModelBase::toJson(reportProfileId_);
    }

    return val;
}
bool ListReportHistoryRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fw_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fw_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFwInstanceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("report_profile_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("report_profile_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReportProfileId(refVal);
        }
    }
    return ok;
}


std::string ListReportHistoryRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ListReportHistoryRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ListReportHistoryRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ListReportHistoryRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

int32_t ListReportHistoryRequest::getLimit() const
{
    return limit_;
}

void ListReportHistoryRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListReportHistoryRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListReportHistoryRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListReportHistoryRequest::getOffset() const
{
    return offset_;
}

void ListReportHistoryRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListReportHistoryRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListReportHistoryRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListReportHistoryRequest::getReportProfileId() const
{
    return reportProfileId_;
}

void ListReportHistoryRequest::setReportProfileId(const std::string& value)
{
    reportProfileId_ = value;
    reportProfileIdIsSet_ = true;
}

bool ListReportHistoryRequest::reportProfileIdIsSet() const
{
    return reportProfileIdIsSet_;
}

void ListReportHistoryRequest::unsetreportProfileId()
{
    reportProfileIdIsSet_ = false;
}

}
}
}
}
}


