

#include "huaweicloud/cfw/v1/model/ImportRuleAclResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ImportRuleAclResponse::ImportRuleAclResponse()
{
    dataIsSet_ = false;
}

ImportRuleAclResponse::~ImportRuleAclResponse() = default;

void ImportRuleAclResponse::validate()
{
}

web::json::value ImportRuleAclResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ImportRuleAclResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            RuleAclResponseData refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


RuleAclResponseData ImportRuleAclResponse::getData() const
{
    return data_;
}

void ImportRuleAclResponse::setData(const RuleAclResponseData& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ImportRuleAclResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ImportRuleAclResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


