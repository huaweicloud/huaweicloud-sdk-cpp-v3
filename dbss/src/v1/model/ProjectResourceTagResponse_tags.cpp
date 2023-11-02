

#include "huaweicloud/dbss/v1/model/ProjectResourceTagResponse_tags.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ProjectResourceTagResponse_tags::ProjectResourceTagResponse_tags()
{
    key_ = "";
    keyIsSet_ = false;
    valuesIsSet_ = false;
}

ProjectResourceTagResponse_tags::~ProjectResourceTagResponse_tags() = default;

void ProjectResourceTagResponse_tags::validate()
{
}

web::json::value ProjectResourceTagResponse_tags::toJson() const
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
bool ProjectResourceTagResponse_tags::fromJson(const web::json::value& val)
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


std::string ProjectResourceTagResponse_tags::getKey() const
{
    return key_;
}

void ProjectResourceTagResponse_tags::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool ProjectResourceTagResponse_tags::keyIsSet() const
{
    return keyIsSet_;
}

void ProjectResourceTagResponse_tags::unsetkey()
{
    keyIsSet_ = false;
}

std::vector<std::string>& ProjectResourceTagResponse_tags::getValues()
{
    return values_;
}

void ProjectResourceTagResponse_tags::setValues(const std::vector<std::string>& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool ProjectResourceTagResponse_tags::valuesIsSet() const
{
    return valuesIsSet_;
}

void ProjectResourceTagResponse_tags::unsetvalues()
{
    valuesIsSet_ = false;
}

}
}
}
}
}


