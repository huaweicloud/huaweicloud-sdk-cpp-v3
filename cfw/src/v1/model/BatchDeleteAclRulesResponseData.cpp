

#include "huaweicloud/cfw/v1/model/BatchDeleteAclRulesResponseData.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




BatchDeleteAclRulesResponseData::BatchDeleteAclRulesResponseData()
{
    responseDatasIsSet_ = false;
}

BatchDeleteAclRulesResponseData::~BatchDeleteAclRulesResponseData() = default;

void BatchDeleteAclRulesResponseData::validate()
{
}

web::json::value BatchDeleteAclRulesResponseData::toJson() const
{
    web::json::value val = web::json::value::object();

    if(responseDatasIsSet_) {
        val[utility::conversions::to_string_t("responseDatas")] = ModelBase::toJson(responseDatas_);
    }

    return val;
}
bool BatchDeleteAclRulesResponseData::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("responseDatas"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("responseDatas"));
        if(!fieldValue.is_null())
        {
            std::vector<BatchDeleteRuleInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResponseDatas(refVal);
        }
    }
    return ok;
}


std::vector<BatchDeleteRuleInfo>& BatchDeleteAclRulesResponseData::getResponseDatas()
{
    return responseDatas_;
}

void BatchDeleteAclRulesResponseData::setResponseDatas(const std::vector<BatchDeleteRuleInfo>& value)
{
    responseDatas_ = value;
    responseDatasIsSet_ = true;
}

bool BatchDeleteAclRulesResponseData::responseDatasIsSet() const
{
    return responseDatasIsSet_;
}

void BatchDeleteAclRulesResponseData::unsetresponseDatas()
{
    responseDatasIsSet_ = false;
}

}
}
}
}
}


