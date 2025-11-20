

#include "huaweicloud/aad/v2/model/UpdateForwardRuleRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




UpdateForwardRuleRequestBody::UpdateForwardRuleRequestBody()
{
    sourceIp_ = "";
    sourceIpIsSet_ = false;
}

UpdateForwardRuleRequestBody::~UpdateForwardRuleRequestBody() = default;

void UpdateForwardRuleRequestBody::validate()
{
}

web::json::value UpdateForwardRuleRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceIpIsSet_) {
        val[utility::conversions::to_string_t("source_ip")] = ModelBase::toJson(sourceIp_);
    }

    return val;
}
bool UpdateForwardRuleRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("source_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceIp(refVal);
        }
    }
    return ok;
}


std::string UpdateForwardRuleRequestBody::getSourceIp() const
{
    return sourceIp_;
}

void UpdateForwardRuleRequestBody::setSourceIp(const std::string& value)
{
    sourceIp_ = value;
    sourceIpIsSet_ = true;
}

bool UpdateForwardRuleRequestBody::sourceIpIsSet() const
{
    return sourceIpIsSet_;
}

void UpdateForwardRuleRequestBody::unsetsourceIp()
{
    sourceIpIsSet_ = false;
}

}
}
}
}
}


