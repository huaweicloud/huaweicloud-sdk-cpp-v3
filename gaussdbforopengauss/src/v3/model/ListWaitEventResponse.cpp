

#include "huaweicloud/gaussdbforopengauss/v3/model/ListWaitEventResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListWaitEventResponse::ListWaitEventResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    rowsIsSet_ = false;
}

ListWaitEventResponse::~ListWaitEventResponse() = default;

void ListWaitEventResponse::validate()
{
}

web::json::value ListWaitEventResponse::toJson() const
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
bool ListWaitEventResponse::fromJson(const web::json::value& val)
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
            std::vector<WaitEventResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRows(refVal);
        }
    }
    return ok;
}


int32_t ListWaitEventResponse::getTotal() const
{
    return total_;
}

void ListWaitEventResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListWaitEventResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListWaitEventResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<WaitEventResult>& ListWaitEventResponse::getRows()
{
    return rows_;
}

void ListWaitEventResponse::setRows(const std::vector<WaitEventResult>& value)
{
    rows_ = value;
    rowsIsSet_ = true;
}

bool ListWaitEventResponse::rowsIsSet() const
{
    return rowsIsSet_;
}

void ListWaitEventResponse::unsetrows()
{
    rowsIsSet_ = false;
}

}
}
}
}
}


