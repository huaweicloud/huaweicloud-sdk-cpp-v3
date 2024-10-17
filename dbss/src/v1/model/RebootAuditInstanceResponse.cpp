

#include "huaweicloud/dbss/v1/model/RebootAuditInstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




RebootAuditInstanceResponse::RebootAuditInstanceResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

RebootAuditInstanceResponse::~RebootAuditInstanceResponse() = default;

void RebootAuditInstanceResponse::validate()
{
}

web::json::value RebootAuditInstanceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool RebootAuditInstanceResponse::fromJson(const web::json::value& val)
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


std::string RebootAuditInstanceResponse::getResult() const
{
    return result_;
}

void RebootAuditInstanceResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RebootAuditInstanceResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RebootAuditInstanceResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


