

#include "huaweicloud/gaussdbfornosql/v3/model/ListMongodbSlowLogsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListMongodbSlowLogsRequest::ListMongodbSlowLogsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListMongodbSlowLogsRequest::~ListMongodbSlowLogsRequest() = default;

void ListMongodbSlowLogsRequest::validate()
{
}

web::json::value ListMongodbSlowLogsRequest::toJson() const
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
bool ListMongodbSlowLogsRequest::fromJson(const web::json::value& val)
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
            ListMongodbSlowLogsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListMongodbSlowLogsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListMongodbSlowLogsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListMongodbSlowLogsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListMongodbSlowLogsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ListMongodbSlowLogsRequestBody ListMongodbSlowLogsRequest::getBody() const
{
    return body_;
}

void ListMongodbSlowLogsRequest::setBody(const ListMongodbSlowLogsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListMongodbSlowLogsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListMongodbSlowLogsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


