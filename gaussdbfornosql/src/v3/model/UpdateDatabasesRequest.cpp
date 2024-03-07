

#include "huaweicloud/gaussdbfornosql/v3/model/UpdateDatabasesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




UpdateDatabasesRequest::UpdateDatabasesRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateDatabasesRequest::~UpdateDatabasesRequest() = default;

void UpdateDatabasesRequest::validate()
{
}

web::json::value UpdateDatabasesRequest::toJson() const
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
bool UpdateDatabasesRequest::fromJson(const web::json::value& val)
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
            UpdateDatabasesRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateDatabasesRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateDatabasesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateDatabasesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateDatabasesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

UpdateDatabasesRequestBody UpdateDatabasesRequest::getBody() const
{
    return body_;
}

void UpdateDatabasesRequest::setBody(const UpdateDatabasesRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateDatabasesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateDatabasesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


