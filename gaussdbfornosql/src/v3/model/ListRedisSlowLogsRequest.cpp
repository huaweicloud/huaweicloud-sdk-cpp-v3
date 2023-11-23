

#include "huaweicloud/gaussdbfornosql/v3/model/ListRedisSlowLogsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListRedisSlowLogsRequest::ListRedisSlowLogsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListRedisSlowLogsRequest::~ListRedisSlowLogsRequest() = default;

void ListRedisSlowLogsRequest::validate()
{
}

web::json::value ListRedisSlowLogsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListRedisSlowLogsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ListRedisSlowLogsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListRedisSlowLogsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListRedisSlowLogsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListRedisSlowLogsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListRedisSlowLogsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ListRedisSlowLogsRequestBody ListRedisSlowLogsRequest::getBody() const
{
    return body_;
}

void ListRedisSlowLogsRequest::setBody(const ListRedisSlowLogsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListRedisSlowLogsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListRedisSlowLogsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


