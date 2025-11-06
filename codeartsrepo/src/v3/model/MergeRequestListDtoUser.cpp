

#include "huaweicloud/codeartsrepo/v3/model/MergeRequestListDtoUser.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




MergeRequestListDtoUser::MergeRequestListDtoUser()
{
    canMerge_ = false;
    canMergeIsSet_ = false;
}

MergeRequestListDtoUser::~MergeRequestListDtoUser() = default;

void MergeRequestListDtoUser::validate()
{
}

web::json::value MergeRequestListDtoUser::toJson() const
{
    web::json::value val = web::json::value::object();

    if(canMergeIsSet_) {
        val[utility::conversions::to_string_t("can_merge")] = ModelBase::toJson(canMerge_);
    }

    return val;
}
bool MergeRequestListDtoUser::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("can_merge"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("can_merge"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanMerge(refVal);
        }
    }
    return ok;
}


bool MergeRequestListDtoUser::isCanMerge() const
{
    return canMerge_;
}

void MergeRequestListDtoUser::setCanMerge(bool value)
{
    canMerge_ = value;
    canMergeIsSet_ = true;
}

bool MergeRequestListDtoUser::canMergeIsSet() const
{
    return canMergeIsSet_;
}

void MergeRequestListDtoUser::unsetcanMerge()
{
    canMergeIsSet_ = false;
}

}
}
}
}
}


