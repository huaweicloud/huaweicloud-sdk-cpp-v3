

#include "huaweicloud/aad/v1/model/AlarmBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




AlarmBody::AlarmBody()
{
    topicUrn_ = "";
    topicUrnIsSet_ = false;
}

AlarmBody::~AlarmBody() = default;

void AlarmBody::validate()
{
}

web::json::value AlarmBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(topicUrnIsSet_) {
        val[utility::conversions::to_string_t("topic_urn")] = ModelBase::toJson(topicUrn_);
    }

    return val;
}
bool AlarmBody::fromJson(const web::json::value& val)
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
    return ok;
}


std::string AlarmBody::getTopicUrn() const
{
    return topicUrn_;
}

void AlarmBody::setTopicUrn(const std::string& value)
{
    topicUrn_ = value;
    topicUrnIsSet_ = true;
}

bool AlarmBody::topicUrnIsSet() const
{
    return topicUrnIsSet_;
}

void AlarmBody::unsettopicUrn()
{
    topicUrnIsSet_ = false;
}

}
}
}
}
}


