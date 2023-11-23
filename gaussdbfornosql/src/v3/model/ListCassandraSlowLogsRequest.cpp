

#include "huaweicloud/gaussdbfornosql/v3/model/ListCassandraSlowLogsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListCassandraSlowLogsRequest::ListCassandraSlowLogsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListCassandraSlowLogsRequest::~ListCassandraSlowLogsRequest() = default;

void ListCassandraSlowLogsRequest::validate()
{
}

web::json::value ListCassandraSlowLogsRequest::toJson() const
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
bool ListCassandraSlowLogsRequest::fromJson(const web::json::value& val)
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
            ListCassandraSlowLogsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListCassandraSlowLogsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListCassandraSlowLogsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListCassandraSlowLogsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListCassandraSlowLogsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ListCassandraSlowLogsRequestBody ListCassandraSlowLogsRequest::getBody() const
{
    return body_;
}

void ListCassandraSlowLogsRequest::setBody(const ListCassandraSlowLogsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListCassandraSlowLogsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListCassandraSlowLogsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


