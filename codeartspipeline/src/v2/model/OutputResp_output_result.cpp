

#include "huaweicloud/codeartspipeline/v2/model/OutputResp_output_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




OutputResp_output_result::OutputResp_output_result()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

OutputResp_output_result::~OutputResp_output_result() = default;

void OutputResp_output_result::validate()
{
}

web::json::value OutputResp_output_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool OutputResp_output_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    return ok;
}


std::string OutputResp_output_result::getKey() const
{
    return key_;
}

void OutputResp_output_result::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool OutputResp_output_result::keyIsSet() const
{
    return keyIsSet_;
}

void OutputResp_output_result::unsetkey()
{
    keyIsSet_ = false;
}

std::string OutputResp_output_result::getValue() const
{
    return value_;
}

void OutputResp_output_result::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool OutputResp_output_result::valueIsSet() const
{
    return valueIsSet_;
}

void OutputResp_output_result::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


