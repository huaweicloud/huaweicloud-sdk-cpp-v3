

#include "huaweicloud/live/v1/model/CreateRecordCallbackConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




CreateRecordCallbackConfigRequest::CreateRecordCallbackConfigRequest()
{
    bodyIsSet_ = false;
}

CreateRecordCallbackConfigRequest::~CreateRecordCallbackConfigRequest() = default;

void CreateRecordCallbackConfigRequest::validate()
{
}

web::json::value CreateRecordCallbackConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateRecordCallbackConfigRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


RecordCallbackConfigRequest CreateRecordCallbackConfigRequest::getBody() const
{
    return body_;
}

void CreateRecordCallbackConfigRequest::setBody(const RecordCallbackConfigRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateRecordCallbackConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateRecordCallbackConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


