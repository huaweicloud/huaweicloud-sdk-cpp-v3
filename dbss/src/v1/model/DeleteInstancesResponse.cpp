

#include "huaweicloud/dbss/v1/model/DeleteInstancesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




DeleteInstancesResponse::DeleteInstancesResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

DeleteInstancesResponse::~DeleteInstancesResponse() = default;

void DeleteInstancesResponse::validate()
{
}

web::json::value DeleteInstancesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool DeleteInstancesResponse::fromJson(const web::json::value& val)
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


std::string DeleteInstancesResponse::getResult() const
{
    return result_;
}

void DeleteInstancesResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool DeleteInstancesResponse::resultIsSet() const
{
    return resultIsSet_;
}

void DeleteInstancesResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


