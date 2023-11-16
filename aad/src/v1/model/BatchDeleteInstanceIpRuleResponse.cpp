

#include "huaweicloud/aad/v1/model/BatchDeleteInstanceIpRuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




BatchDeleteInstanceIpRuleResponse::BatchDeleteInstanceIpRuleResponse()
{
    successNum_ = 0;
    successNumIsSet_ = false;
}

BatchDeleteInstanceIpRuleResponse::~BatchDeleteInstanceIpRuleResponse() = default;

void BatchDeleteInstanceIpRuleResponse::validate()
{
}

web::json::value BatchDeleteInstanceIpRuleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(successNumIsSet_) {
        val[utility::conversions::to_string_t("success_num")] = ModelBase::toJson(successNum_);
    }

    return val;
}
bool BatchDeleteInstanceIpRuleResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("success_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("success_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccessNum(refVal);
        }
    }
    return ok;
}


int32_t BatchDeleteInstanceIpRuleResponse::getSuccessNum() const
{
    return successNum_;
}

void BatchDeleteInstanceIpRuleResponse::setSuccessNum(int32_t value)
{
    successNum_ = value;
    successNumIsSet_ = true;
}

bool BatchDeleteInstanceIpRuleResponse::successNumIsSet() const
{
    return successNumIsSet_;
}

void BatchDeleteInstanceIpRuleResponse::unsetsuccessNum()
{
    successNumIsSet_ = false;
}

}
}
}
}
}


