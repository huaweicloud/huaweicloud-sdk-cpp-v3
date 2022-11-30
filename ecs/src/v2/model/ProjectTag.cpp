

#include "huaweicloud/ecs/v2/model/ProjectTag.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ProjectTag::ProjectTag()
{
    key_ = "";
    keyIsSet_ = false;
    valuesIsSet_ = false;
}

ProjectTag::~ProjectTag() = default;

void ProjectTag::validate()
{
}

web::json::value ProjectTag::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(valuesIsSet_) {
        val[utility::conversions::to_string_t("values")] = ModelBase::toJson(values_);
    }

    return val;
}

bool ProjectTag::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("values"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("values"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValues(refVal);
        }
    }
    return ok;
}


std::string ProjectTag::getKey() const
{
    return key_;
}

void ProjectTag::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool ProjectTag::keyIsSet() const
{
    return keyIsSet_;
}

void ProjectTag::unsetkey()
{
    keyIsSet_ = false;
}

std::vector<std::string>& ProjectTag::getValues()
{
    return values_;
}

void ProjectTag::setValues(const std::vector<std::string>& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool ProjectTag::valuesIsSet() const
{
    return valuesIsSet_;
}

void ProjectTag::unsetvalues()
{
    valuesIsSet_ = false;
}

}
}
}
}
}


