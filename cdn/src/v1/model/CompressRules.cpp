

#include "huaweicloud/cdn/v1/model/CompressRules.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




CompressRules::CompressRules()
{
    compressType_ = "";
    compressTypeIsSet_ = false;
    compressFileType_ = "";
    compressFileTypeIsSet_ = false;
}

CompressRules::~CompressRules() = default;

void CompressRules::validate()
{
}

web::json::value CompressRules::toJson() const
{
    web::json::value val = web::json::value::object();

    if(compressTypeIsSet_) {
        val[utility::conversions::to_string_t("compress_type")] = ModelBase::toJson(compressType_);
    }
    if(compressFileTypeIsSet_) {
        val[utility::conversions::to_string_t("compress_file_type")] = ModelBase::toJson(compressFileType_);
    }

    return val;
}

bool CompressRules::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("compress_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compress_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompressType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("compress_file_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compress_file_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompressFileType(refVal);
        }
    }
    return ok;
}

std::string CompressRules::getCompressType() const
{
    return compressType_;
}

void CompressRules::setCompressType(const std::string& value)
{
    compressType_ = value;
    compressTypeIsSet_ = true;
}

bool CompressRules::compressTypeIsSet() const
{
    return compressTypeIsSet_;
}

void CompressRules::unsetcompressType()
{
    compressTypeIsSet_ = false;
}

std::string CompressRules::getCompressFileType() const
{
    return compressFileType_;
}

void CompressRules::setCompressFileType(const std::string& value)
{
    compressFileType_ = value;
    compressFileTypeIsSet_ = true;
}

bool CompressRules::compressFileTypeIsSet() const
{
    return compressFileTypeIsSet_;
}

void CompressRules::unsetcompressFileType()
{
    compressFileTypeIsSet_ = false;
}

}
}
}
}
}


