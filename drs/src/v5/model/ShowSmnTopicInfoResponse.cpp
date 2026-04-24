

#include "huaweicloud/drs/v5/model/ShowSmnTopicInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowSmnTopicInfoResponse::ShowSmnTopicInfoResponse()
{
    topicsIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ShowSmnTopicInfoResponse::~ShowSmnTopicInfoResponse() = default;

void ShowSmnTopicInfoResponse::validate()
{
}

web::json::value ShowSmnTopicInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(topicsIsSet_) {
        val[utility::conversions::to_string_t("topics")] = ModelBase::toJson(topics_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ShowSmnTopicInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("topics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("topics"));
        if(!fieldValue.is_null())
        {
            std::vector<SmnTopicInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopics(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}


std::vector<SmnTopicInfo>& ShowSmnTopicInfoResponse::getTopics()
{
    return topics_;
}

void ShowSmnTopicInfoResponse::setTopics(const std::vector<SmnTopicInfo>& value)
{
    topics_ = value;
    topicsIsSet_ = true;
}

bool ShowSmnTopicInfoResponse::topicsIsSet() const
{
    return topicsIsSet_;
}

void ShowSmnTopicInfoResponse::unsettopics()
{
    topicsIsSet_ = false;
}

int32_t ShowSmnTopicInfoResponse::getTotalCount() const
{
    return totalCount_;
}

void ShowSmnTopicInfoResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ShowSmnTopicInfoResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ShowSmnTopicInfoResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


