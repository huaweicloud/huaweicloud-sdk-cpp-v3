

#include "huaweicloud/iotda/v5/model/SearchDevicesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




SearchDevicesRequest::SearchDevicesRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

SearchDevicesRequest::~SearchDevicesRequest() = default;

void SearchDevicesRequest::validate()
{
}

web::json::value SearchDevicesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SearchDevicesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Instance-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Instance-Id"));
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
            SearchSql refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SearchDevicesRequest::getInstanceId() const
{
    return instanceId_;
}

void SearchDevicesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SearchDevicesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SearchDevicesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

SearchSql SearchDevicesRequest::getBody() const
{
    return body_;
}

void SearchDevicesRequest::setBody(const SearchSql& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SearchDevicesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SearchDevicesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


