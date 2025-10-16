

#include "huaweicloud/rds/v3/model/ListDistributionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListDistributionRequest::ListDistributionRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ListDistributionRequest::~ListDistributionRequest() = default;

void ListDistributionRequest::validate()
{
}

web::json::value ListDistributionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool ListDistributionRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    return ok;
}


std::string ListDistributionRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListDistributionRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListDistributionRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListDistributionRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListDistributionRequest::getInstanceId() const
{
    return instanceId_;
}

void ListDistributionRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListDistributionRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListDistributionRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


