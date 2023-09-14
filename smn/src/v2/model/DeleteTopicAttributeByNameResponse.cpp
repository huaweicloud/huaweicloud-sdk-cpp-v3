

#include "huaweicloud/smn/v2/model/DeleteTopicAttributeByNameResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




DeleteTopicAttributeByNameResponse::DeleteTopicAttributeByNameResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
}

DeleteTopicAttributeByNameResponse::~DeleteTopicAttributeByNameResponse() = default;

void DeleteTopicAttributeByNameResponse::validate()
{
}

web::json::value DeleteTopicAttributeByNameResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}

bool DeleteTopicAttributeByNameResponse::fromJson(const web::json::value& val)
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

std::string DeleteTopicAttributeByNameResponse::getRequestId() const
{
    return requestId_;
}

void DeleteTopicAttributeByNameResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool DeleteTopicAttributeByNameResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void DeleteTopicAttributeByNameResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


