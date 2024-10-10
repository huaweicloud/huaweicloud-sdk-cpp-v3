

#include "huaweicloud/aad/v2/model/ListDDoSAttackEventResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




ListDDoSAttackEventResponse::ListDDoSAttackEventResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    dataIsSet_ = false;
}

ListDDoSAttackEventResponse::~ListDDoSAttackEventResponse() = default;

void ListDDoSAttackEventResponse::validate()
{
}

web::json::value ListDDoSAttackEventResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListDDoSAttackEventResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<ListDDoSEventData> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


int32_t ListDDoSAttackEventResponse::getTotal() const
{
    return total_;
}

void ListDDoSAttackEventResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListDDoSAttackEventResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListDDoSAttackEventResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<ListDDoSEventData>& ListDDoSAttackEventResponse::getData()
{
    return data_;
}

void ListDDoSAttackEventResponse::setData(const std::vector<ListDDoSEventData>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListDDoSAttackEventResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListDDoSAttackEventResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


