

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
    attributeIsSet_ = false;
    memberof_ = "";
    memberofIsSet_ = false;
    lockStatus_ = false;
    lockStatusIsSet_ = false;
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
    if(attributeIsSet_) {
        val[utility::conversions::to_string_t("attribute")] = ModelBase::toJson(attribute_);
    }
    if(memberofIsSet_) {
        val[utility::conversions::to_string_t("memberof")] = ModelBase::toJson(memberof_);
    }
    if(lockStatusIsSet_) {
        val[utility::conversions::to_string_t("lock_status")] = ModelBase::toJson(lockStatus_);
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
    if(val.has_field(utility::conversions::to_string_t("attribute"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attribute"));
        if(!fieldValue.is_null())
        {
            GaussDBforOpenGaussUserForList_attribute refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttribute(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("lock_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lock_status"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLockStatus(refVal);
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

GaussDBforOpenGaussUserForList_attribute GaussDBforOpenGaussUserForList::getAttribute() const
{
    return attribute_;
}

void GaussDBforOpenGaussUserForList::setAttribute(const GaussDBforOpenGaussUserForList_attribute& value)
{
    attribute_ = value;
    attributeIsSet_ = true;
}

bool GaussDBforOpenGaussUserForList::attributeIsSet() const
{
    return attributeIsSet_;
}

void GaussDBforOpenGaussUserForList::unsetattribute()
{
    attributeIsSet_ = false;
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

bool GaussDBforOpenGaussUserForList::isLockStatus() const
{
    return lockStatus_;
}

void GaussDBforOpenGaussUserForList::setLockStatus(bool value)
{
    lockStatus_ = value;
    lockStatusIsSet_ = true;
}

bool GaussDBforOpenGaussUserForList::lockStatusIsSet() const
{
    return lockStatusIsSet_;
}

void GaussDBforOpenGaussUserForList::unsetlockStatus()
{
    lockStatusIsSet_ = false;
}

}
}
}
}
}


