

#include "huaweicloud/lts/v2/model/ListHostGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListHostGroupResponse::ListHostGroupResponse()
{
    resultIsSet_ = false;
    total_ = 0L;
    totalIsSet_ = false;
}

ListHostGroupResponse::~ListHostGroupResponse() = default;

void ListHostGroupResponse::validate()
{
}

web::json::value ListHostGroupResponse::toJson() const
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
bool ListHostGroupResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::vector<GetHostGroupInfo> refVal;
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


std::vector<GetHostGroupInfo>& ListHostGroupResponse::getResult()
{
    return result_;
}

void ListHostGroupResponse::setResult(const std::vector<GetHostGroupInfo>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListHostGroupResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListHostGroupResponse::unsetresult()
{
    resultIsSet_ = false;
}

int64_t ListHostGroupResponse::getTotal() const
{
    return total_;
}

void ListHostGroupResponse::setTotal(int64_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListHostGroupResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListHostGroupResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


