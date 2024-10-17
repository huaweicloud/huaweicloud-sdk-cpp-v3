

#include "huaweicloud/dbss/v1/model/DownloadAuditAgentResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




DownloadAuditAgentResponse::DownloadAuditAgentResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

DownloadAuditAgentResponse::~DownloadAuditAgentResponse() = default;

void DownloadAuditAgentResponse::validate()
{
}

web::json::value DownloadAuditAgentResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool DownloadAuditAgentResponse::fromJson(const web::json::value& val)
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


std::string DownloadAuditAgentResponse::getResult() const
{
    return result_;
}

void DownloadAuditAgentResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool DownloadAuditAgentResponse::resultIsSet() const
{
    return resultIsSet_;
}

void DownloadAuditAgentResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


