

#include "huaweicloud/geip/v3/model/ShowGlobalEipRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ShowGlobalEipRequest::ShowGlobalEipRequest()
{
    globalEipId_ = "";
    globalEipIdIsSet_ = false;
    fieldsIsSet_ = false;
}

ShowGlobalEipRequest::~ShowGlobalEipRequest() = default;

void ShowGlobalEipRequest::validate()
{
}

web::json::value ShowGlobalEipRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(globalEipIdIsSet_) {
        val[utility::conversions::to_string_t("global_eip_id")] = ModelBase::toJson(globalEipId_);
    }
    if(fieldsIsSet_) {
        val[utility::conversions::to_string_t("fields")] = ModelBase::toJson(fields_);
    }

    return val;
}
bool ShowGlobalEipRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("global_eip_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("global_eip_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGlobalEipId(refVal);
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


std::string ShowGlobalEipRequest::getGlobalEipId() const
{
    return globalEipId_;
}

void ShowGlobalEipRequest::setGlobalEipId(const std::string& value)
{
    globalEipId_ = value;
    globalEipIdIsSet_ = true;
}

bool ShowGlobalEipRequest::globalEipIdIsSet() const
{
    return globalEipIdIsSet_;
}

void ShowGlobalEipRequest::unsetglobalEipId()
{
    globalEipIdIsSet_ = false;
}

std::vector<std::string>& ShowGlobalEipRequest::getFields()
{
    return fields_;
}

void ShowGlobalEipRequest::setFields(const std::vector<std::string>& value)
{
    fields_ = value;
    fieldsIsSet_ = true;
}

bool ShowGlobalEipRequest::fieldsIsSet() const
{
    return fieldsIsSet_;
}

void ShowGlobalEipRequest::unsetfields()
{
    fieldsIsSet_ = false;
}

}
}
}
}
}


