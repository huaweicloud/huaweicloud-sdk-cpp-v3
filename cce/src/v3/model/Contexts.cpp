

#include "huaweicloud/cce/v3/model/Contexts.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




Contexts::Contexts()
{
    name_ = "";
    nameIsSet_ = false;
    contextIsSet_ = false;
}

Contexts::~Contexts() = default;

void Contexts::validate()
{
}

web::json::value Contexts::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(contextIsSet_) {
        val[utility::conversions::to_string_t("context")] = ModelBase::toJson(context_);
    }

    return val;
}
bool Contexts::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("context"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("context"));
        if(!fieldValue.is_null())
        {
            Context refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContext(refVal);
        }
    }
    return ok;
}


std::string Contexts::getName() const
{
    return name_;
}

void Contexts::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Contexts::nameIsSet() const
{
    return nameIsSet_;
}

void Contexts::unsetname()
{
    nameIsSet_ = false;
}

Context Contexts::getContext() const
{
    return context_;
}

void Contexts::setContext(const Context& value)
{
    context_ = value;
    contextIsSet_ = true;
}

bool Contexts::contextIsSet() const
{
    return contextIsSet_;
}

void Contexts::unsetcontext()
{
    contextIsSet_ = false;
}

}
}
}
}
}


