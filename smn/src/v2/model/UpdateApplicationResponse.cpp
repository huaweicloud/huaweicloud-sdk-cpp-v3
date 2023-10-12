

#include "huaweicloud/smn/v2/model/UpdateApplicationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




UpdateApplicationResponse::UpdateApplicationResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
}

UpdateApplicationResponse::~UpdateApplicationResponse() = default;

void UpdateApplicationResponse::validate()
{
}

web::json::value UpdateApplicationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}
bool UpdateApplicationResponse::fromJson(const web::json::value& val)
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


std::string UpdateApplicationResponse::getRequestId() const
{
    return requestId_;
}

void UpdateApplicationResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool UpdateApplicationResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void UpdateApplicationResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


