

#include "huaweicloud/gaussdb/v3/model/CheckStarrocksParamsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CheckStarrocksParamsRequestBody::CheckStarrocksParamsRequestBody()
{
    sourceConfigurationId_ = "";
    sourceConfigurationIdIsSet_ = false;
}

CheckStarrocksParamsRequestBody::~CheckStarrocksParamsRequestBody() = default;

void CheckStarrocksParamsRequestBody::validate()
{
}

web::json::value CheckStarrocksParamsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceConfigurationIdIsSet_) {
        val[utility::conversions::to_string_t("source_configuration_id")] = ModelBase::toJson(sourceConfigurationId_);
    }

    return val;
}
bool CheckStarrocksParamsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("source_configuration_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_configuration_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceConfigurationId(refVal);
        }
    }
    return ok;
}


std::string CheckStarrocksParamsRequestBody::getSourceConfigurationId() const
{
    return sourceConfigurationId_;
}

void CheckStarrocksParamsRequestBody::setSourceConfigurationId(const std::string& value)
{
    sourceConfigurationId_ = value;
    sourceConfigurationIdIsSet_ = true;
}

bool CheckStarrocksParamsRequestBody::sourceConfigurationIdIsSet() const
{
    return sourceConfigurationIdIsSet_;
}

void CheckStarrocksParamsRequestBody::unsetsourceConfigurationId()
{
    sourceConfigurationIdIsSet_ = false;
}

}
}
}
}
}


