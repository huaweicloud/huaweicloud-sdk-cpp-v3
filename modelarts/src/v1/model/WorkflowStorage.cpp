

#include "huaweicloud/modelarts/v1/model/WorkflowStorage.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




WorkflowStorage::WorkflowStorage()
{
    name_ = "";
    nameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    path_ = "";
    pathIsSet_ = false;
}

WorkflowStorage::~WorkflowStorage() = default;

void WorkflowStorage::validate()
{
}

web::json::value WorkflowStorage::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(pathIsSet_) {
        val[utility::conversions::to_string_t("path")] = ModelBase::toJson(path_);
    }

    return val;
}
bool WorkflowStorage::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPath(refVal);
        }
    }
    return ok;
}


std::string WorkflowStorage::getName() const
{
    return name_;
}

void WorkflowStorage::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool WorkflowStorage::nameIsSet() const
{
    return nameIsSet_;
}

void WorkflowStorage::unsetname()
{
    nameIsSet_ = false;
}

std::string WorkflowStorage::getType() const
{
    return type_;
}

void WorkflowStorage::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool WorkflowStorage::typeIsSet() const
{
    return typeIsSet_;
}

void WorkflowStorage::unsettype()
{
    typeIsSet_ = false;
}

std::string WorkflowStorage::getPath() const
{
    return path_;
}

void WorkflowStorage::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool WorkflowStorage::pathIsSet() const
{
    return pathIsSet_;
}

void WorkflowStorage::unsetpath()
{
    pathIsSet_ = false;
}

}
}
}
}
}


