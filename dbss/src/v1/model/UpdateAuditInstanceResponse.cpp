

#include "huaweicloud/dbss/v1/model/UpdateAuditInstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




UpdateAuditInstanceResponse::UpdateAuditInstanceResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

UpdateAuditInstanceResponse::~UpdateAuditInstanceResponse() = default;

void UpdateAuditInstanceResponse::validate()
{
}

web::json::value UpdateAuditInstanceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool UpdateAuditInstanceResponse::fromJson(const web::json::value& val)
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


std::string UpdateAuditInstanceResponse::getResult() const
{
    return result_;
}

void UpdateAuditInstanceResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool UpdateAuditInstanceResponse::resultIsSet() const
{
    return resultIsSet_;
}

void UpdateAuditInstanceResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


