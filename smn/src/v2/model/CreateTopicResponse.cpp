

#include "huaweicloud/smn/v2/model/CreateTopicResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




CreateTopicResponse::CreateTopicResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    topicUrn_ = "";
    topicUrnIsSet_ = false;
}

CreateTopicResponse::~CreateTopicResponse() = default;

void CreateTopicResponse::validate()
{
}

web::json::value CreateTopicResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(topicUrnIsSet_) {
        val[utility::conversions::to_string_t("topic_urn")] = ModelBase::toJson(topicUrn_);
    }

    return val;
}
bool CreateTopicResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("topic_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("topic_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopicUrn(refVal);
        }
    }
    return ok;
}


std::string CreateTopicResponse::getRequestId() const
{
    return requestId_;
}

void CreateTopicResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool CreateTopicResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void CreateTopicResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string CreateTopicResponse::getTopicUrn() const
{
    return topicUrn_;
}

void CreateTopicResponse::setTopicUrn(const std::string& value)
{
    topicUrn_ = value;
    topicUrnIsSet_ = true;
}

bool CreateTopicResponse::topicUrnIsSet() const
{
    return topicUrnIsSet_;
}

void CreateTopicResponse::unsettopicUrn()
{
    topicUrnIsSet_ = false;
}

}
}
}
}
}


