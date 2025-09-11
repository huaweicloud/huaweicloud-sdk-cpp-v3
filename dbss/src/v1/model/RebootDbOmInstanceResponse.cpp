

#include "huaweicloud/dbss/v1/model/RebootDbOmInstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




RebootDbOmInstanceResponse::RebootDbOmInstanceResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

RebootDbOmInstanceResponse::~RebootDbOmInstanceResponse() = default;

void RebootDbOmInstanceResponse::validate()
{
}

web::json::value RebootDbOmInstanceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool RebootDbOmInstanceResponse::fromJson(const web::json::value& val)
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


std::string RebootDbOmInstanceResponse::getResult() const
{
    return result_;
}

void RebootDbOmInstanceResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RebootDbOmInstanceResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RebootDbOmInstanceResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


