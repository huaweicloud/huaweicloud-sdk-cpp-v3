

#include "huaweicloud/cpcs/v1/model/ShowAppAccessKeyListResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ShowAppAccessKeyListResponse::ShowAppAccessKeyListResponse()
{
    resultIsSet_ = false;
    totalNum_ = 0;
    totalNumIsSet_ = false;
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
    if(totalNumIsSet_) {
        val[utility::conversions::to_string_t("total_num")] = ModelBase::toJson(totalNum_);
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
    if(val.has_field(utility::conversions::to_string_t("total_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalNum(refVal);
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

int32_t ShowAppAccessKeyListResponse::getTotalNum() const
{
    return totalNum_;
}

void ShowAppAccessKeyListResponse::setTotalNum(int32_t value)
{
    totalNum_ = value;
    totalNumIsSet_ = true;
}

bool ShowAppAccessKeyListResponse::totalNumIsSet() const
{
    return totalNumIsSet_;
}

void ShowAppAccessKeyListResponse::unsettotalNum()
{
    totalNumIsSet_ = false;
}

}
}
}
}
}


