

#include "huaweicloud/cts/v3/model/ListOperationsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {




ListOperationsResponse::ListOperationsResponse()
{
    operationsIsSet_ = false;
}

ListOperationsResponse::~ListOperationsResponse() = default;

void ListOperationsResponse::validate()
{
}

web::json::value ListOperationsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(operationsIsSet_) {
        val[utility::conversions::to_string_t("operations")] = ModelBase::toJson(operations_);
    }

    return val;
}
bool ListOperationsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("operations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operations"));
        if(!fieldValue.is_null())
        {
            std::vector<ListOperation> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperations(refVal);
        }
    }
    return ok;
}


std::vector<ListOperation>& ListOperationsResponse::getOperations()
{
    return operations_;
}

void ListOperationsResponse::setOperations(const std::vector<ListOperation>& value)
{
    operations_ = value;
    operationsIsSet_ = true;
}

bool ListOperationsResponse::operationsIsSet() const
{
    return operationsIsSet_;
}

void ListOperationsResponse::unsetoperations()
{
    operationsIsSet_ = false;
}

}
}
}
}
}


