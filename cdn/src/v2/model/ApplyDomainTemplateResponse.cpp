

#include "huaweicloud/cdn/v2/model/ApplyDomainTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ApplyDomainTemplateResponse::ApplyDomainTemplateResponse()
{
    id_ = "";
    idIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    detailIsSet_ = false;
}

ApplyDomainTemplateResponse::~ApplyDomainTemplateResponse() = default;

void ApplyDomainTemplateResponse::validate()
{
}

web::json::value ApplyDomainTemplateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(detailIsSet_) {
        val[utility::conversions::to_string_t("detail")] = ModelBase::toJson(detail_);
    }

    return val;
}
bool ApplyDomainTemplateResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("detail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detail"));
        if(!fieldValue.is_null())
        {
            std::vector<ApplyTmlDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetail(refVal);
        }
    }
    return ok;
}


std::string ApplyDomainTemplateResponse::getId() const
{
    return id_;
}

void ApplyDomainTemplateResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ApplyDomainTemplateResponse::idIsSet() const
{
    return idIsSet_;
}

void ApplyDomainTemplateResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ApplyDomainTemplateResponse::getStatus() const
{
    return status_;
}

void ApplyDomainTemplateResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ApplyDomainTemplateResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ApplyDomainTemplateResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<ApplyTmlDetail>& ApplyDomainTemplateResponse::getDetail()
{
    return detail_;
}

void ApplyDomainTemplateResponse::setDetail(const std::vector<ApplyTmlDetail>& value)
{
    detail_ = value;
    detailIsSet_ = true;
}

bool ApplyDomainTemplateResponse::detailIsSet() const
{
    return detailIsSet_;
}

void ApplyDomainTemplateResponse::unsetdetail()
{
    detailIsSet_ = false;
}

}
}
}
}
}


