

#include "huaweicloud/gaussdb/v3/model/DeleteScheduleTasKResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteScheduleTasKResponse::DeleteScheduleTasKResponse()
{
    result_ = false;
    resultIsSet_ = false;
}

DeleteScheduleTasKResponse::~DeleteScheduleTasKResponse() = default;

void DeleteScheduleTasKResponse::validate()
{
}

web::json::value DeleteScheduleTasKResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool DeleteScheduleTasKResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


bool DeleteScheduleTasKResponse::isResult() const
{
    return result_;
}

void DeleteScheduleTasKResponse::setResult(bool value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool DeleteScheduleTasKResponse::resultIsSet() const
{
    return resultIsSet_;
}

void DeleteScheduleTasKResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


