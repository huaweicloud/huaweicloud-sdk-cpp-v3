

#include "huaweicloud/codeartsartifact/v2/model/ShowReleaseProjectFilesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ShowReleaseProjectFilesResponse::ShowReleaseProjectFilesResponse()
{
    resultIsSet_ = false;
}

ShowReleaseProjectFilesResponse::~ShowReleaseProjectFilesResponse() = default;

void ShowReleaseProjectFilesResponse::validate()
{
}

web::json::value ShowReleaseProjectFilesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool ShowReleaseProjectFilesResponse::fromJson(const web::json::value& val)
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


StandardResponse_result ShowReleaseProjectFilesResponse::getResult() const
{
    return result_;
}

void ShowReleaseProjectFilesResponse::setResult(const StandardResponse_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowReleaseProjectFilesResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowReleaseProjectFilesResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


