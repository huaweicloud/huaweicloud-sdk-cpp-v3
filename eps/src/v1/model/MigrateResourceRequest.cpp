

#include "huaweicloud/eps/v1/model/MigrateResourceRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {




MigrateResourceRequest::MigrateResourceRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

MigrateResourceRequest::~MigrateResourceRequest() = default;

void MigrateResourceRequest::validate()
{
}

web::json::value MigrateResourceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool MigrateResourceRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            MigrateResource refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string MigrateResourceRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void MigrateResourceRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool MigrateResourceRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void MigrateResourceRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

MigrateResource MigrateResourceRequest::getBody() const
{
    return body_;
}

void MigrateResourceRequest::setBody(const MigrateResource& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool MigrateResourceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void MigrateResourceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


