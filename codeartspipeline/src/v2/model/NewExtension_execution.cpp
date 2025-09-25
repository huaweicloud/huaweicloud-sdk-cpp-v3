

#include "huaweicloud/codeartspipeline/v2/model/NewExtension_execution.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




NewExtension_execution::NewExtension_execution()
{
    target_ = "";
    targetIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    sha256_ = "";
    sha256IsSet_ = false;
}

NewExtension_execution::~NewExtension_execution() = default;

void NewExtension_execution::validate()
{
}

web::json::value NewExtension_execution::toJson() const
{
    web::json::value val = web::json::value::object();

    if(targetIsSet_) {
        val[utility::conversions::to_string_t("target")] = ModelBase::toJson(target_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(sha256IsSet_) {
        val[utility::conversions::to_string_t("sha256")] = ModelBase::toJson(sha256_);
    }

    return val;
}
bool NewExtension_execution::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("target"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTarget(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("sha256"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sha256"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSha256(refVal);
        }
    }
    return ok;
}


std::string NewExtension_execution::getTarget() const
{
    return target_;
}

void NewExtension_execution::setTarget(const std::string& value)
{
    target_ = value;
    targetIsSet_ = true;
}

bool NewExtension_execution::targetIsSet() const
{
    return targetIsSet_;
}

void NewExtension_execution::unsettarget()
{
    targetIsSet_ = false;
}

std::string NewExtension_execution::getType() const
{
    return type_;
}

void NewExtension_execution::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool NewExtension_execution::typeIsSet() const
{
    return typeIsSet_;
}

void NewExtension_execution::unsettype()
{
    typeIsSet_ = false;
}

std::string NewExtension_execution::getSha256() const
{
    return sha256_;
}

void NewExtension_execution::setSha256(const std::string& value)
{
    sha256_ = value;
    sha256IsSet_ = true;
}

bool NewExtension_execution::sha256IsSet() const
{
    return sha256IsSet_;
}

void NewExtension_execution::unsetsha256()
{
    sha256IsSet_ = false;
}

}
}
}
}
}


