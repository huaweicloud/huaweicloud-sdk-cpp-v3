

#include "huaweicloud/dbss/v1/model/RebootAuditInstanceNewResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




RebootAuditInstanceNewResponse::RebootAuditInstanceNewResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

RebootAuditInstanceNewResponse::~RebootAuditInstanceNewResponse() = default;

void RebootAuditInstanceNewResponse::validate()
{
}

web::json::value RebootAuditInstanceNewResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool RebootAuditInstanceNewResponse::fromJson(const web::json::value& val)
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


std::string RebootAuditInstanceNewResponse::getResult() const
{
    return result_;
}

void RebootAuditInstanceNewResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RebootAuditInstanceNewResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RebootAuditInstanceNewResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


