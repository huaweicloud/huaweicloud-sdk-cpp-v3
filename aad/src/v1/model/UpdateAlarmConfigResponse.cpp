

#include "huaweicloud/aad/v1/model/UpdateAlarmConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




UpdateAlarmConfigResponse::UpdateAlarmConfigResponse()
{
    topicUrn_ = "";
    topicUrnIsSet_ = false;
}

UpdateAlarmConfigResponse::~UpdateAlarmConfigResponse() = default;

void UpdateAlarmConfigResponse::validate()
{
}

web::json::value UpdateAlarmConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(topicUrnIsSet_) {
        val[utility::conversions::to_string_t("topic_urn")] = ModelBase::toJson(topicUrn_);
    }

    return val;
}
bool UpdateAlarmConfigResponse::fromJson(const web::json::value& val)
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


std::string UpdateAlarmConfigResponse::getTopicUrn() const
{
    return topicUrn_;
}

void UpdateAlarmConfigResponse::setTopicUrn(const std::string& value)
{
    topicUrn_ = value;
    topicUrnIsSet_ = true;
}

bool UpdateAlarmConfigResponse::topicUrnIsSet() const
{
    return topicUrnIsSet_;
}

void UpdateAlarmConfigResponse::unsettopicUrn()
{
    topicUrnIsSet_ = false;
}

}
}
}
}
}


