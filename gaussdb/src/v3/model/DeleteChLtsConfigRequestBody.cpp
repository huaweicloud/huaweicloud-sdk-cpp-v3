

#include "huaweicloud/gaussdb/v3/model/DeleteChLtsConfigRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteChLtsConfigRequestBody::DeleteChLtsConfigRequestBody()
{
    logConfigsIsSet_ = false;
}

DeleteChLtsConfigRequestBody::~DeleteChLtsConfigRequestBody() = default;

void DeleteChLtsConfigRequestBody::validate()
{
}

web::json::value DeleteChLtsConfigRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(logConfigsIsSet_) {
        val[utility::conversions::to_string_t("log_configs")] = ModelBase::toJson(logConfigs_);
    }

    return val;
}
bool DeleteChLtsConfigRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("log_configs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_configs"));
        if(!fieldValue.is_null())
        {
            std::vector<DeleteChLtsConfigRequestBody_log_configs> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogConfigs(refVal);
        }
    }
    return ok;
}


std::vector<DeleteChLtsConfigRequestBody_log_configs>& DeleteChLtsConfigRequestBody::getLogConfigs()
{
    return logConfigs_;
}

void DeleteChLtsConfigRequestBody::setLogConfigs(const std::vector<DeleteChLtsConfigRequestBody_log_configs>& value)
{
    logConfigs_ = value;
    logConfigsIsSet_ = true;
}

bool DeleteChLtsConfigRequestBody::logConfigsIsSet() const
{
    return logConfigsIsSet_;
}

void DeleteChLtsConfigRequestBody::unsetlogConfigs()
{
    logConfigsIsSet_ = false;
}

}
}
}
}
}


