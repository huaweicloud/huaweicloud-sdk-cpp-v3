

#include "huaweicloud/codeartsrepo/v4/model/ExportTenantRepositoriesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ExportTenantRepositoriesRequest::ExportTenantRepositoriesRequest()
{
    bodyIsSet_ = false;
}

ExportTenantRepositoriesRequest::~ExportTenantRepositoriesRequest() = default;

void ExportTenantRepositoriesRequest::validate()
{
}

web::json::value ExportTenantRepositoriesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ExportTenantRepositoriesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ExportTenantRepositoryBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ExportTenantRepositoryBody ExportTenantRepositoriesRequest::getBody() const
{
    return body_;
}

void ExportTenantRepositoriesRequest::setBody(const ExportTenantRepositoryBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ExportTenantRepositoriesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ExportTenantRepositoriesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


