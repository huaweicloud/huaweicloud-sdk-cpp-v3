

#include "huaweicloud/kms/v2/model/ShowVersionRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ShowVersionRequest::ShowVersionRequest()
{
    versionId_ = "";
    versionIdIsSet_ = false;
}

ShowVersionRequest::~ShowVersionRequest() = default;

void ShowVersionRequest::validate()
{
}

web::json::value ShowVersionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(versionIdIsSet_) {
        val[utility::conversions::to_string_t("version_id")] = ModelBase::toJson(versionId_);
    }

    return val;
}

bool ShowVersionRequest::fromJson(const web::json::value& val)
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

std::string ShowVersionRequest::getVersionId() const
{
    return versionId_;
}

void ShowVersionRequest::setVersionId(const std::string& value)
{
    versionId_ = value;
    versionIdIsSet_ = true;
}

bool ShowVersionRequest::versionIdIsSet() const
{
    return versionIdIsSet_;
}

void ShowVersionRequest::unsetversionId()
{
    versionIdIsSet_ = false;
}

}
}
}
}
}


