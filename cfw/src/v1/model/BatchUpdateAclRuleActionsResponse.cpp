

#include "huaweicloud/cfw/v1/model/BatchUpdateAclRuleActionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




BatchUpdateAclRuleActionsResponse::BatchUpdateAclRuleActionsResponse()
{
    dataIsSet_ = false;
}

BatchUpdateAclRuleActionsResponse::~BatchUpdateAclRuleActionsResponse() = default;

void BatchUpdateAclRuleActionsResponse::validate()
{
}

web::json::value BatchUpdateAclRuleActionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool BatchUpdateAclRuleActionsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& BatchUpdateAclRuleActionsResponse::getData()
{
    return data_;
}

void BatchUpdateAclRuleActionsResponse::setData(const std::vector<std::string>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool BatchUpdateAclRuleActionsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void BatchUpdateAclRuleActionsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


