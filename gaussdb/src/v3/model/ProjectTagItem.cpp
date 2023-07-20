

#include "huaweicloud/gaussdb/v3/model/ProjectTagItem.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ProjectTagItem::ProjectTagItem()
{
    key_ = "";
    keyIsSet_ = false;
    valuesIsSet_ = false;
}

ProjectTagItem::~ProjectTagItem() = default;

void ProjectTagItem::validate()
{
}

web::json::value ProjectTagItem::toJson() const
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

bool ProjectTagItem::fromJson(const web::json::value& val)
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

std::string ProjectTagItem::getKey() const
{
    return key_;
}

void ProjectTagItem::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool ProjectTagItem::keyIsSet() const
{
    return keyIsSet_;
}

void ProjectTagItem::unsetkey()
{
    keyIsSet_ = false;
}

std::vector<std::string>& ProjectTagItem::getValues()
{
    return values_;
}

void ProjectTagItem::setValues(const std::vector<std::string>& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool ProjectTagItem::valuesIsSet() const
{
    return valuesIsSet_;
}

void ProjectTagItem::unsetvalues()
{
    valuesIsSet_ = false;
}

}
}
}
}
}


