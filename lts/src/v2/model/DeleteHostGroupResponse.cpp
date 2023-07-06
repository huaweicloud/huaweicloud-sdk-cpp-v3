

#include "huaweicloud/lts/v2/model/DeleteHostGroupResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




DeleteHostGroupResponse::DeleteHostGroupResponse()
{
    resultIsSet_ = false;
    total_ = 0L;
    totalIsSet_ = false;
}

DeleteHostGroupResponse::~DeleteHostGroupResponse() = default;

void DeleteHostGroupResponse::validate()
{
}

web::json::value DeleteHostGroupResponse::toJson() const
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

bool DeleteHostGroupResponse::fromJson(const web::json::value& val)
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

std::vector<GetHostGroupInfo>& DeleteHostGroupResponse::getResult()
{
    return result_;
}

void DeleteHostGroupResponse::setResult(const std::vector<GetHostGroupInfo>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool DeleteHostGroupResponse::resultIsSet() const
{
    return resultIsSet_;
}

void DeleteHostGroupResponse::unsetresult()
{
    resultIsSet_ = false;
}

int64_t DeleteHostGroupResponse::getTotal() const
{
    return total_;
}

void DeleteHostGroupResponse::setTotal(int64_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool DeleteHostGroupResponse::totalIsSet() const
{
    return totalIsSet_;
}

void DeleteHostGroupResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


