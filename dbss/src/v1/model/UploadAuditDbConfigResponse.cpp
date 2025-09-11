

#include "huaweicloud/dbss/v1/model/UploadAuditDbConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




UploadAuditDbConfigResponse::UploadAuditDbConfigResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

UploadAuditDbConfigResponse::~UploadAuditDbConfigResponse() = default;

void UploadAuditDbConfigResponse::validate()
{
}

web::json::value UploadAuditDbConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool UploadAuditDbConfigResponse::fromJson(const web::json::value& val)
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


std::string UploadAuditDbConfigResponse::getResult() const
{
    return result_;
}

void UploadAuditDbConfigResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool UploadAuditDbConfigResponse::resultIsSet() const
{
    return resultIsSet_;
}

void UploadAuditDbConfigResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


