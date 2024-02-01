

#include "huaweicloud/gaussdb/v3/model/MysqlTdeInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




MysqlTdeInfo::MysqlTdeInfo()
{
    enableTde_ = false;
    enableTdeIsSet_ = false;
    encryptionType_ = "";
    encryptionTypeIsSet_ = false;
}

MysqlTdeInfo::~MysqlTdeInfo() = default;

void MysqlTdeInfo::validate()
{
}

web::json::value MysqlTdeInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enableTdeIsSet_) {
        val[utility::conversions::to_string_t("enable_tde")] = ModelBase::toJson(enableTde_);
    }
    if(encryptionTypeIsSet_) {
        val[utility::conversions::to_string_t("encryption_type")] = ModelBase::toJson(encryptionType_);
    }

    return val;
}
bool MysqlTdeInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enable_tde"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_tde"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableTde(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("encryption_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("encryption_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEncryptionType(refVal);
        }
    }
    return ok;
}


bool MysqlTdeInfo::isEnableTde() const
{
    return enableTde_;
}

void MysqlTdeInfo::setEnableTde(bool value)
{
    enableTde_ = value;
    enableTdeIsSet_ = true;
}

bool MysqlTdeInfo::enableTdeIsSet() const
{
    return enableTdeIsSet_;
}

void MysqlTdeInfo::unsetenableTde()
{
    enableTdeIsSet_ = false;
}

std::string MysqlTdeInfo::getEncryptionType() const
{
    return encryptionType_;
}

void MysqlTdeInfo::setEncryptionType(const std::string& value)
{
    encryptionType_ = value;
    encryptionTypeIsSet_ = true;
}

bool MysqlTdeInfo::encryptionTypeIsSet() const
{
    return encryptionTypeIsSet_;
}

void MysqlTdeInfo::unsetencryptionType()
{
    encryptionTypeIsSet_ = false;
}

}
}
}
}
}


