

#include "huaweicloud/gaussdb/v3/model/CreateChLtsConfigRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CreateChLtsConfigRequestBody::CreateChLtsConfigRequestBody()
{
    logConfigsIsSet_ = false;
}

CreateChLtsConfigRequestBody::~CreateChLtsConfigRequestBody() = default;

void CreateChLtsConfigRequestBody::validate()
{
}

web::json::value CreateChLtsConfigRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(logConfigsIsSet_) {
        val[utility::conversions::to_string_t("log_configs")] = ModelBase::toJson(logConfigs_);
    }

    return val;
}
bool CreateChLtsConfigRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("log_configs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_configs"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateChLtsConfigRequestBody_log_configs> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogConfigs(refVal);
        }
    }
    return ok;
}


std::vector<CreateChLtsConfigRequestBody_log_configs>& CreateChLtsConfigRequestBody::getLogConfigs()
{
    return logConfigs_;
}

void CreateChLtsConfigRequestBody::setLogConfigs(const std::vector<CreateChLtsConfigRequestBody_log_configs>& value)
{
    logConfigs_ = value;
    logConfigsIsSet_ = true;
}

bool CreateChLtsConfigRequestBody::logConfigsIsSet() const
{
    return logConfigsIsSet_;
}

void CreateChLtsConfigRequestBody::unsetlogConfigs()
{
    logConfigsIsSet_ = false;
}

}
}
}
}
}


