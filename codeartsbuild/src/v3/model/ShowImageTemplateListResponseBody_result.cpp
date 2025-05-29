

#include "huaweicloud/codeartsbuild/v3/model/ShowImageTemplateListResponseBody_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowImageTemplateListResponseBody_result::ShowImageTemplateListResponseBody_result()
{
    imageTemplatesIsSet_ = false;
}

ShowImageTemplateListResponseBody_result::~ShowImageTemplateListResponseBody_result() = default;

void ShowImageTemplateListResponseBody_result::validate()
{
}

web::json::value ShowImageTemplateListResponseBody_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageTemplatesIsSet_) {
        val[utility::conversions::to_string_t("image_templates")] = ModelBase::toJson(imageTemplates_);
    }

    return val;
}
bool ShowImageTemplateListResponseBody_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("image_templates"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_templates"));
        if(!fieldValue.is_null())
        {
            std::vector<ShowImageTemplateListResponseBody_result_image_templates> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageTemplates(refVal);
        }
    }
    return ok;
}


std::vector<ShowImageTemplateListResponseBody_result_image_templates>& ShowImageTemplateListResponseBody_result::getImageTemplates()
{
    return imageTemplates_;
}

void ShowImageTemplateListResponseBody_result::setImageTemplates(const std::vector<ShowImageTemplateListResponseBody_result_image_templates>& value)
{
    imageTemplates_ = value;
    imageTemplatesIsSet_ = true;
}

bool ShowImageTemplateListResponseBody_result::imageTemplatesIsSet() const
{
    return imageTemplatesIsSet_;
}

void ShowImageTemplateListResponseBody_result::unsetimageTemplates()
{
    imageTemplatesIsSet_ = false;
}

}
}
}
}
}


