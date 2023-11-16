

#include "huaweicloud/codeartsbuild/v3/model/StopJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




StopJobResponse::StopJobResponse()
{
    result_ = false;
    resultIsSet_ = false;
}

StopJobResponse::~StopJobResponse() = default;

void StopJobResponse::validate()
{
}

web::json::value StopJobResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool StopJobResponse::fromJson(const web::json::value& val)
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


bool StopJobResponse::isResult() const
{
    return result_;
}

void StopJobResponse::setResult(bool value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool StopJobResponse::resultIsSet() const
{
    return resultIsSet_;
}

void StopJobResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


