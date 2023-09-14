

#include "huaweicloud/smn/v2/model/DeleteMessageTemplateResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




DeleteMessageTemplateResponse::DeleteMessageTemplateResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
}

DeleteMessageTemplateResponse::~DeleteMessageTemplateResponse() = default;

void DeleteMessageTemplateResponse::validate()
{
}

web::json::value DeleteMessageTemplateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}

bool DeleteMessageTemplateResponse::fromJson(const web::json::value& val)
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

std::string DeleteMessageTemplateResponse::getRequestId() const
{
    return requestId_;
}

void DeleteMessageTemplateResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool DeleteMessageTemplateResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void DeleteMessageTemplateResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


