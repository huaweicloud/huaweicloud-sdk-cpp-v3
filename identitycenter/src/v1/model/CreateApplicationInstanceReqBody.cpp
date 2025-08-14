

#include "huaweicloud/identitycenter/v1/model/CreateApplicationInstanceReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




CreateApplicationInstanceReqBody::CreateApplicationInstanceReqBody()
{
    name_ = "";
    nameIsSet_ = false;
    templateId_ = "";
    templateIdIsSet_ = false;
}

CreateApplicationInstanceReqBody::~CreateApplicationInstanceReqBody() = default;

void CreateApplicationInstanceReqBody::validate()
{
}

web::json::value CreateApplicationInstanceReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }

    return val;
}
bool CreateApplicationInstanceReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
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


std::string CreateApplicationInstanceReqBody::getName() const
{
    return name_;
}

void CreateApplicationInstanceReqBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateApplicationInstanceReqBody::nameIsSet() const
{
    return nameIsSet_;
}

void CreateApplicationInstanceReqBody::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateApplicationInstanceReqBody::getTemplateId() const
{
    return templateId_;
}

void CreateApplicationInstanceReqBody::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool CreateApplicationInstanceReqBody::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void CreateApplicationInstanceReqBody::unsettemplateId()
{
    templateIdIsSet_ = false;
}

}
}
}
}
}


