

#include "huaweicloud/modelarts/v1/model/DevServerJobItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DevServerJobItem::DevServerJobItem()
{
    type_ = "";
    typeIsSet_ = false;
    specIsSet_ = false;
}

DevServerJobItem::~DevServerJobItem() = default;

void DevServerJobItem::validate()
{
}

web::json::value DevServerJobItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(specIsSet_) {
        val[utility::conversions::to_string_t("spec")] = ModelBase::toJson(spec_);
    }

    return val;
}
bool DevServerJobItem::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    return ok;
}


std::string DevServerJobItem::getType() const
{
    return type_;
}

void DevServerJobItem::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool DevServerJobItem::typeIsSet() const
{
    return typeIsSet_;
}

void DevServerJobItem::unsettype()
{
    typeIsSet_ = false;
}

std::map<std::string, std::string>& DevServerJobItem::getSpec()
{
    return spec_;
}

void DevServerJobItem::setSpec(const std::map<std::string, std::string>& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool DevServerJobItem::specIsSet() const
{
    return specIsSet_;
}

void DevServerJobItem::unsetspec()
{
    specIsSet_ = false;
}

}
}
}
}
}


