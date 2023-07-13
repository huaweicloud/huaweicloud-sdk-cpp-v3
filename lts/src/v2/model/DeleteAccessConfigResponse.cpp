

#include "huaweicloud/lts/v2/model/DeleteAccessConfigResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




DeleteAccessConfigResponse::DeleteAccessConfigResponse()
{
    resultIsSet_ = false;
    total_ = 0L;
    totalIsSet_ = false;
}

DeleteAccessConfigResponse::~DeleteAccessConfigResponse() = default;

void DeleteAccessConfigResponse::validate()
{
}

web::json::value DeleteAccessConfigResponse::toJson() const
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

bool DeleteAccessConfigResponse::fromJson(const web::json::value& val)
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

std::vector<AccessConfigInfo>& DeleteAccessConfigResponse::getResult()
{
    return result_;
}

void DeleteAccessConfigResponse::setResult(const std::vector<AccessConfigInfo>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool DeleteAccessConfigResponse::resultIsSet() const
{
    return resultIsSet_;
}

void DeleteAccessConfigResponse::unsetresult()
{
    resultIsSet_ = false;
}

int64_t DeleteAccessConfigResponse::getTotal() const
{
    return total_;
}

void DeleteAccessConfigResponse::setTotal(int64_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool DeleteAccessConfigResponse::totalIsSet() const
{
    return totalIsSet_;
}

void DeleteAccessConfigResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


