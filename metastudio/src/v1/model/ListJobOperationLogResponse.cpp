

#include "huaweicloud/metastudio/v1/model/ListJobOperationLogResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListJobOperationLogResponse::ListJobOperationLogResponse()
{
    count_ = 0;
    countIsSet_ = false;
    operationsIsSet_ = false;
}

ListJobOperationLogResponse::~ListJobOperationLogResponse() = default;

void ListJobOperationLogResponse::validate()
{
}

web::json::value ListJobOperationLogResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(operationsIsSet_) {
        val[utility::conversions::to_string_t("operations")] = ModelBase::toJson(operations_);
    }

    return val;
}
bool ListJobOperationLogResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operations"));
        if(!fieldValue.is_null())
        {
            std::vector<OperationLogItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperations(refVal);
        }
    }
    return ok;
}


int32_t ListJobOperationLogResponse::getCount() const
{
    return count_;
}

void ListJobOperationLogResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListJobOperationLogResponse::countIsSet() const
{
    return countIsSet_;
}

void ListJobOperationLogResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<OperationLogItem>& ListJobOperationLogResponse::getOperations()
{
    return operations_;
}

void ListJobOperationLogResponse::setOperations(const std::vector<OperationLogItem>& value)
{
    operations_ = value;
    operationsIsSet_ = true;
}

bool ListJobOperationLogResponse::operationsIsSet() const
{
    return operationsIsSet_;
}

void ListJobOperationLogResponse::unsetoperations()
{
    operationsIsSet_ = false;
}

}
}
}
}
}


