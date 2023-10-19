

#include "huaweicloud/gaussdb/v3/model/UpdateBackupOffsitePolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateBackupOffsitePolicyResponse::UpdateBackupOffsitePolicyResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

UpdateBackupOffsitePolicyResponse::~UpdateBackupOffsitePolicyResponse() = default;

void UpdateBackupOffsitePolicyResponse::validate()
{
}

web::json::value UpdateBackupOffsitePolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool UpdateBackupOffsitePolicyResponse::fromJson(const web::json::value& val)
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


std::string UpdateBackupOffsitePolicyResponse::getResult() const
{
    return result_;
}

void UpdateBackupOffsitePolicyResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool UpdateBackupOffsitePolicyResponse::resultIsSet() const
{
    return resultIsSet_;
}

void UpdateBackupOffsitePolicyResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


