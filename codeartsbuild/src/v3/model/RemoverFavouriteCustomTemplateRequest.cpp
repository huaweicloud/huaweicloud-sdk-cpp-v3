

#include "huaweicloud/codeartsbuild/v3/model/RemoverFavouriteCustomTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




RemoverFavouriteCustomTemplateRequest::RemoverFavouriteCustomTemplateRequest()
{
    uuid_ = "";
    uuidIsSet_ = false;
}

RemoverFavouriteCustomTemplateRequest::~RemoverFavouriteCustomTemplateRequest() = default;

void RemoverFavouriteCustomTemplateRequest::validate()
{
}

web::json::value RemoverFavouriteCustomTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uuidIsSet_) {
        val[utility::conversions::to_string_t("uuid")] = ModelBase::toJson(uuid_);
    }

    return val;
}
bool RemoverFavouriteCustomTemplateRequest::fromJson(const web::json::value& val)
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


std::string RemoverFavouriteCustomTemplateRequest::getUuid() const
{
    return uuid_;
}

void RemoverFavouriteCustomTemplateRequest::setUuid(const std::string& value)
{
    uuid_ = value;
    uuidIsSet_ = true;
}

bool RemoverFavouriteCustomTemplateRequest::uuidIsSet() const
{
    return uuidIsSet_;
}

void RemoverFavouriteCustomTemplateRequest::unsetuuid()
{
    uuidIsSet_ = false;
}

}
}
}
}
}


