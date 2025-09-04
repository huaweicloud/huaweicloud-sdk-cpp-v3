

#include "huaweicloud/codeartsbuild/v3/model/AddFavouriteCustomTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




AddFavouriteCustomTemplateResponse::AddFavouriteCustomTemplateResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

AddFavouriteCustomTemplateResponse::~AddFavouriteCustomTemplateResponse() = default;

void AddFavouriteCustomTemplateResponse::validate()
{
}

web::json::value AddFavouriteCustomTemplateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool AddFavouriteCustomTemplateResponse::fromJson(const web::json::value& val)
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


std::string AddFavouriteCustomTemplateResponse::getStatus() const
{
    return status_;
}

void AddFavouriteCustomTemplateResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AddFavouriteCustomTemplateResponse::statusIsSet() const
{
    return statusIsSet_;
}

void AddFavouriteCustomTemplateResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


