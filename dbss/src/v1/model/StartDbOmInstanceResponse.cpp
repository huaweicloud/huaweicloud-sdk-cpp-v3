

#include "huaweicloud/dbss/v1/model/StartDbOmInstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




StartDbOmInstanceResponse::StartDbOmInstanceResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

StartDbOmInstanceResponse::~StartDbOmInstanceResponse() = default;

void StartDbOmInstanceResponse::validate()
{
}

web::json::value StartDbOmInstanceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool StartDbOmInstanceResponse::fromJson(const web::json::value& val)
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


std::string StartDbOmInstanceResponse::getResult() const
{
    return result_;
}

void StartDbOmInstanceResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool StartDbOmInstanceResponse::resultIsSet() const
{
    return resultIsSet_;
}

void StartDbOmInstanceResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


