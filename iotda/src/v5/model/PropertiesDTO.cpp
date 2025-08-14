

#include "huaweicloud/iotda/v5/model/PropertiesDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




PropertiesDTO::PropertiesDTO()
{
    correlationData_ = "";
    correlationDataIsSet_ = false;
    responseTopic_ = "";
    responseTopicIsSet_ = false;
    userPropertiesIsSet_ = false;
}

PropertiesDTO::~PropertiesDTO() = default;

void PropertiesDTO::validate()
{
}

web::json::value PropertiesDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(correlationDataIsSet_) {
        val[utility::conversions::to_string_t("correlation_data")] = ModelBase::toJson(correlationData_);
    }
    if(responseTopicIsSet_) {
        val[utility::conversions::to_string_t("response_topic")] = ModelBase::toJson(responseTopic_);
    }
    if(userPropertiesIsSet_) {
        val[utility::conversions::to_string_t("user_properties")] = ModelBase::toJson(userProperties_);
    }

    return val;
}
bool PropertiesDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("correlation_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("correlation_data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCorrelationData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("response_topic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("response_topic"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResponseTopic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_properties"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_properties"));
        if(!fieldValue.is_null())
        {
            std::vector<UserPropDTO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserProperties(refVal);
        }
    }
    return ok;
}


std::string PropertiesDTO::getCorrelationData() const
{
    return correlationData_;
}

void PropertiesDTO::setCorrelationData(const std::string& value)
{
    correlationData_ = value;
    correlationDataIsSet_ = true;
}

bool PropertiesDTO::correlationDataIsSet() const
{
    return correlationDataIsSet_;
}

void PropertiesDTO::unsetcorrelationData()
{
    correlationDataIsSet_ = false;
}

std::string PropertiesDTO::getResponseTopic() const
{
    return responseTopic_;
}

void PropertiesDTO::setResponseTopic(const std::string& value)
{
    responseTopic_ = value;
    responseTopicIsSet_ = true;
}

bool PropertiesDTO::responseTopicIsSet() const
{
    return responseTopicIsSet_;
}

void PropertiesDTO::unsetresponseTopic()
{
    responseTopicIsSet_ = false;
}

std::vector<UserPropDTO>& PropertiesDTO::getUserProperties()
{
    return userProperties_;
}

void PropertiesDTO::setUserProperties(const std::vector<UserPropDTO>& value)
{
    userProperties_ = value;
    userPropertiesIsSet_ = true;
}

bool PropertiesDTO::userPropertiesIsSet() const
{
    return userPropertiesIsSet_;
}

void PropertiesDTO::unsetuserProperties()
{
    userPropertiesIsSet_ = false;
}

}
}
}
}
}


