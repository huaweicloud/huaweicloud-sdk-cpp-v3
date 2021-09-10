

#include "huaweicloud/vod/v1/model/Review.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




Review::Review()
{
    templateId_ = "";
    templateIdIsSet_ = false;
}

Review::~Review() = default;

void Review::validate()
{
}

web::json::value Review::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }

    return val;
}

bool Review::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("template_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateId(refVal);
        }
    }
    return ok;
}


std::string Review::getTemplateId() const
{
    return templateId_;
}

void Review::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool Review::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void Review::unsettemplateId()
{
    templateIdIsSet_ = false;
}

}
}
}
}
}


