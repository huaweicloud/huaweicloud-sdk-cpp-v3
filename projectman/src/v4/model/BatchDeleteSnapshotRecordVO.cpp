

#include "huaweicloud/projectman/v4/model/BatchDeleteSnapshotRecordVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BatchDeleteSnapshotRecordVO::BatchDeleteSnapshotRecordVO()
{
    idsIsSet_ = false;
}

BatchDeleteSnapshotRecordVO::~BatchDeleteSnapshotRecordVO() = default;

void BatchDeleteSnapshotRecordVO::validate()
{
}

web::json::value BatchDeleteSnapshotRecordVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idsIsSet_) {
        val[utility::conversions::to_string_t("ids")] = ModelBase::toJson(ids_);
    }

    return val;
}
bool BatchDeleteSnapshotRecordVO::fromJson(const web::json::value& val)
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
    return ok;
}


std::vector<std::string>& BatchDeleteSnapshotRecordVO::getIds()
{
    return ids_;
}

void BatchDeleteSnapshotRecordVO::setIds(const std::vector<std::string>& value)
{
    ids_ = value;
    idsIsSet_ = true;
}

bool BatchDeleteSnapshotRecordVO::idsIsSet() const
{
    return idsIsSet_;
}

void BatchDeleteSnapshotRecordVO::unsetids()
{
    idsIsSet_ = false;
}

}
}
}
}
}


