

#include "huaweicloud/projectman/v4/model/WorkflowTemplateNodesVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




WorkflowTemplateNodesVO::WorkflowTemplateNodesVO()
{
    code_ = "";
    codeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

WorkflowTemplateNodesVO::~WorkflowTemplateNodesVO() = default;

void WorkflowTemplateNodesVO::validate()
{
}

web::json::value WorkflowTemplateNodesVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool WorkflowTemplateNodesVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


std::string WorkflowTemplateNodesVO::getCode() const
{
    return code_;
}

void WorkflowTemplateNodesVO::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool WorkflowTemplateNodesVO::codeIsSet() const
{
    return codeIsSet_;
}

void WorkflowTemplateNodesVO::unsetcode()
{
    codeIsSet_ = false;
}

std::string WorkflowTemplateNodesVO::getName() const
{
    return name_;
}

void WorkflowTemplateNodesVO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool WorkflowTemplateNodesVO::nameIsSet() const
{
    return nameIsSet_;
}

void WorkflowTemplateNodesVO::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


