

#include "huaweicloud/codeartsdeploy/v2/model/BatchDeleteAppResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




BatchDeleteAppResponse::BatchDeleteAppResponse()
{
    resultIsSet_ = false;
    totalNum_ = 0;
    totalNumIsSet_ = false;
}

BatchDeleteAppResponse::~BatchDeleteAppResponse() = default;

void BatchDeleteAppResponse::validate()
{
}

web::json::value BatchDeleteAppResponse::toJson() const
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
bool BatchDeleteAppResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::vector<AppDeleteResult> refVal;
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


std::vector<AppDeleteResult>& BatchDeleteAppResponse::getResult()
{
    return result_;
}

void BatchDeleteAppResponse::setResult(const std::vector<AppDeleteResult>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool BatchDeleteAppResponse::resultIsSet() const
{
    return resultIsSet_;
}

void BatchDeleteAppResponse::unsetresult()
{
    resultIsSet_ = false;
}

int32_t BatchDeleteAppResponse::getTotalNum() const
{
    return totalNum_;
}

void BatchDeleteAppResponse::setTotalNum(int32_t value)
{
    totalNum_ = value;
    totalNumIsSet_ = true;
}

bool BatchDeleteAppResponse::totalNumIsSet() const
{
    return totalNumIsSet_;
}

void BatchDeleteAppResponse::unsettotalNum()
{
    totalNumIsSet_ = false;
}

}
}
}
}
}


