

#include "huaweicloud/smn/v2/model/DeleteTopicAttributesResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




DeleteTopicAttributesResponse::DeleteTopicAttributesResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
}

DeleteTopicAttributesResponse::~DeleteTopicAttributesResponse() = default;

void DeleteTopicAttributesResponse::validate()
{
}

web::json::value DeleteTopicAttributesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}

bool DeleteTopicAttributesResponse::fromJson(const web::json::value& val)
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

std::string DeleteTopicAttributesResponse::getRequestId() const
{
    return requestId_;
}

void DeleteTopicAttributesResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool DeleteTopicAttributesResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void DeleteTopicAttributesResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


