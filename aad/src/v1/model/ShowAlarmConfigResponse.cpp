

#include "huaweicloud/aad/v1/model/ShowAlarmConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




ShowAlarmConfigResponse::ShowAlarmConfigResponse()
{
    topicUrn_ = "";
    topicUrnIsSet_ = false;
}

ShowAlarmConfigResponse::~ShowAlarmConfigResponse() = default;

void ShowAlarmConfigResponse::validate()
{
}

web::json::value ShowAlarmConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(topicUrnIsSet_) {
        val[utility::conversions::to_string_t("topic_urn")] = ModelBase::toJson(topicUrn_);
    }

    return val;
}
bool ShowAlarmConfigResponse::fromJson(const web::json::value& val)
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


std::string ShowAlarmConfigResponse::getTopicUrn() const
{
    return topicUrn_;
}

void ShowAlarmConfigResponse::setTopicUrn(const std::string& value)
{
    topicUrn_ = value;
    topicUrnIsSet_ = true;
}

bool ShowAlarmConfigResponse::topicUrnIsSet() const
{
    return topicUrnIsSet_;
}

void ShowAlarmConfigResponse::unsettopicUrn()
{
    topicUrnIsSet_ = false;
}

}
}
}
}
}


