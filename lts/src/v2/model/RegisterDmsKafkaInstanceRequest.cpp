

#include "huaweicloud/lts/v2/model/RegisterDmsKafkaInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




RegisterDmsKafkaInstanceRequest::RegisterDmsKafkaInstanceRequest()
{
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

RegisterDmsKafkaInstanceRequest::~RegisterDmsKafkaInstanceRequest() = default;

void RegisterDmsKafkaInstanceRequest::validate()
{
}

web::json::value RegisterDmsKafkaInstanceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool RegisterDmsKafkaInstanceRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            RegisterDmsKafkaInstanceRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RegisterDmsKafkaInstanceRequest::getContentType() const
{
    return contentType_;
}

void RegisterDmsKafkaInstanceRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool RegisterDmsKafkaInstanceRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void RegisterDmsKafkaInstanceRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

RegisterDmsKafkaInstanceRequestBody RegisterDmsKafkaInstanceRequest::getBody() const
{
    return body_;
}

void RegisterDmsKafkaInstanceRequest::setBody(const RegisterDmsKafkaInstanceRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RegisterDmsKafkaInstanceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RegisterDmsKafkaInstanceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


