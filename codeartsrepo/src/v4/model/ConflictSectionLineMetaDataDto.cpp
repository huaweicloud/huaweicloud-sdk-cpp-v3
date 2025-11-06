

#include "huaweicloud/codeartsrepo/v4/model/ConflictSectionLineMetaDataDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ConflictSectionLineMetaDataDto::ConflictSectionLineMetaDataDto()
{
    oldPos_ = 0;
    oldPosIsSet_ = false;
    newPos_ = 0;
    newPosIsSet_ = false;
}

ConflictSectionLineMetaDataDto::~ConflictSectionLineMetaDataDto() = default;

void ConflictSectionLineMetaDataDto::validate()
{
}

web::json::value ConflictSectionLineMetaDataDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(oldPosIsSet_) {
        val[utility::conversions::to_string_t("old_pos")] = ModelBase::toJson(oldPos_);
    }
    if(newPosIsSet_) {
        val[utility::conversions::to_string_t("new_pos")] = ModelBase::toJson(newPos_);
    }

    return val;
}
bool ConflictSectionLineMetaDataDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("old_pos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("old_pos"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOldPos(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("new_pos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new_pos"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewPos(refVal);
        }
    }
    return ok;
}


int32_t ConflictSectionLineMetaDataDto::getOldPos() const
{
    return oldPos_;
}

void ConflictSectionLineMetaDataDto::setOldPos(int32_t value)
{
    oldPos_ = value;
    oldPosIsSet_ = true;
}

bool ConflictSectionLineMetaDataDto::oldPosIsSet() const
{
    return oldPosIsSet_;
}

void ConflictSectionLineMetaDataDto::unsetoldPos()
{
    oldPosIsSet_ = false;
}

int32_t ConflictSectionLineMetaDataDto::getNewPos() const
{
    return newPos_;
}

void ConflictSectionLineMetaDataDto::setNewPos(int32_t value)
{
    newPos_ = value;
    newPosIsSet_ = true;
}

bool ConflictSectionLineMetaDataDto::newPosIsSet() const
{
    return newPosIsSet_;
}

void ConflictSectionLineMetaDataDto::unsetnewPos()
{
    newPosIsSet_ = false;
}

}
}
}
}
}


