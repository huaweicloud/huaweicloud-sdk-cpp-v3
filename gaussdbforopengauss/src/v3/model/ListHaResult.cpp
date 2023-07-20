

#include "huaweicloud/gaussdbforopengauss/v3/model/ListHaResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListHaResult::ListHaResult()
{
    consistency_ = "";
    consistencyIsSet_ = false;
    replicationMode_ = "";
    replicationModeIsSet_ = false;
}

ListHaResult::~ListHaResult() = default;

void ListHaResult::validate()
{
}

web::json::value ListHaResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(consistencyIsSet_) {
        val[utility::conversions::to_string_t("consistency")] = ModelBase::toJson(consistency_);
    }
    if(replicationModeIsSet_) {
        val[utility::conversions::to_string_t("replication_mode")] = ModelBase::toJson(replicationMode_);
    }

    return val;
}

bool ListHaResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("consistency"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("consistency"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConsistency(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("replication_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replication_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplicationMode(refVal);
        }
    }
    return ok;
}

std::string ListHaResult::getConsistency() const
{
    return consistency_;
}

void ListHaResult::setConsistency(const std::string& value)
{
    consistency_ = value;
    consistencyIsSet_ = true;
}

bool ListHaResult::consistencyIsSet() const
{
    return consistencyIsSet_;
}

void ListHaResult::unsetconsistency()
{
    consistencyIsSet_ = false;
}

std::string ListHaResult::getReplicationMode() const
{
    return replicationMode_;
}

void ListHaResult::setReplicationMode(const std::string& value)
{
    replicationMode_ = value;
    replicationModeIsSet_ = true;
}

bool ListHaResult::replicationModeIsSet() const
{
    return replicationModeIsSet_;
}

void ListHaResult::unsetreplicationMode()
{
    replicationModeIsSet_ = false;
}

}
}
}
}
}


