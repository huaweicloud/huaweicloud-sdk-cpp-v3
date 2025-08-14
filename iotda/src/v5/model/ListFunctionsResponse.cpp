

#include "huaweicloud/iotda/v5/model/ListFunctionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListFunctionsResponse::ListFunctionsResponse()
{
    productFunctionsIsSet_ = false;
    count_ = 0L;
    countIsSet_ = false;
}

ListFunctionsResponse::~ListFunctionsResponse() = default;

void ListFunctionsResponse::validate()
{
}

web::json::value ListFunctionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(productFunctionsIsSet_) {
        val[utility::conversions::to_string_t("product_functions")] = ModelBase::toJson(productFunctions_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}
bool ListFunctionsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("product_functions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("product_functions"));
        if(!fieldValue.is_null())
        {
            std::vector<FunctionDTO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProductFunctions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    return ok;
}


std::vector<FunctionDTO>& ListFunctionsResponse::getProductFunctions()
{
    return productFunctions_;
}

void ListFunctionsResponse::setProductFunctions(const std::vector<FunctionDTO>& value)
{
    productFunctions_ = value;
    productFunctionsIsSet_ = true;
}

bool ListFunctionsResponse::productFunctionsIsSet() const
{
    return productFunctionsIsSet_;
}

void ListFunctionsResponse::unsetproductFunctions()
{
    productFunctionsIsSet_ = false;
}

int64_t ListFunctionsResponse::getCount() const
{
    return count_;
}

void ListFunctionsResponse::setCount(int64_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListFunctionsResponse::countIsSet() const
{
    return countIsSet_;
}

void ListFunctionsResponse::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


