

#include "huaweicloud/live/v1/model/UpdateRecordCallbackConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




UpdateRecordCallbackConfigRequest::UpdateRecordCallbackConfigRequest()
{
    id_ = "";
    idIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateRecordCallbackConfigRequest::~UpdateRecordCallbackConfigRequest() = default;

void UpdateRecordCallbackConfigRequest::validate()
{
}

web::json::value UpdateRecordCallbackConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateRecordCallbackConfigRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            RecordCallbackConfigRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateRecordCallbackConfigRequest::getId() const
{
    return id_;
}

void UpdateRecordCallbackConfigRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateRecordCallbackConfigRequest::idIsSet() const
{
    return idIsSet_;
}

void UpdateRecordCallbackConfigRequest::unsetid()
{
    idIsSet_ = false;
}

RecordCallbackConfigRequest UpdateRecordCallbackConfigRequest::getBody() const
{
    return body_;
}

void UpdateRecordCallbackConfigRequest::setBody(const RecordCallbackConfigRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateRecordCallbackConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateRecordCallbackConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


