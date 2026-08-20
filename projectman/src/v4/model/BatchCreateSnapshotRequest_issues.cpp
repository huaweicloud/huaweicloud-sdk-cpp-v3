

#include "huaweicloud/projectman/v4/model/BatchCreateSnapshotRequest_issues.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BatchCreateSnapshotRequest_issues::BatchCreateSnapshotRequest_issues()
{
    id_ = "";
    idIsSet_ = false;
}

BatchCreateSnapshotRequest_issues::~BatchCreateSnapshotRequest_issues() = default;

void BatchCreateSnapshotRequest_issues::validate()
{
}

web::json::value BatchCreateSnapshotRequest_issues::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool BatchCreateSnapshotRequest_issues::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    return ok;
}


std::string BatchCreateSnapshotRequest_issues::getId() const
{
    return id_;
}

void BatchCreateSnapshotRequest_issues::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool BatchCreateSnapshotRequest_issues::idIsSet() const
{
    return idIsSet_;
}

void BatchCreateSnapshotRequest_issues::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


