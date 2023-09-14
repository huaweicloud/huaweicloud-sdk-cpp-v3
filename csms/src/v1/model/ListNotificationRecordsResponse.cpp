

#include "huaweicloud/csms/v1/model/ListNotificationRecordsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




ListNotificationRecordsResponse::ListNotificationRecordsResponse()
{
    recordsIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListNotificationRecordsResponse::~ListNotificationRecordsResponse() = default;

void ListNotificationRecordsResponse::validate()
{
}

web::json::value ListNotificationRecordsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(recordsIsSet_) {
        val[utility::conversions::to_string_t("records")] = ModelBase::toJson(records_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }

    return val;
}

bool ListNotificationRecordsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("records"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("records"));
        if(!fieldValue.is_null())
        {
            std::vector<Record> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecords(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_info"));
        if(!fieldValue.is_null())
        {
            PageInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageInfo(refVal);
        }
    }
    return ok;
}

std::vector<Record>& ListNotificationRecordsResponse::getRecords()
{
    return records_;
}

void ListNotificationRecordsResponse::setRecords(const std::vector<Record>& value)
{
    records_ = value;
    recordsIsSet_ = true;
}

bool ListNotificationRecordsResponse::recordsIsSet() const
{
    return recordsIsSet_;
}

void ListNotificationRecordsResponse::unsetrecords()
{
    recordsIsSet_ = false;
}

PageInfo ListNotificationRecordsResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListNotificationRecordsResponse::setPageInfo(const PageInfo& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListNotificationRecordsResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListNotificationRecordsResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


