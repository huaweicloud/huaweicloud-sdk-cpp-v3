

#include "huaweicloud/codeartsartifact/v2/model/ShowProjectReleaseFilesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ShowProjectReleaseFilesResponse::ShowProjectReleaseFilesResponse()
{
    resultIsSet_ = false;
}

ShowProjectReleaseFilesResponse::~ShowProjectReleaseFilesResponse() = default;

void ShowProjectReleaseFilesResponse::validate()
{
}

web::json::value ShowProjectReleaseFilesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool ShowProjectReleaseFilesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            StandardResponse_result refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


StandardResponse_result ShowProjectReleaseFilesResponse::getResult() const
{
    return result_;
}

void ShowProjectReleaseFilesResponse::setResult(const StandardResponse_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowProjectReleaseFilesResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowProjectReleaseFilesResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


