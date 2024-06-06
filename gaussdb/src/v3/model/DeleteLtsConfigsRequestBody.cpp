

#include "huaweicloud/gaussdb/v3/model/DeleteLtsConfigsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteLtsConfigsRequestBody::DeleteLtsConfigsRequestBody()
{
    logConfigsIsSet_ = false;
}

DeleteLtsConfigsRequestBody::~DeleteLtsConfigsRequestBody() = default;

void DeleteLtsConfigsRequestBody::validate()
{
}

web::json::value DeleteLtsConfigsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(logConfigsIsSet_) {
        val[utility::conversions::to_string_t("log_configs")] = ModelBase::toJson(logConfigs_);
    }

    return val;
}
bool DeleteLtsConfigsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("log_configs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_configs"));
        if(!fieldValue.is_null())
        {
            std::vector<InstanceDeleteLtsConfig> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogConfigs(refVal);
        }
    }
    return ok;
}


std::vector<InstanceDeleteLtsConfig>& DeleteLtsConfigsRequestBody::getLogConfigs()
{
    return logConfigs_;
}

void DeleteLtsConfigsRequestBody::setLogConfigs(const std::vector<InstanceDeleteLtsConfig>& value)
{
    logConfigs_ = value;
    logConfigsIsSet_ = true;
}

bool DeleteLtsConfigsRequestBody::logConfigsIsSet() const
{
    return logConfigsIsSet_;
}

void DeleteLtsConfigsRequestBody::unsetlogConfigs()
{
    logConfigsIsSet_ = false;
}

}
}
}
}
}


