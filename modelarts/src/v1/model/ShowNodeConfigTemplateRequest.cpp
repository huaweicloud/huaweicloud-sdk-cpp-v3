

#include "huaweicloud/modelarts/v1/model/ShowNodeConfigTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowNodeConfigTemplateRequest::ShowNodeConfigTemplateRequest()
{
    nodeconfigtemplateName_ = "";
    nodeconfigtemplateNameIsSet_ = false;
}

ShowNodeConfigTemplateRequest::~ShowNodeConfigTemplateRequest() = default;

void ShowNodeConfigTemplateRequest::validate()
{
}

web::json::value ShowNodeConfigTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeconfigtemplateNameIsSet_) {
        val[utility::conversions::to_string_t("nodeconfigtemplate_name")] = ModelBase::toJson(nodeconfigtemplateName_);
    }

    return val;
}
bool ShowNodeConfigTemplateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("nodeconfigtemplate_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodeconfigtemplate_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeconfigtemplateName(refVal);
        }
    }
    return ok;
}


std::string ShowNodeConfigTemplateRequest::getNodeconfigtemplateName() const
{
    return nodeconfigtemplateName_;
}

void ShowNodeConfigTemplateRequest::setNodeconfigtemplateName(const std::string& value)
{
    nodeconfigtemplateName_ = value;
    nodeconfigtemplateNameIsSet_ = true;
}

bool ShowNodeConfigTemplateRequest::nodeconfigtemplateNameIsSet() const
{
    return nodeconfigtemplateNameIsSet_;
}

void ShowNodeConfigTemplateRequest::unsetnodeconfigtemplateName()
{
    nodeconfigtemplateNameIsSet_ = false;
}

}
}
}
}
}


