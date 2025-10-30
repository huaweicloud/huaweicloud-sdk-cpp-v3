

#include "huaweicloud/live/v1/model/ShowWatermarkTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ShowWatermarkTemplateRequest::ShowWatermarkTemplateRequest()
{
    id_ = "";
    idIsSet_ = false;
}

ShowWatermarkTemplateRequest::~ShowWatermarkTemplateRequest() = default;

void ShowWatermarkTemplateRequest::validate()
{
}

web::json::value ShowWatermarkTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool ShowWatermarkTemplateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    return ok;
}


std::string ShowWatermarkTemplateRequest::getId() const
{
    return id_;
}

void ShowWatermarkTemplateRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowWatermarkTemplateRequest::idIsSet() const
{
    return idIsSet_;
}

void ShowWatermarkTemplateRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


