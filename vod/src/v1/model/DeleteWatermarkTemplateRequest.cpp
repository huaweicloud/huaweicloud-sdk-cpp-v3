

#include "huaweicloud/vod/v1/model/DeleteWatermarkTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




DeleteWatermarkTemplateRequest::DeleteWatermarkTemplateRequest()
{
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

DeleteWatermarkTemplateRequest::~DeleteWatermarkTemplateRequest() = default;

void DeleteWatermarkTemplateRequest::validate()
{
}

web::json::value DeleteWatermarkTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool DeleteWatermarkTemplateRequest::fromJson(const web::json::value& val)
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


std::string DeleteWatermarkTemplateRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void DeleteWatermarkTemplateRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool DeleteWatermarkTemplateRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void DeleteWatermarkTemplateRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string DeleteWatermarkTemplateRequest::getId() const
{
    return id_;
}

void DeleteWatermarkTemplateRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteWatermarkTemplateRequest::idIsSet() const
{
    return idIsSet_;
}

void DeleteWatermarkTemplateRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


