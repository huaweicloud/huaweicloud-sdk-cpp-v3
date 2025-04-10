

#include "huaweicloud/gaussdbforopengauss/v3/model/ListDisasterRecoveryRecordResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListDisasterRecoveryRecordResponse::ListDisasterRecoveryRecordResponse()
{
    recordsIsSet_ = false;
}

ListDisasterRecoveryRecordResponse::~ListDisasterRecoveryRecordResponse() = default;

void ListDisasterRecoveryRecordResponse::validate()
{
}

web::json::value ListDisasterRecoveryRecordResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(recordsIsSet_) {
        val[utility::conversions::to_string_t("records")] = ModelBase::toJson(records_);
    }

    return val;
}
bool ListDisasterRecoveryRecordResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("records"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("records"));
        if(!fieldValue.is_null())
        {
            std::vector<RecordInfoResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecords(refVal);
        }
    }
    return ok;
}


std::vector<RecordInfoResponse>& ListDisasterRecoveryRecordResponse::getRecords()
{
    return records_;
}

void ListDisasterRecoveryRecordResponse::setRecords(const std::vector<RecordInfoResponse>& value)
{
    records_ = value;
    recordsIsSet_ = true;
}

bool ListDisasterRecoveryRecordResponse::recordsIsSet() const
{
    return recordsIsSet_;
}

void ListDisasterRecoveryRecordResponse::unsetrecords()
{
    recordsIsSet_ = false;
}

}
}
}
}
}


