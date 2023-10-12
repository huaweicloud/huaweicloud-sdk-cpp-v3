

#include "huaweicloud/cdn/v2/model/BatchCopyDRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




BatchCopyDRequestBody::BatchCopyDRequestBody()
{
    configsIsSet_ = false;
}

BatchCopyDRequestBody::~BatchCopyDRequestBody() = default;

void BatchCopyDRequestBody::validate()
{
}

web::json::value BatchCopyDRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(configsIsSet_) {
        val[utility::conversions::to_string_t("configs")] = ModelBase::toJson(configs_);
    }

    return val;
}
bool BatchCopyDRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("configs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("configs"));
        if(!fieldValue.is_null())
        {
            BatchCopyConfigs refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigs(refVal);
        }
    }
    return ok;
}


BatchCopyConfigs BatchCopyDRequestBody::getConfigs() const
{
    return configs_;
}

void BatchCopyDRequestBody::setConfigs(const BatchCopyConfigs& value)
{
    configs_ = value;
    configsIsSet_ = true;
}

bool BatchCopyDRequestBody::configsIsSet() const
{
    return configsIsSet_;
}

void BatchCopyDRequestBody::unsetconfigs()
{
    configsIsSet_ = false;
}

}
}
}
}
}


