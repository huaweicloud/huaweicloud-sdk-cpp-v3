

#include "huaweicloud/cfw/v1/model/CreateTagRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




CreateTagRequest::CreateTagRequest()
{
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateTagRequest::~CreateTagRequest() = default;

void CreateTagRequest::validate()
{
}

web::json::value CreateTagRequest::toJson() const
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
bool CreateTagRequest::fromJson(const web::json::value& val)
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
            CreateTagsDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateTagRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void CreateTagRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool CreateTagRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void CreateTagRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

CreateTagsDto CreateTagRequest::getBody() const
{
    return body_;
}

void CreateTagRequest::setBody(const CreateTagsDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateTagRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateTagRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


