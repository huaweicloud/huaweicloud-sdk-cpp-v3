

#include "huaweicloud/rds/v3/model/BatchDeleteInstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




BatchDeleteInstanceResponse::BatchDeleteInstanceResponse()
{
    recordsIsSet_ = false;
}

BatchDeleteInstanceResponse::~BatchDeleteInstanceResponse() = default;

void BatchDeleteInstanceResponse::validate()
{
}

web::json::value BatchDeleteInstanceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(recordsIsSet_) {
        val[utility::conversions::to_string_t("records")] = ModelBase::toJson(records_);
    }

    return val;
}
bool BatchDeleteInstanceResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("records"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("records"));
        if(!fieldValue.is_null())
        {
            std::vector<CustomerBatchDeleteInstanceRecord> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecords(refVal);
        }
    }
    return ok;
}


std::vector<CustomerBatchDeleteInstanceRecord>& BatchDeleteInstanceResponse::getRecords()
{
    return records_;
}

void BatchDeleteInstanceResponse::setRecords(const std::vector<CustomerBatchDeleteInstanceRecord>& value)
{
    records_ = value;
    recordsIsSet_ = true;
}

bool BatchDeleteInstanceResponse::recordsIsSet() const
{
    return recordsIsSet_;
}

void BatchDeleteInstanceResponse::unsetrecords()
{
    recordsIsSet_ = false;
}

}
}
}
}
}


