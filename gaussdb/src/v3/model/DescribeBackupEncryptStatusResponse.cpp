

#include "huaweicloud/gaussdb/v3/model/DescribeBackupEncryptStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DescribeBackupEncryptStatusResponse::DescribeBackupEncryptStatusResponse()
{
    encryptionStatus_ = "";
    encryptionStatusIsSet_ = false;
}

DescribeBackupEncryptStatusResponse::~DescribeBackupEncryptStatusResponse() = default;

void DescribeBackupEncryptStatusResponse::validate()
{
}

web::json::value DescribeBackupEncryptStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(encryptionStatusIsSet_) {
        val[utility::conversions::to_string_t("encryption_status")] = ModelBase::toJson(encryptionStatus_);
    }

    return val;
}
bool DescribeBackupEncryptStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("encryption_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("encryption_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEncryptionStatus(refVal);
        }
    }
    return ok;
}


std::string DescribeBackupEncryptStatusResponse::getEncryptionStatus() const
{
    return encryptionStatus_;
}

void DescribeBackupEncryptStatusResponse::setEncryptionStatus(const std::string& value)
{
    encryptionStatus_ = value;
    encryptionStatusIsSet_ = true;
}

bool DescribeBackupEncryptStatusResponse::encryptionStatusIsSet() const
{
    return encryptionStatusIsSet_;
}

void DescribeBackupEncryptStatusResponse::unsetencryptionStatus()
{
    encryptionStatusIsSet_ = false;
}

}
}
}
}
}


