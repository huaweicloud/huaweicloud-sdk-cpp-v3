

#include "huaweicloud/gaussdb/v3/model/ModifyAutoExpandPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ModifyAutoExpandPolicyResponse::ModifyAutoExpandPolicyResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

ModifyAutoExpandPolicyResponse::~ModifyAutoExpandPolicyResponse() = default;

void ModifyAutoExpandPolicyResponse::validate()
{
}

web::json::value ModifyAutoExpandPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool ModifyAutoExpandPolicyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ModifyAutoExpandPolicyResponse::getResult() const
{
    return result_;
}

void ModifyAutoExpandPolicyResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ModifyAutoExpandPolicyResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ModifyAutoExpandPolicyResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


