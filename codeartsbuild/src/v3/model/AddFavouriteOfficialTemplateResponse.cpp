

#include "huaweicloud/codeartsbuild/v3/model/AddFavouriteOfficialTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




AddFavouriteOfficialTemplateResponse::AddFavouriteOfficialTemplateResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

AddFavouriteOfficialTemplateResponse::~AddFavouriteOfficialTemplateResponse() = default;

void AddFavouriteOfficialTemplateResponse::validate()
{
}

web::json::value AddFavouriteOfficialTemplateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool AddFavouriteOfficialTemplateResponse::fromJson(const web::json::value& val)
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


std::string AddFavouriteOfficialTemplateResponse::getStatus() const
{
    return status_;
}

void AddFavouriteOfficialTemplateResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AddFavouriteOfficialTemplateResponse::statusIsSet() const
{
    return statusIsSet_;
}

void AddFavouriteOfficialTemplateResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


