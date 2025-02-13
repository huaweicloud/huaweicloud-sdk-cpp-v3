

#include "huaweicloud/smn/v2/model/DeleteNotifyPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




DeleteNotifyPolicyResponse::DeleteNotifyPolicyResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
}

DeleteNotifyPolicyResponse::~DeleteNotifyPolicyResponse() = default;

void DeleteNotifyPolicyResponse::validate()
{
}

web::json::value DeleteNotifyPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}
bool DeleteNotifyPolicyResponse::fromJson(const web::json::value& val)
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


std::string DeleteNotifyPolicyResponse::getRequestId() const
{
    return requestId_;
}

void DeleteNotifyPolicyResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool DeleteNotifyPolicyResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void DeleteNotifyPolicyResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


