

#include "huaweicloud/smn/v2/model/UpdateNotifyPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




UpdateNotifyPolicyResponse::UpdateNotifyPolicyResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
}

UpdateNotifyPolicyResponse::~UpdateNotifyPolicyResponse() = default;

void UpdateNotifyPolicyResponse::validate()
{
}

web::json::value UpdateNotifyPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}
bool UpdateNotifyPolicyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    return ok;
}


std::string UpdateNotifyPolicyResponse::getRequestId() const
{
    return requestId_;
}

void UpdateNotifyPolicyResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool UpdateNotifyPolicyResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void UpdateNotifyPolicyResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


