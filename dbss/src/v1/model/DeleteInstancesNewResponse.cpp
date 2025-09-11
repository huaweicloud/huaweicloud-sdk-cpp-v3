

#include "huaweicloud/dbss/v1/model/DeleteInstancesNewResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




DeleteInstancesNewResponse::DeleteInstancesNewResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

DeleteInstancesNewResponse::~DeleteInstancesNewResponse() = default;

void DeleteInstancesNewResponse::validate()
{
}

web::json::value DeleteInstancesNewResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool DeleteInstancesNewResponse::fromJson(const web::json::value& val)
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


std::string DeleteInstancesNewResponse::getResult() const
{
    return result_;
}

void DeleteInstancesNewResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool DeleteInstancesNewResponse::resultIsSet() const
{
    return resultIsSet_;
}

void DeleteInstancesNewResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


