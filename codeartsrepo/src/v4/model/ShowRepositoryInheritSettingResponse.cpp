

#include "huaweicloud/codeartsrepo/v4/model/ShowRepositoryInheritSettingResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowRepositoryInheritSettingResponse::ShowRepositoryInheritSettingResponse()
{
    bodyIsSet_ = false;
}

ShowRepositoryInheritSettingResponse::~ShowRepositoryInheritSettingResponse() = default;

void ShowRepositoryInheritSettingResponse::validate()
{
}

web::json::value ShowRepositoryInheritSettingResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowRepositoryInheritSettingResponse::fromJson(const web::json::value& val)
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


std::vector<RepositoryInheritSettingDto>& ShowRepositoryInheritSettingResponse::getBody()
{
    return body_;
}

void ShowRepositoryInheritSettingResponse::setBody(const std::vector<RepositoryInheritSettingDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowRepositoryInheritSettingResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowRepositoryInheritSettingResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


