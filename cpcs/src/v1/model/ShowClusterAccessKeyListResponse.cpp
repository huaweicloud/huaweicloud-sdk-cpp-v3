

#include "huaweicloud/cpcs/v1/model/ShowClusterAccessKeyListResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ShowClusterAccessKeyListResponse::ShowClusterAccessKeyListResponse()
{
    resultIsSet_ = false;
}

ShowClusterAccessKeyListResponse::~ShowClusterAccessKeyListResponse() = default;

void ShowClusterAccessKeyListResponse::validate()
{
}

web::json::value ShowClusterAccessKeyListResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool ShowClusterAccessKeyListResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::vector<ShowClusterAccessKeyListResponseBody_result> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::vector<ShowClusterAccessKeyListResponseBody_result>& ShowClusterAccessKeyListResponse::getResult()
{
    return result_;
}

void ShowClusterAccessKeyListResponse::setResult(const std::vector<ShowClusterAccessKeyListResponseBody_result>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowClusterAccessKeyListResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowClusterAccessKeyListResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


