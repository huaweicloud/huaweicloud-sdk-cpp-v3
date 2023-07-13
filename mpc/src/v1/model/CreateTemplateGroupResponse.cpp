

#include "huaweicloud/mpc/v1/model/CreateTemplateGroupResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




CreateTemplateGroupResponse::CreateTemplateGroupResponse()
{
    templateGroupIsSet_ = false;
}

CreateTemplateGroupResponse::~CreateTemplateGroupResponse() = default;

void CreateTemplateGroupResponse::validate()
{
}

web::json::value CreateTemplateGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templateGroupIsSet_) {
        val[utility::conversions::to_string_t("template_group")] = ModelBase::toJson(templateGroup_);
    }

    return val;
}

bool CreateTemplateGroupResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("template_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_group"));
        if(!fieldValue.is_null())
        {
            TemplateGroup refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateGroup(refVal);
        }
    }
    return ok;
}

TemplateGroup CreateTemplateGroupResponse::getTemplateGroup() const
{
    return templateGroup_;
}

void CreateTemplateGroupResponse::setTemplateGroup(const TemplateGroup& value)
{
    templateGroup_ = value;
    templateGroupIsSet_ = true;
}

bool CreateTemplateGroupResponse::templateGroupIsSet() const
{
    return templateGroupIsSet_;
}

void CreateTemplateGroupResponse::unsettemplateGroup()
{
    templateGroupIsSet_ = false;
}

}
}
}
}
}


