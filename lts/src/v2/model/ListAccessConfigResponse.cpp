

#include "huaweicloud/lts/v2/model/ListAccessConfigResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListAccessConfigResponse::ListAccessConfigResponse()
{
    resultIsSet_ = false;
    total_ = 0L;
    totalIsSet_ = false;
}

ListAccessConfigResponse::~ListAccessConfigResponse() = default;

void ListAccessConfigResponse::validate()
{
}

web::json::value ListAccessConfigResponse::toJson() const
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

bool ListAccessConfigResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::vector<AccessConfigInfo> refVal;
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


std::vector<AccessConfigInfo>& ListAccessConfigResponse::getResult()
{
    return result_;
}

void ListAccessConfigResponse::setResult(const std::vector<AccessConfigInfo>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListAccessConfigResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListAccessConfigResponse::unsetresult()
{
    resultIsSet_ = false;
}

int64_t ListAccessConfigResponse::getTotal() const
{
    return total_;
}

void ListAccessConfigResponse::setTotal(int64_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListAccessConfigResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListAccessConfigResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


