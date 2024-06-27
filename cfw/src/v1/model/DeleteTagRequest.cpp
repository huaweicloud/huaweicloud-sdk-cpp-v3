

#include "huaweicloud/cfw/v1/model/DeleteTagRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




DeleteTagRequest::DeleteTagRequest()
{
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteTagRequest::~DeleteTagRequest() = default;

void DeleteTagRequest::validate()
{
}

web::json::value DeleteTagRequest::toJson() const
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
bool DeleteTagRequest::fromJson(const web::json::value& val)
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
            DeleteTagsDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteTagRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void DeleteTagRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool DeleteTagRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void DeleteTagRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

DeleteTagsDto DeleteTagRequest::getBody() const
{
    return body_;
}

void DeleteTagRequest::setBody(const DeleteTagsDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteTagRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteTagRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


