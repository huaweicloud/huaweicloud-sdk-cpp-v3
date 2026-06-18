

#include "huaweicloud/codeartsrepo/v4/model/ListTenantEncryptedRepositoriesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListTenantEncryptedRepositoriesResponse::ListTenantEncryptedRepositoriesResponse()
{
    bodyIsSet_ = false;
}

ListTenantEncryptedRepositoriesResponse::~ListTenantEncryptedRepositoriesResponse() = default;

void ListTenantEncryptedRepositoriesResponse::validate()
{
}

web::json::value ListTenantEncryptedRepositoriesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListTenantEncryptedRepositoriesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<RepoEncryptionDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<RepoEncryptionDto>& ListTenantEncryptedRepositoriesResponse::getBody()
{
    return body_;
}

void ListTenantEncryptedRepositoriesResponse::setBody(const std::vector<RepoEncryptionDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListTenantEncryptedRepositoriesResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListTenantEncryptedRepositoriesResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


