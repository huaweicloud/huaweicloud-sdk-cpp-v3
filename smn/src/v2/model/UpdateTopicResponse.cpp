

#include "huaweicloud/smn/v2/model/UpdateTopicResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




UpdateTopicResponse::UpdateTopicResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
}

UpdateTopicResponse::~UpdateTopicResponse() = default;

void UpdateTopicResponse::validate()
{
}

web::json::value UpdateTopicResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}
bool UpdateTopicResponse::fromJson(const web::json::value& val)
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


std::string UpdateTopicResponse::getRequestId() const
{
    return requestId_;
}

void UpdateTopicResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool UpdateTopicResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void UpdateTopicResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


