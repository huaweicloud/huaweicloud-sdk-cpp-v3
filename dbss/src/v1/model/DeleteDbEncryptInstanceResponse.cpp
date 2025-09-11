

#include "huaweicloud/dbss/v1/model/DeleteDbEncryptInstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




DeleteDbEncryptInstanceResponse::DeleteDbEncryptInstanceResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

DeleteDbEncryptInstanceResponse::~DeleteDbEncryptInstanceResponse() = default;

void DeleteDbEncryptInstanceResponse::validate()
{
}

web::json::value DeleteDbEncryptInstanceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool DeleteDbEncryptInstanceResponse::fromJson(const web::json::value& val)
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


std::string DeleteDbEncryptInstanceResponse::getResult() const
{
    return result_;
}

void DeleteDbEncryptInstanceResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool DeleteDbEncryptInstanceResponse::resultIsSet() const
{
    return resultIsSet_;
}

void DeleteDbEncryptInstanceResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


