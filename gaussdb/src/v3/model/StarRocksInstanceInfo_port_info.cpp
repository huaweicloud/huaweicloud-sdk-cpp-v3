

#include "huaweicloud/gaussdb/v3/model/StarRocksInstanceInfo_port_info.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




StarRocksInstanceInfo_port_info::StarRocksInstanceInfo_port_info()
{
    mysqlPort_ = 0;
    mysqlPortIsSet_ = false;
}

StarRocksInstanceInfo_port_info::~StarRocksInstanceInfo_port_info() = default;

void StarRocksInstanceInfo_port_info::validate()
{
}

web::json::value StarRocksInstanceInfo_port_info::toJson() const
{
    web::json::value val = web::json::value::object();

    if(mysqlPortIsSet_) {
        val[utility::conversions::to_string_t("mysql_port")] = ModelBase::toJson(mysqlPort_);
    }

    return val;
}
bool StarRocksInstanceInfo_port_info::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("mysql_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mysql_port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMysqlPort(refVal);
        }
    }
    return ok;
}


int32_t StarRocksInstanceInfo_port_info::getMysqlPort() const
{
    return mysqlPort_;
}

void StarRocksInstanceInfo_port_info::setMysqlPort(int32_t value)
{
    mysqlPort_ = value;
    mysqlPortIsSet_ = true;
}

bool StarRocksInstanceInfo_port_info::mysqlPortIsSet() const
{
    return mysqlPortIsSet_;
}

void StarRocksInstanceInfo_port_info::unsetmysqlPort()
{
    mysqlPortIsSet_ = false;
}

}
}
}
}
}


