

#include "huaweicloud/codeartsbuild/v3/model/RemoverFavouriteOfficialTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




RemoverFavouriteOfficialTemplateResponse::RemoverFavouriteOfficialTemplateResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

RemoverFavouriteOfficialTemplateResponse::~RemoverFavouriteOfficialTemplateResponse() = default;

void RemoverFavouriteOfficialTemplateResponse::validate()
{
}

web::json::value RemoverFavouriteOfficialTemplateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool RemoverFavouriteOfficialTemplateResponse::fromJson(const web::json::value& val)
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


std::string RemoverFavouriteOfficialTemplateResponse::getStatus() const
{
    return status_;
}

void RemoverFavouriteOfficialTemplateResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool RemoverFavouriteOfficialTemplateResponse::statusIsSet() const
{
    return statusIsSet_;
}

void RemoverFavouriteOfficialTemplateResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


