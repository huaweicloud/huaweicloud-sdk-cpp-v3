

#include "huaweicloud/tms/v1/model/ModifyPrefineTag.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




ModifyPrefineTag::ModifyPrefineTag()
{
    newTagIsSet_ = false;
    oldTagIsSet_ = false;
}

ModifyPrefineTag::~ModifyPrefineTag() = default;

void ModifyPrefineTag::validate()
{
}

web::json::value ModifyPrefineTag::toJson() const
{
    web::json::value val = web::json::value::object();

    if(newTagIsSet_) {
        val[utility::conversions::to_string_t("new_tag")] = ModelBase::toJson(newTag_);
    }
    if(oldTagIsSet_) {
        val[utility::conversions::to_string_t("old_tag")] = ModelBase::toJson(oldTag_);
    }

    return val;
}

bool ModifyPrefineTag::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("new_tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new_tag"));
        if(!fieldValue.is_null())
        {
            PredefineTagRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewTag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("old_tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("old_tag"));
        if(!fieldValue.is_null())
        {
            PredefineTagRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOldTag(refVal);
        }
    }
    return ok;
}


PredefineTagRequest ModifyPrefineTag::getNewTag() const
{
    return newTag_;
}

void ModifyPrefineTag::setNewTag(const PredefineTagRequest& value)
{
    newTag_ = value;
    newTagIsSet_ = true;
}

bool ModifyPrefineTag::newTagIsSet() const
{
    return newTagIsSet_;
}

void ModifyPrefineTag::unsetnewTag()
{
    newTagIsSet_ = false;
}

PredefineTagRequest ModifyPrefineTag::getOldTag() const
{
    return oldTag_;
}

void ModifyPrefineTag::setOldTag(const PredefineTagRequest& value)
{
    oldTag_ = value;
    oldTagIsSet_ = true;
}

bool ModifyPrefineTag::oldTagIsSet() const
{
    return oldTagIsSet_;
}

void ModifyPrefineTag::unsetoldTag()
{
    oldTagIsSet_ = false;
}

}
}
}
}
}


