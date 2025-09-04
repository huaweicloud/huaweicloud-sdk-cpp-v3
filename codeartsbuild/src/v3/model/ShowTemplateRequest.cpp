

#include "huaweicloud/codeartsbuild/v3/model/ShowTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowTemplateRequest::ShowTemplateRequest()
{
    uuid_ = "";
    uuidIsSet_ = false;
}

ShowTemplateRequest::~ShowTemplateRequest() = default;

void ShowTemplateRequest::validate()
{
}

web::json::value ShowTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uuidIsSet_) {
        val[utility::conversions::to_string_t("uuid")] = ModelBase::toJson(uuid_);
    }

    return val;
}
bool ShowTemplateRequest::fromJson(const web::json::value& val)
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


std::string ShowTemplateRequest::getUuid() const
{
    return uuid_;
}

void ShowTemplateRequest::setUuid(const std::string& value)
{
    uuid_ = value;
    uuidIsSet_ = true;
}

bool ShowTemplateRequest::uuidIsSet() const
{
    return uuidIsSet_;
}

void ShowTemplateRequest::unsetuuid()
{
    uuidIsSet_ = false;
}

}
}
}
}
}


