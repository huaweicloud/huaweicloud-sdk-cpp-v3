

#include "huaweicloud/gaussdbfornosql/v3/model/ListMongodbErrorLogsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListMongodbErrorLogsRequest::ListMongodbErrorLogsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListMongodbErrorLogsRequest::~ListMongodbErrorLogsRequest() = default;

void ListMongodbErrorLogsRequest::validate()
{
}

web::json::value ListMongodbErrorLogsRequest::toJson() const
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
bool ListMongodbErrorLogsRequest::fromJson(const web::json::value& val)
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
            ListMongodbErrorLogsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListMongodbErrorLogsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListMongodbErrorLogsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListMongodbErrorLogsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListMongodbErrorLogsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ListMongodbErrorLogsRequestBody ListMongodbErrorLogsRequest::getBody() const
{
    return body_;
}

void ListMongodbErrorLogsRequest::setBody(const ListMongodbErrorLogsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListMongodbErrorLogsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListMongodbErrorLogsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


