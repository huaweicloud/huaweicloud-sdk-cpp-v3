

#include "huaweicloud/smn/v2/model/DeleteTopicResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




DeleteTopicResponse::DeleteTopicResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
}

DeleteTopicResponse::~DeleteTopicResponse() = default;

void DeleteTopicResponse::validate()
{
}

web::json::value DeleteTopicResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}

bool DeleteTopicResponse::fromJson(const web::json::value& val)
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

std::string DeleteTopicResponse::getRequestId() const
{
    return requestId_;
}

void DeleteTopicResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool DeleteTopicResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void DeleteTopicResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


