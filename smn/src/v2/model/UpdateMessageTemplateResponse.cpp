

#include "huaweicloud/smn/v2/model/UpdateMessageTemplateResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




UpdateMessageTemplateResponse::UpdateMessageTemplateResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
}

UpdateMessageTemplateResponse::~UpdateMessageTemplateResponse() = default;

void UpdateMessageTemplateResponse::validate()
{
}

web::json::value UpdateMessageTemplateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}

bool UpdateMessageTemplateResponse::fromJson(const web::json::value& val)
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

std::string UpdateMessageTemplateResponse::getRequestId() const
{
    return requestId_;
}

void UpdateMessageTemplateResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool UpdateMessageTemplateResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void UpdateMessageTemplateResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


