

#include "huaweicloud/cfw/v1/model/ExportStatusVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ExportStatusVO::ExportStatusVO()
{
    id_ = "";
    idIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
}

ExportStatusVO::~ExportStatusVO() = default;

void ExportStatusVO::validate()
{
}

web::json::value ExportStatusVO::toJson() const
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
bool ExportStatusVO::fromJson(const web::json::value& val)
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
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string ExportStatusVO::getId() const
{
    return id_;
}

void ExportStatusVO::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ExportStatusVO::idIsSet() const
{
    return idIsSet_;
}

void ExportStatusVO::unsetid()
{
    idIsSet_ = false;
}

int32_t ExportStatusVO::getStatus() const
{
    return status_;
}

void ExportStatusVO::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ExportStatusVO::statusIsSet() const
{
    return statusIsSet_;
}

void ExportStatusVO::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


