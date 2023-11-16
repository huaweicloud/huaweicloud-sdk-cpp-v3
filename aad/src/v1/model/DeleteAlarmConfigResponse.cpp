

#include "huaweicloud/aad/v1/model/DeleteAlarmConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




DeleteAlarmConfigResponse::DeleteAlarmConfigResponse()
{
    topicUrn_ = "";
    topicUrnIsSet_ = false;
}

DeleteAlarmConfigResponse::~DeleteAlarmConfigResponse() = default;

void DeleteAlarmConfigResponse::validate()
{
}

web::json::value DeleteAlarmConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(topicUrnIsSet_) {
        val[utility::conversions::to_string_t("topic_urn")] = ModelBase::toJson(topicUrn_);
    }

    return val;
}
bool DeleteAlarmConfigResponse::fromJson(const web::json::value& val)
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


std::string DeleteAlarmConfigResponse::getTopicUrn() const
{
    return topicUrn_;
}

void DeleteAlarmConfigResponse::setTopicUrn(const std::string& value)
{
    topicUrn_ = value;
    topicUrnIsSet_ = true;
}

bool DeleteAlarmConfigResponse::topicUrnIsSet() const
{
    return topicUrnIsSet_;
}

void DeleteAlarmConfigResponse::unsettopicUrn()
{
    topicUrnIsSet_ = false;
}

}
}
}
}
}


