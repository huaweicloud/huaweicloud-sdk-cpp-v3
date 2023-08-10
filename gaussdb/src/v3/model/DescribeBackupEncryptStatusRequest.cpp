

#include "huaweicloud/gaussdb/v3/model/DescribeBackupEncryptStatusRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DescribeBackupEncryptStatusRequest::DescribeBackupEncryptStatusRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

DescribeBackupEncryptStatusRequest::~DescribeBackupEncryptStatusRequest() = default;

void DescribeBackupEncryptStatusRequest::validate()
{
}

web::json::value DescribeBackupEncryptStatusRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}

bool DescribeBackupEncryptStatusRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    return ok;
}

std::string DescribeBackupEncryptStatusRequest::getXLanguage() const
{
    return xLanguage_;
}

void DescribeBackupEncryptStatusRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DescribeBackupEncryptStatusRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DescribeBackupEncryptStatusRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string DescribeBackupEncryptStatusRequest::getInstanceId() const
{
    return instanceId_;
}

void DescribeBackupEncryptStatusRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DescribeBackupEncryptStatusRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DescribeBackupEncryptStatusRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


