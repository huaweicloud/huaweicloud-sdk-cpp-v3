

#include "huaweicloud/vod/v1/model/ConfirmImageUploadReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ConfirmImageUploadReq::ConfirmImageUploadReq()
{
    id_ = "";
    idIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ConfirmImageUploadReq::~ConfirmImageUploadReq() = default;

void ConfirmImageUploadReq::validate()
{
}

web::json::value ConfirmImageUploadReq::toJson() const
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

bool ConfirmImageUploadReq::fromJson(const web::json::value& val)
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


std::string ConfirmImageUploadReq::getId() const
{
    return id_;
}

void ConfirmImageUploadReq::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ConfirmImageUploadReq::idIsSet() const
{
    return idIsSet_;
}

void ConfirmImageUploadReq::unsetid()
{
    idIsSet_ = false;
}

std::string ConfirmImageUploadReq::getStatus() const
{
    return status_;
}

void ConfirmImageUploadReq::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ConfirmImageUploadReq::statusIsSet() const
{
    return statusIsSet_;
}

void ConfirmImageUploadReq::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


