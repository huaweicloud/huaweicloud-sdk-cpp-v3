

#include "huaweicloud/aad/v2/model/ListWafAttackEventResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




ListWafAttackEventResponse::ListWafAttackEventResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    listIsSet_ = false;
}

ListWafAttackEventResponse::~ListWafAttackEventResponse() = default;

void ListWafAttackEventResponse::validate()
{
}

web::json::value ListWafAttackEventResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(listIsSet_) {
        val[utility::conversions::to_string_t("list")] = ModelBase::toJson(list_);
    }

    return val;
}
bool ListWafAttackEventResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("list"));
        if(!fieldValue.is_null())
        {
            std::vector<ListWafAttackEventlist> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setList(refVal);
        }
    }
    return ok;
}


int32_t ListWafAttackEventResponse::getTotal() const
{
    return total_;
}

void ListWafAttackEventResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListWafAttackEventResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListWafAttackEventResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<ListWafAttackEventlist>& ListWafAttackEventResponse::getList()
{
    return list_;
}

void ListWafAttackEventResponse::setList(const std::vector<ListWafAttackEventlist>& value)
{
    list_ = value;
    listIsSet_ = true;
}

bool ListWafAttackEventResponse::listIsSet() const
{
    return listIsSet_;
}

void ListWafAttackEventResponse::unsetlist()
{
    listIsSet_ = false;
}

}
}
}
}
}


