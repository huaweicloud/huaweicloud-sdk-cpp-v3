

#include "huaweicloud/lts/v2/model/Sort.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




Sort::Sort()
{
    orderByIsSet_ = false;
    order_ = "";
    orderIsSet_ = false;
}

Sort::~Sort() = default;

void Sort::validate()
{
}

web::json::value Sort::toJson() const
{
    web::json::value val = web::json::value::object();

    if(orderByIsSet_) {
        val[utility::conversions::to_string_t("order_by")] = ModelBase::toJson(orderBy_);
    }
    if(orderIsSet_) {
        val[utility::conversions::to_string_t("order")] = ModelBase::toJson(order_);
    }

    return val;
}
bool Sort::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("order_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order_by"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrder(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& Sort::getOrderBy()
{
    return orderBy_;
}

void Sort::setOrderBy(const std::vector<std::string>& value)
{
    orderBy_ = value;
    orderByIsSet_ = true;
}

bool Sort::orderByIsSet() const
{
    return orderByIsSet_;
}

void Sort::unsetorderBy()
{
    orderByIsSet_ = false;
}

std::string Sort::getOrder() const
{
    return order_;
}

void Sort::setOrder(const std::string& value)
{
    order_ = value;
    orderIsSet_ = true;
}

bool Sort::orderIsSet() const
{
    return orderIsSet_;
}

void Sort::unsetorder()
{
    orderIsSet_ = false;
}

}
}
}
}
}


