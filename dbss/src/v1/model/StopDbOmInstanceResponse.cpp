

#include "huaweicloud/dbss/v1/model/StopDbOmInstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




StopDbOmInstanceResponse::StopDbOmInstanceResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

StopDbOmInstanceResponse::~StopDbOmInstanceResponse() = default;

void StopDbOmInstanceResponse::validate()
{
}

web::json::value StopDbOmInstanceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool StopDbOmInstanceResponse::fromJson(const web::json::value& val)
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


std::string StopDbOmInstanceResponse::getResult() const
{
    return result_;
}

void StopDbOmInstanceResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool StopDbOmInstanceResponse::resultIsSet() const
{
    return resultIsSet_;
}

void StopDbOmInstanceResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


