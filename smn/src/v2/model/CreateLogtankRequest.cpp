

#include "huaweicloud/smn/v2/model/CreateLogtankRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




CreateLogtankRequest::CreateLogtankRequest()
{
    topicUrn_ = "";
    topicUrnIsSet_ = false;
    bodyIsSet_ = false;
}

CreateLogtankRequest::~CreateLogtankRequest() = default;

void CreateLogtankRequest::validate()
{
}

web::json::value CreateLogtankRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(topicUrnIsSet_) {
        val[utility::conversions::to_string_t("topic_urn")] = ModelBase::toJson(topicUrn_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateLogtankRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("topic_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("topic_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopicUrn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateLogtankRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string CreateLogtankRequest::getTopicUrn() const
{
    return topicUrn_;
}

void CreateLogtankRequest::setTopicUrn(const std::string& value)
{
    topicUrn_ = value;
    topicUrnIsSet_ = true;
}

bool CreateLogtankRequest::topicUrnIsSet() const
{
    return topicUrnIsSet_;
}

void CreateLogtankRequest::unsettopicUrn()
{
    topicUrnIsSet_ = false;
}

CreateLogtankRequestBody CreateLogtankRequest::getBody() const
{
    return body_;
}

void CreateLogtankRequest::setBody(const CreateLogtankRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateLogtankRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateLogtankRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


