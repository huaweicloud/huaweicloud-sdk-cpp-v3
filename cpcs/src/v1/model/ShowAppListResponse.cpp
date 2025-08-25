

#include "huaweicloud/cpcs/v1/model/ShowAppListResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ShowAppListResponse::ShowAppListResponse()
{
    totalNum_ = 0;
    totalNumIsSet_ = false;
    resultIsSet_ = false;
}

ShowAppListResponse::~ShowAppListResponse() = default;

void ShowAppListResponse::validate()
{
}

web::json::value ShowAppListResponse::toJson() const
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
bool ShowAppListResponse::fromJson(const web::json::value& val)
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
            std::vector<AppInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


int32_t ShowAppListResponse::getTotalNum() const
{
    return totalNum_;
}

void ShowAppListResponse::setTotalNum(int32_t value)
{
    totalNum_ = value;
    totalNumIsSet_ = true;
}

bool ShowAppListResponse::totalNumIsSet() const
{
    return totalNumIsSet_;
}

void ShowAppListResponse::unsettotalNum()
{
    totalNumIsSet_ = false;
}

std::vector<AppInfo>& ShowAppListResponse::getResult()
{
    return result_;
}

void ShowAppListResponse::setResult(const std::vector<AppInfo>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowAppListResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowAppListResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


