

#include "huaweicloud/rds/v3/model/ListRemoteDbRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListRemoteDbRequest::ListRemoteDbRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListRemoteDbRequest::~ListRemoteDbRequest() = default;

void ListRemoteDbRequest::validate()
{
}

web::json::value ListRemoteDbRequest::toJson() const
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
bool ListRemoteDbRequest::fromJson(const web::json::value& val)
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
            ListRemoteDbRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListRemoteDbRequest::getInstanceId() const
{
    return instanceId_;
}

void ListRemoteDbRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListRemoteDbRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListRemoteDbRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ListRemoteDbRequestBody ListRemoteDbRequest::getBody() const
{
    return body_;
}

void ListRemoteDbRequest::setBody(const ListRemoteDbRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListRemoteDbRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListRemoteDbRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


