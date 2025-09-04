

#include "huaweicloud/codeartsbuild/v3/model/RemoverFavouriteCustomTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




RemoverFavouriteCustomTemplateResponse::RemoverFavouriteCustomTemplateResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

RemoverFavouriteCustomTemplateResponse::~RemoverFavouriteCustomTemplateResponse() = default;

void RemoverFavouriteCustomTemplateResponse::validate()
{
}

web::json::value RemoverFavouriteCustomTemplateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool RemoverFavouriteCustomTemplateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string RemoverFavouriteCustomTemplateResponse::getStatus() const
{
    return status_;
}

void RemoverFavouriteCustomTemplateResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool RemoverFavouriteCustomTemplateResponse::statusIsSet() const
{
    return statusIsSet_;
}

void RemoverFavouriteCustomTemplateResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


