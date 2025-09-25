

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
    rowsInfoIsSet_ = false;
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
    if(rowsInfoIsSet_) {
        val[utility::conversions::to_string_t("rows_info")] = ModelBase::toJson(rowsInfo_);
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
    if(val.has_field(utility::conversions::to_string_t("rows_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rows_info"));
        if(!fieldValue.is_null())
        {
            std::vector<ListTransactionResponseBody_rows_info> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRowsInfo(refVal);
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

std::vector<ListTransactionResponseBody_rows_info>& ListTransactionResponse::getRowsInfo()
{
    return rowsInfo_;
}

void ListTransactionResponse::setRowsInfo(const std::vector<ListTransactionResponseBody_rows_info>& value)
{
    rowsInfo_ = value;
    rowsInfoIsSet_ = true;
}

bool ListTransactionResponse::rowsInfoIsSet() const
{
    return rowsInfoIsSet_;
}

void ListTransactionResponse::unsetrowsInfo()
{
    rowsInfoIsSet_ = false;
}

}
}
}
}
}


