

#include "huaweicloud/dbss/v1/model/DeleteDbOmInstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




DeleteDbOmInstanceResponse::DeleteDbOmInstanceResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

DeleteDbOmInstanceResponse::~DeleteDbOmInstanceResponse() = default;

void DeleteDbOmInstanceResponse::validate()
{
}

web::json::value DeleteDbOmInstanceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool DeleteDbOmInstanceResponse::fromJson(const web::json::value& val)
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


std::string DeleteDbOmInstanceResponse::getResult() const
{
    return result_;
}

void DeleteDbOmInstanceResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool DeleteDbOmInstanceResponse::resultIsSet() const
{
    return resultIsSet_;
}

void DeleteDbOmInstanceResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


