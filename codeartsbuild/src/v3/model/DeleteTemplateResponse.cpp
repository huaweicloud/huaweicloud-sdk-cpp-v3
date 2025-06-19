

#include "huaweicloud/codeartsbuild/v3/model/DeleteTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




DeleteTemplateResponse::DeleteTemplateResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

DeleteTemplateResponse::~DeleteTemplateResponse() = default;

void DeleteTemplateResponse::validate()
{
}

web::json::value DeleteTemplateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool DeleteTemplateResponse::fromJson(const web::json::value& val)
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


std::string DeleteTemplateResponse::getStatus() const
{
    return status_;
}

void DeleteTemplateResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeleteTemplateResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DeleteTemplateResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


