

#include "huaweicloud/dbss/v1/model/UpdateAuditRiskBucketPathResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




UpdateAuditRiskBucketPathResponse::UpdateAuditRiskBucketPathResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

UpdateAuditRiskBucketPathResponse::~UpdateAuditRiskBucketPathResponse() = default;

void UpdateAuditRiskBucketPathResponse::validate()
{
}

web::json::value UpdateAuditRiskBucketPathResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool UpdateAuditRiskBucketPathResponse::fromJson(const web::json::value& val)
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


std::string UpdateAuditRiskBucketPathResponse::getResult() const
{
    return result_;
}

void UpdateAuditRiskBucketPathResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool UpdateAuditRiskBucketPathResponse::resultIsSet() const
{
    return resultIsSet_;
}

void UpdateAuditRiskBucketPathResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


