

#include "huaweicloud/projectman/v4/model/ListIterationHistoriesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListIterationHistoriesResponse::ListIterationHistoriesResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    historiesIsSet_ = false;
}

ListIterationHistoriesResponse::~ListIterationHistoriesResponse() = default;

void ListIterationHistoriesResponse::validate()
{
}

web::json::value ListIterationHistoriesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(historiesIsSet_) {
        val[utility::conversions::to_string_t("histories")] = ModelBase::toJson(histories_);
    }

    return val;
}
bool ListIterationHistoriesResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("histories"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("histories"));
        if(!fieldValue.is_null())
        {
            std::vector<IterationHistory> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHistories(refVal);
        }
    }
    return ok;
}


int32_t ListIterationHistoriesResponse::getTotal() const
{
    return total_;
}

void ListIterationHistoriesResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListIterationHistoriesResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListIterationHistoriesResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<IterationHistory>& ListIterationHistoriesResponse::getHistories()
{
    return histories_;
}

void ListIterationHistoriesResponse::setHistories(const std::vector<IterationHistory>& value)
{
    histories_ = value;
    historiesIsSet_ = true;
}

bool ListIterationHistoriesResponse::historiesIsSet() const
{
    return historiesIsSet_;
}

void ListIterationHistoriesResponse::unsethistories()
{
    historiesIsSet_ = false;
}

}
}
}
}
}


