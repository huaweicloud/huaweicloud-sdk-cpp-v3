

#include "huaweicloud/drs/v5/model/ExportCreationTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ExportCreationTemplateResponse::ExportCreationTemplateResponse()
{
    id_ = "";
    idIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ExportCreationTemplateResponse::~ExportCreationTemplateResponse() = default;

void ExportCreationTemplateResponse::validate()
{
}

web::json::value ExportCreationTemplateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool ExportCreationTemplateResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string ExportCreationTemplateResponse::getId() const
{
    return id_;
}

void ExportCreationTemplateResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ExportCreationTemplateResponse::idIsSet() const
{
    return idIsSet_;
}

void ExportCreationTemplateResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ExportCreationTemplateResponse::getStatus() const
{
    return status_;
}

void ExportCreationTemplateResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ExportCreationTemplateResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ExportCreationTemplateResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


