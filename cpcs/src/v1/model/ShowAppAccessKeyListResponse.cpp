

#include "huaweicloud/cpcs/v1/model/ShowAppAccessKeyListResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ShowAppAccessKeyListResponse::ShowAppAccessKeyListResponse()
{
    resultIsSet_ = false;
}

ShowAppAccessKeyListResponse::~ShowAppAccessKeyListResponse() = default;

void ShowAppAccessKeyListResponse::validate()
{
}

web::json::value ShowAppAccessKeyListResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool ShowAppAccessKeyListResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::vector<AccessKeyInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::vector<AccessKeyInfo>& ShowAppAccessKeyListResponse::getResult()
{
    return result_;
}

void ShowAppAccessKeyListResponse::setResult(const std::vector<AccessKeyInfo>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowAppAccessKeyListResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowAppAccessKeyListResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


