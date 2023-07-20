

#include "huaweicloud/gaussdbforopengauss/v3/model/ParamGroupCopyRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ParamGroupCopyRequestBody::ParamGroupCopyRequestBody()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

ParamGroupCopyRequestBody::~ParamGroupCopyRequestBody() = default;

void ParamGroupCopyRequestBody::validate()
{
}

web::json::value ParamGroupCopyRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}

bool ParamGroupCopyRequestBody::fromJson(const web::json::value& val)
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

std::string ParamGroupCopyRequestBody::getName() const
{
    return name_;
}

void ParamGroupCopyRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ParamGroupCopyRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void ParamGroupCopyRequestBody::unsetname()
{
    nameIsSet_ = false;
}

std::string ParamGroupCopyRequestBody::getDescription() const
{
    return description_;
}

void ParamGroupCopyRequestBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ParamGroupCopyRequestBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ParamGroupCopyRequestBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


