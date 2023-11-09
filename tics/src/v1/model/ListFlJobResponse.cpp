

#include "huaweicloud/tics/v1/model/ListFlJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




ListFlJobResponse::ListFlJobResponse()
{
    listsIsSet_ = false;
    total_ = 0L;
    totalIsSet_ = false;
}

ListFlJobResponse::~ListFlJobResponse() = default;

void ListFlJobResponse::validate()
{
}

web::json::value ListFlJobResponse::toJson() const
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
bool ListFlJobResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("lists"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lists"));
        if(!fieldValue.is_null())
        {
            std::vector<FlJobListVo> refVal;
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


std::vector<FlJobListVo>& ListFlJobResponse::getLists()
{
    return lists_;
}

void ListFlJobResponse::setLists(const std::vector<FlJobListVo>& value)
{
    lists_ = value;
    listsIsSet_ = true;
}

bool ListFlJobResponse::listsIsSet() const
{
    return listsIsSet_;
}

void ListFlJobResponse::unsetlists()
{
    listsIsSet_ = false;
}

int64_t ListFlJobResponse::getTotal() const
{
    return total_;
}

void ListFlJobResponse::setTotal(int64_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListFlJobResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListFlJobResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


