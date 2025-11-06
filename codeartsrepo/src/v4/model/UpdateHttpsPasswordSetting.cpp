

#include "huaweicloud/codeartsrepo/v4/model/UpdateHttpsPasswordSetting.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




UpdateHttpsPasswordSetting::UpdateHttpsPasswordSetting()
{
    httpsCloneIamAuth_ = "";
    httpsCloneIamAuthIsSet_ = false;
}

UpdateHttpsPasswordSetting::~UpdateHttpsPasswordSetting() = default;

void UpdateHttpsPasswordSetting::validate()
{
}

web::json::value UpdateHttpsPasswordSetting::toJson() const
{
    web::json::value val = web::json::value::object();

    if(httpsCloneIamAuthIsSet_) {
        val[utility::conversions::to_string_t("https_clone_iam_auth")] = ModelBase::toJson(httpsCloneIamAuth_);
    }

    return val;
}
bool UpdateHttpsPasswordSetting::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("https_clone_iam_auth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("https_clone_iam_auth"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttpsCloneIamAuth(refVal);
        }
    }
    return ok;
}


std::string UpdateHttpsPasswordSetting::getHttpsCloneIamAuth() const
{
    return httpsCloneIamAuth_;
}

void UpdateHttpsPasswordSetting::setHttpsCloneIamAuth(const std::string& value)
{
    httpsCloneIamAuth_ = value;
    httpsCloneIamAuthIsSet_ = true;
}

bool UpdateHttpsPasswordSetting::httpsCloneIamAuthIsSet() const
{
    return httpsCloneIamAuthIsSet_;
}

void UpdateHttpsPasswordSetting::unsethttpsCloneIamAuth()
{
    httpsCloneIamAuthIsSet_ = false;
}

}
}
}
}
}


