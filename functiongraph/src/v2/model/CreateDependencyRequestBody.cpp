

#include "huaweicloud/functiongraph/v2/model/CreateDependencyRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




CreateDependencyRequestBody::CreateDependencyRequestBody()
{
    dependFile_ = "";
    dependFileIsSet_ = false;
    dependLink_ = "";
    dependLinkIsSet_ = false;
    dependType_ = "";
    dependTypeIsSet_ = false;
    runtime_ = "";
    runtimeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

CreateDependencyRequestBody::~CreateDependencyRequestBody() = default;

void CreateDependencyRequestBody::validate()
{
}

web::json::value CreateDependencyRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dependFileIsSet_) {
        val[utility::conversions::to_string_t("depend_file")] = ModelBase::toJson(dependFile_);
    }
    if(dependLinkIsSet_) {
        val[utility::conversions::to_string_t("depend_link")] = ModelBase::toJson(dependLink_);
    }
    if(dependTypeIsSet_) {
        val[utility::conversions::to_string_t("depend_type")] = ModelBase::toJson(dependType_);
    }
    if(runtimeIsSet_) {
        val[utility::conversions::to_string_t("runtime")] = ModelBase::toJson(runtime_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool CreateDependencyRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("depend_file"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("depend_file"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDependFile(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("depend_link"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("depend_link"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDependLink(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("depend_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("depend_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDependType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("runtime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("runtime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuntime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    return ok;
}


std::string CreateDependencyRequestBody::getDependFile() const
{
    return dependFile_;
}

void CreateDependencyRequestBody::setDependFile(const std::string& value)
{
    dependFile_ = value;
    dependFileIsSet_ = true;
}

bool CreateDependencyRequestBody::dependFileIsSet() const
{
    return dependFileIsSet_;
}

void CreateDependencyRequestBody::unsetdependFile()
{
    dependFileIsSet_ = false;
}

std::string CreateDependencyRequestBody::getDependLink() const
{
    return dependLink_;
}

void CreateDependencyRequestBody::setDependLink(const std::string& value)
{
    dependLink_ = value;
    dependLinkIsSet_ = true;
}

bool CreateDependencyRequestBody::dependLinkIsSet() const
{
    return dependLinkIsSet_;
}

void CreateDependencyRequestBody::unsetdependLink()
{
    dependLinkIsSet_ = false;
}

std::string CreateDependencyRequestBody::getDependType() const
{
    return dependType_;
}

void CreateDependencyRequestBody::setDependType(const std::string& value)
{
    dependType_ = value;
    dependTypeIsSet_ = true;
}

bool CreateDependencyRequestBody::dependTypeIsSet() const
{
    return dependTypeIsSet_;
}

void CreateDependencyRequestBody::unsetdependType()
{
    dependTypeIsSet_ = false;
}

std::string CreateDependencyRequestBody::getRuntime() const
{
    return runtime_;
}

void CreateDependencyRequestBody::setRuntime(const std::string& value)
{
    runtime_ = value;
    runtimeIsSet_ = true;
}

bool CreateDependencyRequestBody::runtimeIsSet() const
{
    return runtimeIsSet_;
}

void CreateDependencyRequestBody::unsetruntime()
{
    runtimeIsSet_ = false;
}

std::string CreateDependencyRequestBody::getName() const
{
    return name_;
}

void CreateDependencyRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateDependencyRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void CreateDependencyRequestBody::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateDependencyRequestBody::getDescription() const
{
    return description_;
}

void CreateDependencyRequestBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateDependencyRequestBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateDependencyRequestBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


