

#include "huaweicloud/gaussdb/v3/model/CheckResourceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CheckResourceResponse::CheckResourceResponse()
{
    result_ = false;
    resultIsSet_ = false;
}

CheckResourceResponse::~CheckResourceResponse() = default;

void CheckResourceResponse::validate()
{
}

web::json::value CheckResourceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool CheckResourceResponse::fromJson(const web::json::value& val)
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


bool CheckResourceResponse::isResult() const
{
    return result_;
}

void CheckResourceResponse::setResult(bool value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool CheckResourceResponse::resultIsSet() const
{
    return resultIsSet_;
}

void CheckResourceResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


