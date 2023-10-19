

#include "huaweicloud/gaussdb/v3/model/ListConfigurationsDifferencesRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListConfigurationsDifferencesRequestBody::ListConfigurationsDifferencesRequestBody()
{
    sourceConfigurationId_ = "";
    sourceConfigurationIdIsSet_ = false;
    targetConfigurationId_ = "";
    targetConfigurationIdIsSet_ = false;
}

ListConfigurationsDifferencesRequestBody::~ListConfigurationsDifferencesRequestBody() = default;

void ListConfigurationsDifferencesRequestBody::validate()
{
}

web::json::value ListConfigurationsDifferencesRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceConfigurationIdIsSet_) {
        val[utility::conversions::to_string_t("source_configuration_id")] = ModelBase::toJson(sourceConfigurationId_);
    }
    if(targetConfigurationIdIsSet_) {
        val[utility::conversions::to_string_t("target_configuration_id")] = ModelBase::toJson(targetConfigurationId_);
    }

    return val;
}
bool ListConfigurationsDifferencesRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("target_configuration_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_configuration_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetConfigurationId(refVal);
        }
    }
    return ok;
}


std::string ListConfigurationsDifferencesRequestBody::getSourceConfigurationId() const
{
    return sourceConfigurationId_;
}

void ListConfigurationsDifferencesRequestBody::setSourceConfigurationId(const std::string& value)
{
    sourceConfigurationId_ = value;
    sourceConfigurationIdIsSet_ = true;
}

bool ListConfigurationsDifferencesRequestBody::sourceConfigurationIdIsSet() const
{
    return sourceConfigurationIdIsSet_;
}

void ListConfigurationsDifferencesRequestBody::unsetsourceConfigurationId()
{
    sourceConfigurationIdIsSet_ = false;
}

std::string ListConfigurationsDifferencesRequestBody::getTargetConfigurationId() const
{
    return targetConfigurationId_;
}

void ListConfigurationsDifferencesRequestBody::setTargetConfigurationId(const std::string& value)
{
    targetConfigurationId_ = value;
    targetConfigurationIdIsSet_ = true;
}

bool ListConfigurationsDifferencesRequestBody::targetConfigurationIdIsSet() const
{
    return targetConfigurationIdIsSet_;
}

void ListConfigurationsDifferencesRequestBody::unsettargetConfigurationId()
{
    targetConfigurationIdIsSet_ = false;
}

}
}
}
}
}


