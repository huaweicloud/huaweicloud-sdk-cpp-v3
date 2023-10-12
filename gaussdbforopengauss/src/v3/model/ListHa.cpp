

#include "huaweicloud/gaussdbforopengauss/v3/model/ListHa.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListHa::ListHa()
{
    consistency_ = "";
    consistencyIsSet_ = false;
    replicationMode_ = "";
    replicationModeIsSet_ = false;
}

ListHa::~ListHa() = default;

void ListHa::validate()
{
}

web::json::value ListHa::toJson() const
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
bool ListHa::fromJson(const web::json::value& val)
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


std::string ListHa::getConsistency() const
{
    return consistency_;
}

void ListHa::setConsistency(const std::string& value)
{
    consistency_ = value;
    consistencyIsSet_ = true;
}

bool ListHa::consistencyIsSet() const
{
    return consistencyIsSet_;
}

void ListHa::unsetconsistency()
{
    consistencyIsSet_ = false;
}

std::string ListHa::getReplicationMode() const
{
    return replicationMode_;
}

void ListHa::setReplicationMode(const std::string& value)
{
    replicationMode_ = value;
    replicationModeIsSet_ = true;
}

bool ListHa::replicationModeIsSet() const
{
    return replicationModeIsSet_;
}

void ListHa::unsetreplicationMode()
{
    replicationModeIsSet_ = false;
}

}
}
}
}
}


