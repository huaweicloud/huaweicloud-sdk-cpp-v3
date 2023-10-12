

#include "huaweicloud/gaussdbforopengauss/v3/model/GaussDBforOpenGaussUserForList.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




GaussDBforOpenGaussUserForList::GaussDBforOpenGaussUserForList()
{
    name_ = "";
    nameIsSet_ = false;
    attributesIsSet_ = false;
    memberof_ = "";
    memberofIsSet_ = false;
}

GaussDBforOpenGaussUserForList::~GaussDBforOpenGaussUserForList() = default;

void GaussDBforOpenGaussUserForList::validate()
{
}

web::json::value GaussDBforOpenGaussUserForList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(attributesIsSet_) {
        val[utility::conversions::to_string_t("attributes")] = ModelBase::toJson(attributes_);
    }
    if(memberofIsSet_) {
        val[utility::conversions::to_string_t("memberof")] = ModelBase::toJson(memberof_);
    }

    return val;
}
bool GaussDBforOpenGaussUserForList::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("attributes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attributes"));
        if(!fieldValue.is_null())
        {
            GaussDBforOpenGaussUserForList_attributes refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttributes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("memberof"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("memberof"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMemberof(refVal);
        }
    }
    return ok;
}


std::string GaussDBforOpenGaussUserForList::getName() const
{
    return name_;
}

void GaussDBforOpenGaussUserForList::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool GaussDBforOpenGaussUserForList::nameIsSet() const
{
    return nameIsSet_;
}

void GaussDBforOpenGaussUserForList::unsetname()
{
    nameIsSet_ = false;
}

GaussDBforOpenGaussUserForList_attributes GaussDBforOpenGaussUserForList::getAttributes() const
{
    return attributes_;
}

void GaussDBforOpenGaussUserForList::setAttributes(const GaussDBforOpenGaussUserForList_attributes& value)
{
    attributes_ = value;
    attributesIsSet_ = true;
}

bool GaussDBforOpenGaussUserForList::attributesIsSet() const
{
    return attributesIsSet_;
}

void GaussDBforOpenGaussUserForList::unsetattributes()
{
    attributesIsSet_ = false;
}

std::string GaussDBforOpenGaussUserForList::getMemberof() const
{
    return memberof_;
}

void GaussDBforOpenGaussUserForList::setMemberof(const std::string& value)
{
    memberof_ = value;
    memberofIsSet_ = true;
}

bool GaussDBforOpenGaussUserForList::memberofIsSet() const
{
    return memberofIsSet_;
}

void GaussDBforOpenGaussUserForList::unsetmemberof()
{
    memberofIsSet_ = false;
}

}
}
}
}
}


