

#include "huaweicloud/gaussdbforopengauss/v3/model/ListTransactionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListTransactionResponse::ListTransactionResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    rowsIsSet_ = false;
}

ListTransactionResponse::~ListTransactionResponse() = default;

void ListTransactionResponse::validate()
{
}

web::json::value ListTransactionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(rowsIsSet_) {
        val[utility::conversions::to_string_t("rows")] = ModelBase::toJson(rows_);
    }

    return val;
}
bool ListTransactionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rows"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rows"));
        if(!fieldValue.is_null())
        {
            std::vector<ListTransactionResponseBody_rows> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRows(refVal);
        }
    }
    return ok;
}


int32_t ListTransactionResponse::getTotal() const
{
    return total_;
}

void ListTransactionResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListTransactionResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListTransactionResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<ListTransactionResponseBody_rows>& ListTransactionResponse::getRows()
{
    return rows_;
}

void ListTransactionResponse::setRows(const std::vector<ListTransactionResponseBody_rows>& value)
{
    rows_ = value;
    rowsIsSet_ = true;
}

bool ListTransactionResponse::rowsIsSet() const
{
    return rowsIsSet_;
}

void ListTransactionResponse::unsetrows()
{
    rowsIsSet_ = false;
}

}
}
}
}
}


