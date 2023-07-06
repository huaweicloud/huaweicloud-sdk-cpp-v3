

#include "huaweicloud/eip/v3/model/CountEipAvailableResourcesResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




CountEipAvailableResourcesResponse::CountEipAvailableResourcesResponse()
{
    result_ = 0;
    resultIsSet_ = false;
}

CountEipAvailableResourcesResponse::~CountEipAvailableResourcesResponse() = default;

void CountEipAvailableResourcesResponse::validate()
{
}

web::json::value CountEipAvailableResourcesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}

bool CountEipAvailableResourcesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}

int32_t CountEipAvailableResourcesResponse::getResult() const
{
    return result_;
}

void CountEipAvailableResourcesResponse::setResult(int32_t value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool CountEipAvailableResourcesResponse::resultIsSet() const
{
    return resultIsSet_;
}

void CountEipAvailableResourcesResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


