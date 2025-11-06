

#include "huaweicloud/codeartsrepo/v4/model/UpdateRepositoryInheritSettingResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




UpdateRepositoryInheritSettingResponse::UpdateRepositoryInheritSettingResponse()
{
    bodyIsSet_ = false;
}

UpdateRepositoryInheritSettingResponse::~UpdateRepositoryInheritSettingResponse() = default;

void UpdateRepositoryInheritSettingResponse::validate()
{
}

web::json::value UpdateRepositoryInheritSettingResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateRepositoryInheritSettingResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<RepositoryInheritSettingDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<RepositoryInheritSettingDto>& UpdateRepositoryInheritSettingResponse::getBody()
{
    return body_;
}

void UpdateRepositoryInheritSettingResponse::setBody(const std::vector<RepositoryInheritSettingDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateRepositoryInheritSettingResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateRepositoryInheritSettingResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


