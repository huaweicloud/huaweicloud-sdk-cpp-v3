

#include "huaweicloud/cdn/v2/model/TemplateApplyRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




TemplateApplyRequestBody::TemplateApplyRequestBody()
{
    resources_ = "";
    resourcesIsSet_ = false;
}

TemplateApplyRequestBody::~TemplateApplyRequestBody() = default;

void TemplateApplyRequestBody::validate()
{
}

web::json::value TemplateApplyRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourcesIsSet_) {
        val[utility::conversions::to_string_t("resources")] = ModelBase::toJson(resources_);
    }

    return val;
}
bool TemplateApplyRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResources(refVal);
        }
    }
    return ok;
}


std::string TemplateApplyRequestBody::getResources() const
{
    return resources_;
}

void TemplateApplyRequestBody::setResources(const std::string& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool TemplateApplyRequestBody::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void TemplateApplyRequestBody::unsetresources()
{
    resourcesIsSet_ = false;
}

}
}
}
}
}


