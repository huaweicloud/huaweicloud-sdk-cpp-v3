

#include "huaweicloud/lts/v2/model/ListHostResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListHostResponse::ListHostResponse()
{
    resultIsSet_ = false;
    total_ = 0L;
    totalIsSet_ = false;
}

ListHostResponse::~ListHostResponse() = default;

void ListHostResponse::validate()
{
}

web::json::value ListHostResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}

bool ListHostResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::vector<GetHostListInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
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


std::vector<GetHostListInfo>& ListHostResponse::getResult()
{
    return result_;
}

void ListHostResponse::setResult(const std::vector<GetHostListInfo>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListHostResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListHostResponse::unsetresult()
{
    resultIsSet_ = false;
}

int64_t ListHostResponse::getTotal() const
{
    return total_;
}

void ListHostResponse::setTotal(int64_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListHostResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListHostResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


