

#include "huaweicloud/codeartsbuild/v3/model/DeleteTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




DeleteTemplateRequest::DeleteTemplateRequest()
{
    uuid_ = "";
    uuidIsSet_ = false;
}

DeleteTemplateRequest::~DeleteTemplateRequest() = default;

void DeleteTemplateRequest::validate()
{
}

web::json::value DeleteTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uuidIsSet_) {
        val[utility::conversions::to_string_t("uuid")] = ModelBase::toJson(uuid_);
    }

    return val;
}
bool DeleteTemplateRequest::fromJson(const web::json::value& val)
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


std::string DeleteTemplateRequest::getUuid() const
{
    return uuid_;
}

void DeleteTemplateRequest::setUuid(const std::string& value)
{
    uuid_ = value;
    uuidIsSet_ = true;
}

bool DeleteTemplateRequest::uuidIsSet() const
{
    return uuidIsSet_;
}

void DeleteTemplateRequest::unsetuuid()
{
    uuidIsSet_ = false;
}

}
}
}
}
}


