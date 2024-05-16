

#include "huaweicloud/gaussdb/v3/model/CheckStarRocksResourceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CheckStarRocksResourceResponse::CheckStarRocksResourceResponse()
{
    result_ = false;
    resultIsSet_ = false;
}

CheckStarRocksResourceResponse::~CheckStarRocksResourceResponse() = default;

void CheckStarRocksResourceResponse::validate()
{
}

web::json::value CheckStarRocksResourceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool CheckStarRocksResourceResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


bool CheckStarRocksResourceResponse::isResult() const
{
    return result_;
}

void CheckStarRocksResourceResponse::setResult(bool value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool CheckStarRocksResourceResponse::resultIsSet() const
{
    return resultIsSet_;
}

void CheckStarRocksResourceResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


