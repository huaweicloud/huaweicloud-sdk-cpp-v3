

#include "huaweicloud/codeartsbuild/v3/model/AddFavouriteOfficialTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




AddFavouriteOfficialTemplateRequest::AddFavouriteOfficialTemplateRequest()
{
    uuid_ = "";
    uuidIsSet_ = false;
}

AddFavouriteOfficialTemplateRequest::~AddFavouriteOfficialTemplateRequest() = default;

void AddFavouriteOfficialTemplateRequest::validate()
{
}

web::json::value AddFavouriteOfficialTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uuidIsSet_) {
        val[utility::conversions::to_string_t("uuid")] = ModelBase::toJson(uuid_);
    }

    return val;
}
bool AddFavouriteOfficialTemplateRequest::fromJson(const web::json::value& val)
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


std::string AddFavouriteOfficialTemplateRequest::getUuid() const
{
    return uuid_;
}

void AddFavouriteOfficialTemplateRequest::setUuid(const std::string& value)
{
    uuid_ = value;
    uuidIsSet_ = true;
}

bool AddFavouriteOfficialTemplateRequest::uuidIsSet() const
{
    return uuidIsSet_;
}

void AddFavouriteOfficialTemplateRequest::unsetuuid()
{
    uuidIsSet_ = false;
}

}
}
}
}
}


