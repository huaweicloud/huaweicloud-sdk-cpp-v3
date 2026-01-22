

#include "huaweicloud/cfw/v1/model/ExportRuleAclResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ExportRuleAclResponse::ExportRuleAclResponse()
{
    dataIsSet_ = false;
}

ExportRuleAclResponse::~ExportRuleAclResponse() = default;

void ExportRuleAclResponse::validate()
{
}

web::json::value ExportRuleAclResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ExportRuleAclResponse::fromJson(const web::json::value& val)
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


RuleAclResponseData ExportRuleAclResponse::getData() const
{
    return data_;
}

void ExportRuleAclResponse::setData(const RuleAclResponseData& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ExportRuleAclResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ExportRuleAclResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


