

#include "huaweicloud/iotda/v5/model/CreateProductRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CreateProductRequest::CreateProductRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateProductRequest::~CreateProductRequest() = default;

void CreateProductRequest::validate()
{
}

web::json::value CreateProductRequest::toJson() const
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
bool CreateProductRequest::fromJson(const web::json::value& val)
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
            AddProduct refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateProductRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateProductRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateProductRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateProductRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

AddProduct CreateProductRequest::getBody() const
{
    return body_;
}

void CreateProductRequest::setBody(const AddProduct& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateProductRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateProductRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


