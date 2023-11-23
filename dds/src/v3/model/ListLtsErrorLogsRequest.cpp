

#include "huaweicloud/dds/v3/model/ListLtsErrorLogsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ListLtsErrorLogsRequest::ListLtsErrorLogsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListLtsErrorLogsRequest::~ListLtsErrorLogsRequest() = default;

void ListLtsErrorLogsRequest::validate()
{
}

web::json::value ListLtsErrorLogsRequest::toJson() const
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
bool ListLtsErrorLogsRequest::fromJson(const web::json::value& val)
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
            ListLtsErrorLogsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListLtsErrorLogsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListLtsErrorLogsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListLtsErrorLogsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListLtsErrorLogsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ListLtsErrorLogsRequestBody ListLtsErrorLogsRequest::getBody() const
{
    return body_;
}

void ListLtsErrorLogsRequest::setBody(const ListLtsErrorLogsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListLtsErrorLogsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListLtsErrorLogsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


