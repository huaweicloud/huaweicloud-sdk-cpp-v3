

#include "huaweicloud/gaussdbfornosql/v3/model/CreateColdVolumeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




CreateColdVolumeRequest::CreateColdVolumeRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateColdVolumeRequest::~CreateColdVolumeRequest() = default;

void CreateColdVolumeRequest::validate()
{
}

web::json::value CreateColdVolumeRequest::toJson() const
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
bool CreateColdVolumeRequest::fromJson(const web::json::value& val)
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
            CreateColdVolumeRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateColdVolumeRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateColdVolumeRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateColdVolumeRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateColdVolumeRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

CreateColdVolumeRequestBody CreateColdVolumeRequest::getBody() const
{
    return body_;
}

void CreateColdVolumeRequest::setBody(const CreateColdVolumeRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateColdVolumeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateColdVolumeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


