

#include "huaweicloud/codeartsbuild/v3/model/AddFavouriteCustomTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




AddFavouriteCustomTemplateRequest::AddFavouriteCustomTemplateRequest()
{
    uuid_ = "";
    uuidIsSet_ = false;
}

AddFavouriteCustomTemplateRequest::~AddFavouriteCustomTemplateRequest() = default;

void AddFavouriteCustomTemplateRequest::validate()
{
}

web::json::value AddFavouriteCustomTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uuidIsSet_) {
        val[utility::conversions::to_string_t("uuid")] = ModelBase::toJson(uuid_);
    }

    return val;
}
bool AddFavouriteCustomTemplateRequest::fromJson(const web::json::value& val)
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


std::string AddFavouriteCustomTemplateRequest::getUuid() const
{
    return uuid_;
}

void AddFavouriteCustomTemplateRequest::setUuid(const std::string& value)
{
    uuid_ = value;
    uuidIsSet_ = true;
}

bool AddFavouriteCustomTemplateRequest::uuidIsSet() const
{
    return uuidIsSet_;
}

void AddFavouriteCustomTemplateRequest::unsetuuid()
{
    uuidIsSet_ = false;
}

}
}
}
}
}


