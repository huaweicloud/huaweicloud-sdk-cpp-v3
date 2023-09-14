

#include "huaweicloud/smn/v2/model/ListLogtankRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




ListLogtankRequest::ListLogtankRequest()
{
    topicUrn_ = "";
    topicUrnIsSet_ = false;
}

ListLogtankRequest::~ListLogtankRequest() = default;

void ListLogtankRequest::validate()
{
}

web::json::value ListLogtankRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(topicUrnIsSet_) {
        val[utility::conversions::to_string_t("topic_urn")] = ModelBase::toJson(topicUrn_);
    }

    return val;
}

bool ListLogtankRequest::fromJson(const web::json::value& val)
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

std::string ListLogtankRequest::getTopicUrn() const
{
    return topicUrn_;
}

void ListLogtankRequest::setTopicUrn(const std::string& value)
{
    topicUrn_ = value;
    topicUrnIsSet_ = true;
}

bool ListLogtankRequest::topicUrnIsSet() const
{
    return topicUrnIsSet_;
}

void ListLogtankRequest::unsettopicUrn()
{
    topicUrnIsSet_ = false;
}

}
}
}
}
}


