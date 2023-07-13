

#include "huaweicloud/csms/v1/model/UpdateSecretStageRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




UpdateSecretStageRequestBody::UpdateSecretStageRequestBody()
{
    versionId_ = "";
    versionIdIsSet_ = false;
}

UpdateSecretStageRequestBody::~UpdateSecretStageRequestBody() = default;

void UpdateSecretStageRequestBody::validate()
{
}

web::json::value UpdateSecretStageRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(versionIdIsSet_) {
        val[utility::conversions::to_string_t("version_id")] = ModelBase::toJson(versionId_);
    }

    return val;
}

bool UpdateSecretStageRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("version_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionId(refVal);
        }
    }
    return ok;
}

std::string UpdateSecretStageRequestBody::getVersionId() const
{
    return versionId_;
}

void UpdateSecretStageRequestBody::setVersionId(const std::string& value)
{
    versionId_ = value;
    versionIdIsSet_ = true;
}

bool UpdateSecretStageRequestBody::versionIdIsSet() const
{
    return versionIdIsSet_;
}

void UpdateSecretStageRequestBody::unsetversionId()
{
    versionIdIsSet_ = false;
}

}
}
}
}
}


