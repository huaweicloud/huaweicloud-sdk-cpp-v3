

#include "huaweicloud/gaussdb/v3/model/UpdateProxyNameResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateProxyNameResponse::UpdateProxyNameResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

UpdateProxyNameResponse::~UpdateProxyNameResponse() = default;

void UpdateProxyNameResponse::validate()
{
}

web::json::value UpdateProxyNameResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool UpdateProxyNameResponse::fromJson(const web::json::value& val)
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


std::string UpdateProxyNameResponse::getResult() const
{
    return result_;
}

void UpdateProxyNameResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool UpdateProxyNameResponse::resultIsSet() const
{
    return resultIsSet_;
}

void UpdateProxyNameResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


