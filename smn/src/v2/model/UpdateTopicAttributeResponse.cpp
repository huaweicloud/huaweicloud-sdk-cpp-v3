

#include "huaweicloud/smn/v2/model/UpdateTopicAttributeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




UpdateTopicAttributeResponse::UpdateTopicAttributeResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
}

UpdateTopicAttributeResponse::~UpdateTopicAttributeResponse() = default;

void UpdateTopicAttributeResponse::validate()
{
}

web::json::value UpdateTopicAttributeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}
bool UpdateTopicAttributeResponse::fromJson(const web::json::value& val)
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


std::string UpdateTopicAttributeResponse::getRequestId() const
{
    return requestId_;
}

void UpdateTopicAttributeResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool UpdateTopicAttributeResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void UpdateTopicAttributeResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


