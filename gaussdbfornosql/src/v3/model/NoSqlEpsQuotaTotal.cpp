

#include "huaweicloud/gaussdbfornosql/v3/model/NoSqlEpsQuotaTotal.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




NoSqlEpsQuotaTotal::NoSqlEpsQuotaTotal()
{
    instance_ = 0;
    instanceIsSet_ = false;
    vcpus_ = 0;
    vcpusIsSet_ = false;
    ram_ = 0;
    ramIsSet_ = false;
}

NoSqlEpsQuotaTotal::~NoSqlEpsQuotaTotal() = default;

void NoSqlEpsQuotaTotal::validate()
{
}

web::json::value NoSqlEpsQuotaTotal::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIsSet_) {
        val[utility::conversions::to_string_t("instance")] = ModelBase::toJson(instance_);
    }
    if(vcpusIsSet_) {
        val[utility::conversions::to_string_t("vcpus")] = ModelBase::toJson(vcpus_);
    }
    if(ramIsSet_) {
        val[utility::conversions::to_string_t("ram")] = ModelBase::toJson(ram_);
    }

    return val;
}

bool NoSqlEpsQuotaTotal::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstance(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vcpus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vcpus"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVcpus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ram"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ram"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRam(refVal);
        }
    }
    return ok;
}

int32_t NoSqlEpsQuotaTotal::getInstance() const
{
    return instance_;
}

void NoSqlEpsQuotaTotal::setInstance(int32_t value)
{
    instance_ = value;
    instanceIsSet_ = true;
}

bool NoSqlEpsQuotaTotal::instanceIsSet() const
{
    return instanceIsSet_;
}

void NoSqlEpsQuotaTotal::unsetinstance()
{
    instanceIsSet_ = false;
}

int32_t NoSqlEpsQuotaTotal::getVcpus() const
{
    return vcpus_;
}

void NoSqlEpsQuotaTotal::setVcpus(int32_t value)
{
    vcpus_ = value;
    vcpusIsSet_ = true;
}

bool NoSqlEpsQuotaTotal::vcpusIsSet() const
{
    return vcpusIsSet_;
}

void NoSqlEpsQuotaTotal::unsetvcpus()
{
    vcpusIsSet_ = false;
}

int32_t NoSqlEpsQuotaTotal::getRam() const
{
    return ram_;
}

void NoSqlEpsQuotaTotal::setRam(int32_t value)
{
    ram_ = value;
    ramIsSet_ = true;
}

bool NoSqlEpsQuotaTotal::ramIsSet() const
{
    return ramIsSet_;
}

void NoSqlEpsQuotaTotal::unsetram()
{
    ramIsSet_ = false;
}

}
}
}
}
}


