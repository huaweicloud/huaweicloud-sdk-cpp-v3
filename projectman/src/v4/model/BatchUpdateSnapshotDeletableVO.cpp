

#include "huaweicloud/projectman/v4/model/BatchUpdateSnapshotDeletableVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BatchUpdateSnapshotDeletableVO::BatchUpdateSnapshotDeletableVO()
{
    idsIsSet_ = false;
    deletable_ = false;
    deletableIsSet_ = false;
}

BatchUpdateSnapshotDeletableVO::~BatchUpdateSnapshotDeletableVO() = default;

void BatchUpdateSnapshotDeletableVO::validate()
{
}

web::json::value BatchUpdateSnapshotDeletableVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idsIsSet_) {
        val[utility::conversions::to_string_t("ids")] = ModelBase::toJson(ids_);
    }
    if(deletableIsSet_) {
        val[utility::conversions::to_string_t("deletable")] = ModelBase::toJson(deletable_);
    }

    return val;
}
bool BatchUpdateSnapshotDeletableVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deletable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deletable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeletable(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& BatchUpdateSnapshotDeletableVO::getIds()
{
    return ids_;
}

void BatchUpdateSnapshotDeletableVO::setIds(const std::vector<std::string>& value)
{
    ids_ = value;
    idsIsSet_ = true;
}

bool BatchUpdateSnapshotDeletableVO::idsIsSet() const
{
    return idsIsSet_;
}

void BatchUpdateSnapshotDeletableVO::unsetids()
{
    idsIsSet_ = false;
}

bool BatchUpdateSnapshotDeletableVO::isDeletable() const
{
    return deletable_;
}

void BatchUpdateSnapshotDeletableVO::setDeletable(bool value)
{
    deletable_ = value;
    deletableIsSet_ = true;
}

bool BatchUpdateSnapshotDeletableVO::deletableIsSet() const
{
    return deletableIsSet_;
}

void BatchUpdateSnapshotDeletableVO::unsetdeletable()
{
    deletableIsSet_ = false;
}

}
}
}
}
}


