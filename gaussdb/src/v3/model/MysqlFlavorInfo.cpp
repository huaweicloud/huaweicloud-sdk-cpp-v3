

#include "huaweicloud/gaussdb/v3/model/MysqlFlavorInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




MysqlFlavorInfo::MysqlFlavorInfo()
{
    vcpus_ = "";
    vcpusIsSet_ = false;
    ram_ = "";
    ramIsSet_ = false;
}

MysqlFlavorInfo::~MysqlFlavorInfo() = default;

void MysqlFlavorInfo::validate()
{
}

web::json::value MysqlFlavorInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vcpusIsSet_) {
        val[utility::conversions::to_string_t("vcpus")] = ModelBase::toJson(vcpus_);
    }
    if(ramIsSet_) {
        val[utility::conversions::to_string_t("ram")] = ModelBase::toJson(ram_);
    }

    return val;
}
bool MysqlFlavorInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("vcpus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vcpus"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVcpus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ram"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ram"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRam(refVal);
        }
    }
    return ok;
}


std::string MysqlFlavorInfo::getVcpus() const
{
    return vcpus_;
}

void MysqlFlavorInfo::setVcpus(const std::string& value)
{
    vcpus_ = value;
    vcpusIsSet_ = true;
}

bool MysqlFlavorInfo::vcpusIsSet() const
{
    return vcpusIsSet_;
}

void MysqlFlavorInfo::unsetvcpus()
{
    vcpusIsSet_ = false;
}

std::string MysqlFlavorInfo::getRam() const
{
    return ram_;
}

void MysqlFlavorInfo::setRam(const std::string& value)
{
    ram_ = value;
    ramIsSet_ = true;
}

bool MysqlFlavorInfo::ramIsSet() const
{
    return ramIsSet_;
}

void MysqlFlavorInfo::unsetram()
{
    ramIsSet_ = false;
}

}
}
}
}
}


