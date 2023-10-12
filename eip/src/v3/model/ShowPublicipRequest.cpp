

#include "huaweicloud/eip/v3/model/ShowPublicipRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




ShowPublicipRequest::ShowPublicipRequest()
{
    publicipId_ = "";
    publicipIdIsSet_ = false;
    fieldsIsSet_ = false;
}

ShowPublicipRequest::~ShowPublicipRequest() = default;

void ShowPublicipRequest::validate()
{
}

web::json::value ShowPublicipRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicipIdIsSet_) {
        val[utility::conversions::to_string_t("publicip_id")] = ModelBase::toJson(publicipId_);
    }
    if(fieldsIsSet_) {
        val[utility::conversions::to_string_t("fields")] = ModelBase::toJson(fields_);
    }

    return val;
}
bool ShowPublicipRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("publicip_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicip_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicipId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fields"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFields(refVal);
        }
    }
    return ok;
}


std::string ShowPublicipRequest::getPublicipId() const
{
    return publicipId_;
}

void ShowPublicipRequest::setPublicipId(const std::string& value)
{
    publicipId_ = value;
    publicipIdIsSet_ = true;
}

bool ShowPublicipRequest::publicipIdIsSet() const
{
    return publicipIdIsSet_;
}

void ShowPublicipRequest::unsetpublicipId()
{
    publicipIdIsSet_ = false;
}

std::vector<std::string>& ShowPublicipRequest::getFields()
{
    return fields_;
}

void ShowPublicipRequest::setFields(const std::vector<std::string>& value)
{
    fields_ = value;
    fieldsIsSet_ = true;
}

bool ShowPublicipRequest::fieldsIsSet() const
{
    return fieldsIsSet_;
}

void ShowPublicipRequest::unsetfields()
{
    fieldsIsSet_ = false;
}

}
}
}
}
}


