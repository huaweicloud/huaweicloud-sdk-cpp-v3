

#include "huaweicloud/cdn/v1/model/CompressResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




CompressResponse::CompressResponse()
{
    compressSwitch_ = 0;
    compressSwitchIsSet_ = false;
    compressRulesIsSet_ = false;
}

CompressResponse::~CompressResponse() = default;

void CompressResponse::validate()
{
}

web::json::value CompressResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(compressSwitchIsSet_) {
        val[utility::conversions::to_string_t("compress_switch")] = ModelBase::toJson(compressSwitch_);
    }
    if(compressRulesIsSet_) {
        val[utility::conversions::to_string_t("compress_rules")] = ModelBase::toJson(compressRules_);
    }

    return val;
}

bool CompressResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("compress_switch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compress_switch"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompressSwitch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("compress_rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compress_rules"));
        if(!fieldValue.is_null())
        {
            std::vector<CompressRules> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompressRules(refVal);
        }
    }
    return ok;
}

int32_t CompressResponse::getCompressSwitch() const
{
    return compressSwitch_;
}

void CompressResponse::setCompressSwitch(int32_t value)
{
    compressSwitch_ = value;
    compressSwitchIsSet_ = true;
}

bool CompressResponse::compressSwitchIsSet() const
{
    return compressSwitchIsSet_;
}

void CompressResponse::unsetcompressSwitch()
{
    compressSwitchIsSet_ = false;
}

std::vector<CompressRules>& CompressResponse::getCompressRules()
{
    return compressRules_;
}

void CompressResponse::setCompressRules(const std::vector<CompressRules>& value)
{
    compressRules_ = value;
    compressRulesIsSet_ = true;
}

bool CompressResponse::compressRulesIsSet() const
{
    return compressRulesIsSet_;
}

void CompressResponse::unsetcompressRules()
{
    compressRulesIsSet_ = false;
}

}
}
}
}
}


