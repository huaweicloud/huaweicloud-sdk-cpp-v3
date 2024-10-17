

#include "huaweicloud/dbss/v1/model/EcsSpecificationBean.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




EcsSpecificationBean::EcsSpecificationBean()
{
    azsIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    level_ = "";
    levelIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    proxy_ = 0;
    proxyIsSet_ = false;
    ram_ = 0;
    ramIsSet_ = false;
    vcpus_ = 0;
    vcpusIsSet_ = false;
    azType_ = "";
    azTypeIsSet_ = false;
}

EcsSpecificationBean::~EcsSpecificationBean() = default;

void EcsSpecificationBean::validate()
{
}

web::json::value EcsSpecificationBean::toJson() const
{
    web::json::value val = web::json::value::object();

    if(azsIsSet_) {
        val[utility::conversions::to_string_t("azs")] = ModelBase::toJson(azs_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(levelIsSet_) {
        val[utility::conversions::to_string_t("level")] = ModelBase::toJson(level_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(proxyIsSet_) {
        val[utility::conversions::to_string_t("proxy")] = ModelBase::toJson(proxy_);
    }
    if(ramIsSet_) {
        val[utility::conversions::to_string_t("ram")] = ModelBase::toJson(ram_);
    }
    if(vcpusIsSet_) {
        val[utility::conversions::to_string_t("vcpus")] = ModelBase::toJson(vcpus_);
    }
    if(azTypeIsSet_) {
        val[utility::conversions::to_string_t("az_type")] = ModelBase::toJson(azType_);
    }

    return val;
}
bool EcsSpecificationBean::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("azs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("azs"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAzs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("proxy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proxy"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProxy(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("vcpus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vcpus"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVcpus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("az_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("az_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAzType(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& EcsSpecificationBean::getAzs()
{
    return azs_;
}

void EcsSpecificationBean::setAzs(const std::vector<std::string>& value)
{
    azs_ = value;
    azsIsSet_ = true;
}

bool EcsSpecificationBean::azsIsSet() const
{
    return azsIsSet_;
}

void EcsSpecificationBean::unsetazs()
{
    azsIsSet_ = false;
}

std::string EcsSpecificationBean::getId() const
{
    return id_;
}

void EcsSpecificationBean::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool EcsSpecificationBean::idIsSet() const
{
    return idIsSet_;
}

void EcsSpecificationBean::unsetid()
{
    idIsSet_ = false;
}

std::string EcsSpecificationBean::getLevel() const
{
    return level_;
}

void EcsSpecificationBean::setLevel(const std::string& value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool EcsSpecificationBean::levelIsSet() const
{
    return levelIsSet_;
}

void EcsSpecificationBean::unsetlevel()
{
    levelIsSet_ = false;
}

std::string EcsSpecificationBean::getName() const
{
    return name_;
}

void EcsSpecificationBean::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool EcsSpecificationBean::nameIsSet() const
{
    return nameIsSet_;
}

void EcsSpecificationBean::unsetname()
{
    nameIsSet_ = false;
}

int32_t EcsSpecificationBean::getProxy() const
{
    return proxy_;
}

void EcsSpecificationBean::setProxy(int32_t value)
{
    proxy_ = value;
    proxyIsSet_ = true;
}

bool EcsSpecificationBean::proxyIsSet() const
{
    return proxyIsSet_;
}

void EcsSpecificationBean::unsetproxy()
{
    proxyIsSet_ = false;
}

int32_t EcsSpecificationBean::getRam() const
{
    return ram_;
}

void EcsSpecificationBean::setRam(int32_t value)
{
    ram_ = value;
    ramIsSet_ = true;
}

bool EcsSpecificationBean::ramIsSet() const
{
    return ramIsSet_;
}

void EcsSpecificationBean::unsetram()
{
    ramIsSet_ = false;
}

int32_t EcsSpecificationBean::getVcpus() const
{
    return vcpus_;
}

void EcsSpecificationBean::setVcpus(int32_t value)
{
    vcpus_ = value;
    vcpusIsSet_ = true;
}

bool EcsSpecificationBean::vcpusIsSet() const
{
    return vcpusIsSet_;
}

void EcsSpecificationBean::unsetvcpus()
{
    vcpusIsSet_ = false;
}

std::string EcsSpecificationBean::getAzType() const
{
    return azType_;
}

void EcsSpecificationBean::setAzType(const std::string& value)
{
    azType_ = value;
    azTypeIsSet_ = true;
}

bool EcsSpecificationBean::azTypeIsSet() const
{
    return azTypeIsSet_;
}

void EcsSpecificationBean::unsetazType()
{
    azTypeIsSet_ = false;
}

}
}
}
}
}


