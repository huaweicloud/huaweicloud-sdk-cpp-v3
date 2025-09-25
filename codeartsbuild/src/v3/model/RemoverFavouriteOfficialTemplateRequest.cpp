

#include "huaweicloud/codeartsbuild/v3/model/RemoverFavouriteOfficialTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




RemoverFavouriteOfficialTemplateRequest::RemoverFavouriteOfficialTemplateRequest()
{
    uuid_ = "";
    uuidIsSet_ = false;
}

RemoverFavouriteOfficialTemplateRequest::~RemoverFavouriteOfficialTemplateRequest() = default;

void RemoverFavouriteOfficialTemplateRequest::validate()
{
}

web::json::value RemoverFavouriteOfficialTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uuidIsSet_) {
        val[utility::conversions::to_string_t("uuid")] = ModelBase::toJson(uuid_);
    }

    return val;
}
bool RemoverFavouriteOfficialTemplateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUuid(refVal);
        }
    }
    return ok;
}


std::string RemoverFavouriteOfficialTemplateRequest::getUuid() const
{
    return uuid_;
}

void RemoverFavouriteOfficialTemplateRequest::setUuid(const std::string& value)
{
    uuid_ = value;
    uuidIsSet_ = true;
}

bool RemoverFavouriteOfficialTemplateRequest::uuidIsSet() const
{
    return uuidIsSet_;
}

void RemoverFavouriteOfficialTemplateRequest::unsetuuid()
{
    uuidIsSet_ = false;
}

}
}
}
}
}


