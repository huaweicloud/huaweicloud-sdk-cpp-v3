

#include "huaweicloud/dds/v3/model/ListLtsSlowLogsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ListLtsSlowLogsRequest::ListLtsSlowLogsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListLtsSlowLogsRequest::~ListLtsSlowLogsRequest() = default;

void ListLtsSlowLogsRequest::validate()
{
}

web::json::value ListLtsSlowLogsRequest::toJson() const
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
bool ListLtsSlowLogsRequest::fromJson(const web::json::value& val)
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
            ListLtsSlowLogsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListLtsSlowLogsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListLtsSlowLogsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListLtsSlowLogsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListLtsSlowLogsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ListLtsSlowLogsRequestBody ListLtsSlowLogsRequest::getBody() const
{
    return body_;
}

void ListLtsSlowLogsRequest::setBody(const ListLtsSlowLogsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListLtsSlowLogsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListLtsSlowLogsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


