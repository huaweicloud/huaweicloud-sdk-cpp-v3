

#include "huaweicloud/codeartsbuild/v3/model/ShowJobStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowJobStatusResponse::ShowJobStatusResponse()
{
    result_ = false;
    resultIsSet_ = false;
}

ShowJobStatusResponse::~ShowJobStatusResponse() = default;

void ShowJobStatusResponse::validate()
{
}

web::json::value ShowJobStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool ShowJobStatusResponse::fromJson(const web::json::value& val)
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


bool ShowJobStatusResponse::isResult() const
{
    return result_;
}

void ShowJobStatusResponse::setResult(bool value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowJobStatusResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowJobStatusResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


