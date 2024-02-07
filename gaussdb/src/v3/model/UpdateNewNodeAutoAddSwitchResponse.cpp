

#include "huaweicloud/gaussdb/v3/model/UpdateNewNodeAutoAddSwitchResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateNewNodeAutoAddSwitchResponse::UpdateNewNodeAutoAddSwitchResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

UpdateNewNodeAutoAddSwitchResponse::~UpdateNewNodeAutoAddSwitchResponse() = default;

void UpdateNewNodeAutoAddSwitchResponse::validate()
{
}

web::json::value UpdateNewNodeAutoAddSwitchResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool UpdateNewNodeAutoAddSwitchResponse::fromJson(const web::json::value& val)
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


std::string UpdateNewNodeAutoAddSwitchResponse::getResult() const
{
    return result_;
}

void UpdateNewNodeAutoAddSwitchResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool UpdateNewNodeAutoAddSwitchResponse::resultIsSet() const
{
    return resultIsSet_;
}

void UpdateNewNodeAutoAddSwitchResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


