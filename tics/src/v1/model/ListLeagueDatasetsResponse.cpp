

#include "huaweicloud/tics/v1/model/ListLeagueDatasetsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




ListLeagueDatasetsResponse::ListLeagueDatasetsResponse()
{
    listsIsSet_ = false;
    total_ = 0L;
    totalIsSet_ = false;
}

ListLeagueDatasetsResponse::~ListLeagueDatasetsResponse() = default;

void ListLeagueDatasetsResponse::validate()
{
}

web::json::value ListLeagueDatasetsResponse::toJson() const
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
bool ListLeagueDatasetsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("lists"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lists"));
        if(!fieldValue.is_null())
        {
            std::vector<PartnerDataVo> refVal;
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


std::vector<PartnerDataVo>& ListLeagueDatasetsResponse::getLists()
{
    return lists_;
}

void ListLeagueDatasetsResponse::setLists(const std::vector<PartnerDataVo>& value)
{
    lists_ = value;
    listsIsSet_ = true;
}

bool ListLeagueDatasetsResponse::listsIsSet() const
{
    return listsIsSet_;
}

void ListLeagueDatasetsResponse::unsetlists()
{
    listsIsSet_ = false;
}

int64_t ListLeagueDatasetsResponse::getTotal() const
{
    return total_;
}

void ListLeagueDatasetsResponse::setTotal(int64_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListLeagueDatasetsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListLeagueDatasetsResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


