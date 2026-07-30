

#include "huaweicloud/modelarts/v1/model/ListPluginTemplatesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListPluginTemplatesRequest::ListPluginTemplatesRequest()
{
    templateName_ = "";
    templateNameIsSet_ = false;
    poolName_ = "";
    poolNameIsSet_ = false;
}

ListPluginTemplatesRequest::~ListPluginTemplatesRequest() = default;

void ListPluginTemplatesRequest::validate()
{
}

web::json::value ListPluginTemplatesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templateNameIsSet_) {
        val[utility::conversions::to_string_t("templateName")] = ModelBase::toJson(templateName_);
    }
    if(poolNameIsSet_) {
        val[utility::conversions::to_string_t("poolName")] = ModelBase::toJson(poolName_);
    }

    return val;
}
bool ListPluginTemplatesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("templateName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("templateName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("poolName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("poolName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPoolName(refVal);
        }
    }
    return ok;
}


std::string ListPluginTemplatesRequest::getTemplateName() const
{
    return templateName_;
}

void ListPluginTemplatesRequest::setTemplateName(const std::string& value)
{
    templateName_ = value;
    templateNameIsSet_ = true;
}

bool ListPluginTemplatesRequest::templateNameIsSet() const
{
    return templateNameIsSet_;
}

void ListPluginTemplatesRequest::unsettemplateName()
{
    templateNameIsSet_ = false;
}

std::string ListPluginTemplatesRequest::getPoolName() const
{
    return poolName_;
}

void ListPluginTemplatesRequest::setPoolName(const std::string& value)
{
    poolName_ = value;
    poolNameIsSet_ = true;
}

bool ListPluginTemplatesRequest::poolNameIsSet() const
{
    return poolNameIsSet_;
}

void ListPluginTemplatesRequest::unsetpoolName()
{
    poolNameIsSet_ = false;
}

}
}
}
}
}


