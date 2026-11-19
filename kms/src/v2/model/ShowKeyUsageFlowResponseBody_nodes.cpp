

#include "huaweicloud/kms/v2/model/ShowKeyUsageFlowResponseBody_nodes.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ShowKeyUsageFlowResponseBody_nodes::ShowKeyUsageFlowResponseBody_nodes()
{
    keyIsSet_ = false;
}

ShowKeyUsageFlowResponseBody_nodes::~ShowKeyUsageFlowResponseBody_nodes() = default;

void ShowKeyUsageFlowResponseBody_nodes::validate()
{
}

web::json::value ShowKeyUsageFlowResponseBody_nodes::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }

    return val;
}
bool ShowKeyUsageFlowResponseBody_nodes::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKey(refVal);
        }
    }
    return ok;
}


Object ShowKeyUsageFlowResponseBody_nodes::getKey() const
{
    return key_;
}

void ShowKeyUsageFlowResponseBody_nodes::setKey(const Object& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool ShowKeyUsageFlowResponseBody_nodes::keyIsSet() const
{
    return keyIsSet_;
}

void ShowKeyUsageFlowResponseBody_nodes::unsetkey()
{
    keyIsSet_ = false;
}

}
}
}
}
}


