

#include "huaweicloud/projectman/v4/model/ListWorkitemStatusRecordsV4Response.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListWorkitemStatusRecordsV4Response::ListWorkitemStatusRecordsV4Response()
{
    recordsIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListWorkitemStatusRecordsV4Response::~ListWorkitemStatusRecordsV4Response() = default;

void ListWorkitemStatusRecordsV4Response::validate()
{
}

web::json::value ListWorkitemStatusRecordsV4Response::toJson() const
{
    web::json::value val = web::json::value::object();

    if(recordsIsSet_) {
        val[utility::conversions::to_string_t("records")] = ModelBase::toJson(records_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ListWorkitemStatusRecordsV4Response::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("records"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("records"));
        if(!fieldValue.is_null())
        {
            std::vector<WorkitemStatusRecords> refVal;
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


std::vector<WorkitemStatusRecords>& ListWorkitemStatusRecordsV4Response::getRecords()
{
    return records_;
}

void ListWorkitemStatusRecordsV4Response::setRecords(const std::vector<WorkitemStatusRecords>& value)
{
    records_ = value;
    recordsIsSet_ = true;
}

bool ListWorkitemStatusRecordsV4Response::recordsIsSet() const
{
    return recordsIsSet_;
}

void ListWorkitemStatusRecordsV4Response::unsetrecords()
{
    recordsIsSet_ = false;
}

int32_t ListWorkitemStatusRecordsV4Response::getTotal() const
{
    return total_;
}

void ListWorkitemStatusRecordsV4Response::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListWorkitemStatusRecordsV4Response::totalIsSet() const
{
    return totalIsSet_;
}

void ListWorkitemStatusRecordsV4Response::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


