

#include "huaweicloud/tics/v1/model/ListPartnersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




ListPartnersResponse::ListPartnersResponse()
{
    listsIsSet_ = false;
    total_ = 0L;
    totalIsSet_ = false;
}

ListPartnersResponse::~ListPartnersResponse() = default;

void ListPartnersResponse::validate()
{
}

web::json::value ListPartnersResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(listsIsSet_) {
        val[utility::conversions::to_string_t("lists")] = ModelBase::toJson(lists_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ListPartnersResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("lists"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lists"));
        if(!fieldValue.is_null())
        {
            std::vector<TicsLeaguePartnerVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLists(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


std::vector<TicsLeaguePartnerVo>& ListPartnersResponse::getLists()
{
    return lists_;
}

void ListPartnersResponse::setLists(const std::vector<TicsLeaguePartnerVo>& value)
{
    lists_ = value;
    listsIsSet_ = true;
}

bool ListPartnersResponse::listsIsSet() const
{
    return listsIsSet_;
}

void ListPartnersResponse::unsetlists()
{
    listsIsSet_ = false;
}

int64_t ListPartnersResponse::getTotal() const
{
    return total_;
}

void ListPartnersResponse::setTotal(int64_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListPartnersResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListPartnersResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


