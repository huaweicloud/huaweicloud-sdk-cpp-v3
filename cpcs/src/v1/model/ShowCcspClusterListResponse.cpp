

#include "huaweicloud/cpcs/v1/model/ShowCcspClusterListResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ShowCcspClusterListResponse::ShowCcspClusterListResponse()
{
    totalNum_ = 0;
    totalNumIsSet_ = false;
    resultIsSet_ = false;
}

ShowCcspClusterListResponse::~ShowCcspClusterListResponse() = default;

void ShowCcspClusterListResponse::validate()
{
}

web::json::value ShowCcspClusterListResponse::toJson() const
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
bool ShowCcspClusterListResponse::fromJson(const web::json::value& val)
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
            std::vector<CcspClusterInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


int32_t ShowCcspClusterListResponse::getTotalNum() const
{
    return totalNum_;
}

void ShowCcspClusterListResponse::setTotalNum(int32_t value)
{
    totalNum_ = value;
    totalNumIsSet_ = true;
}

bool ShowCcspClusterListResponse::totalNumIsSet() const
{
    return totalNumIsSet_;
}

void ShowCcspClusterListResponse::unsettotalNum()
{
    totalNumIsSet_ = false;
}

std::vector<CcspClusterInfo>& ShowCcspClusterListResponse::getResult()
{
    return result_;
}

void ShowCcspClusterListResponse::setResult(const std::vector<CcspClusterInfo>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowCcspClusterListResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowCcspClusterListResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


