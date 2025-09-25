

#include "huaweicloud/codeartspipeline/v2/model/PluginExecutionVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




PluginExecutionVO::PluginExecutionVO()
{
    type_ = "";
    typeIsSet_ = false;
    target_ = "";
    targetIsSet_ = false;
    filePath_ = "";
    filePathIsSet_ = false;
}

PluginExecutionVO::~PluginExecutionVO() = default;

void PluginExecutionVO::validate()
{
}

web::json::value PluginExecutionVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(targetIsSet_) {
        val[utility::conversions::to_string_t("target")] = ModelBase::toJson(target_);
    }
    if(filePathIsSet_) {
        val[utility::conversions::to_string_t("file_path")] = ModelBase::toJson(filePath_);
    }

    return val;
}
bool PluginExecutionVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTarget(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilePath(refVal);
        }
    }
    return ok;
}


std::string PluginExecutionVO::getType() const
{
    return type_;
}

void PluginExecutionVO::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool PluginExecutionVO::typeIsSet() const
{
    return typeIsSet_;
}

void PluginExecutionVO::unsettype()
{
    typeIsSet_ = false;
}

std::string PluginExecutionVO::getTarget() const
{
    return target_;
}

void PluginExecutionVO::setTarget(const std::string& value)
{
    target_ = value;
    targetIsSet_ = true;
}

bool PluginExecutionVO::targetIsSet() const
{
    return targetIsSet_;
}

void PluginExecutionVO::unsettarget()
{
    targetIsSet_ = false;
}

std::string PluginExecutionVO::getFilePath() const
{
    return filePath_;
}

void PluginExecutionVO::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool PluginExecutionVO::filePathIsSet() const
{
    return filePathIsSet_;
}

void PluginExecutionVO::unsetfilePath()
{
    filePathIsSet_ = false;
}

}
}
}
}
}


