

#include "huaweicloud/vod/v1/model/CreateObjectReplicationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




CreateObjectReplicationRequest::CreateObjectReplicationRequest()
{
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    bodyIsSet_ = false;
}

CreateObjectReplicationRequest::~CreateObjectReplicationRequest() = default;

void CreateObjectReplicationRequest::validate()
{
}

web::json::value CreateObjectReplicationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateObjectReplicationRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Sdk-Date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Sdk-Date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSdkDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateObjectReplicationRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateObjectReplicationRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreateObjectReplicationRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreateObjectReplicationRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreateObjectReplicationRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

CreateObjectReplicationRequestBody CreateObjectReplicationRequest::getBody() const
{
    return body_;
}

void CreateObjectReplicationRequest::setBody(const CreateObjectReplicationRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateObjectReplicationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateObjectReplicationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


