

#include "huaweicloud/cfw/v1/model/ListLogsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListLogsRequest::ListLogsRequest()
{
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListLogsRequest::~ListLogsRequest() = default;

void ListLogsRequest::validate()
{
}

web::json::value ListLogsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListLogsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fw_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fw_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFwInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ListLogsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListLogsRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ListLogsRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ListLogsRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ListLogsRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

ListLogsRequestBody ListLogsRequest::getBody() const
{
    return body_;
}

void ListLogsRequest::setBody(const ListLogsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListLogsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListLogsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


