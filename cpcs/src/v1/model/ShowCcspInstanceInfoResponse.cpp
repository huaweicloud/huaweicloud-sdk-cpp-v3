

#include "huaweicloud/cpcs/v1/model/ShowCcspInstanceInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ShowCcspInstanceInfoResponse::ShowCcspInstanceInfoResponse()
{
    totalNum_ = 0;
    totalNumIsSet_ = false;
    resultIsSet_ = false;
}

ShowCcspInstanceInfoResponse::~ShowCcspInstanceInfoResponse() = default;

void ShowCcspInstanceInfoResponse::validate()
{
}

web::json::value ShowCcspInstanceInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalNumIsSet_) {
        val[utility::conversions::to_string_t("total_num")] = ModelBase::toJson(totalNum_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool ShowCcspInstanceInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::vector<CcspInstanceInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


int32_t ShowCcspInstanceInfoResponse::getTotalNum() const
{
    return totalNum_;
}

void ShowCcspInstanceInfoResponse::setTotalNum(int32_t value)
{
    totalNum_ = value;
    totalNumIsSet_ = true;
}

bool ShowCcspInstanceInfoResponse::totalNumIsSet() const
{
    return totalNumIsSet_;
}

void ShowCcspInstanceInfoResponse::unsettotalNum()
{
    totalNumIsSet_ = false;
}

std::vector<CcspInstanceInfo>& ShowCcspInstanceInfoResponse::getResult()
{
    return result_;
}

void ShowCcspInstanceInfoResponse::setResult(const std::vector<CcspInstanceInfo>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowCcspInstanceInfoResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowCcspInstanceInfoResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


