

#include "huaweicloud/iotda/v5/model/CreateOtaPackageRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CreateOtaPackageRequest::CreateOtaPackageRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateOtaPackageRequest::~CreateOtaPackageRequest() = default;

void CreateOtaPackageRequest::validate()
{
}

web::json::value CreateOtaPackageRequest::toJson() const
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
bool CreateOtaPackageRequest::fromJson(const web::json::value& val)
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
            CreateOtaPackage refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateOtaPackageRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateOtaPackageRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateOtaPackageRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateOtaPackageRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

CreateOtaPackage CreateOtaPackageRequest::getBody() const
{
    return body_;
}

void CreateOtaPackageRequest::setBody(const CreateOtaPackage& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateOtaPackageRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateOtaPackageRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


