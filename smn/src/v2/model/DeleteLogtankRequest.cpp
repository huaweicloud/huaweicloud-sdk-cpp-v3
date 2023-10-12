

#include "huaweicloud/smn/v2/model/DeleteLogtankRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




DeleteLogtankRequest::DeleteLogtankRequest()
{
    topicUrn_ = "";
    topicUrnIsSet_ = false;
    logtankId_ = "";
    logtankIdIsSet_ = false;
}

DeleteLogtankRequest::~DeleteLogtankRequest() = default;

void DeleteLogtankRequest::validate()
{
}

web::json::value DeleteLogtankRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(topicUrnIsSet_) {
        val[utility::conversions::to_string_t("topic_urn")] = ModelBase::toJson(topicUrn_);
    }
    if(logtankIdIsSet_) {
        val[utility::conversions::to_string_t("logtank_id")] = ModelBase::toJson(logtankId_);
    }

    return val;
}
bool DeleteLogtankRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("logtank_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("logtank_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogtankId(refVal);
        }
    }
    return ok;
}


std::string DeleteLogtankRequest::getTopicUrn() const
{
    return topicUrn_;
}

void DeleteLogtankRequest::setTopicUrn(const std::string& value)
{
    topicUrn_ = value;
    topicUrnIsSet_ = true;
}

bool DeleteLogtankRequest::topicUrnIsSet() const
{
    return topicUrnIsSet_;
}

void DeleteLogtankRequest::unsettopicUrn()
{
    topicUrnIsSet_ = false;
}

std::string DeleteLogtankRequest::getLogtankId() const
{
    return logtankId_;
}

void DeleteLogtankRequest::setLogtankId(const std::string& value)
{
    logtankId_ = value;
    logtankIdIsSet_ = true;
}

bool DeleteLogtankRequest::logtankIdIsSet() const
{
    return logtankIdIsSet_;
}

void DeleteLogtankRequest::unsetlogtankId()
{
    logtankIdIsSet_ = false;
}

}
}
}
}
}


