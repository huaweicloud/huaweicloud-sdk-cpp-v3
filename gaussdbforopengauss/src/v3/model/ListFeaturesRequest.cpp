

#include "huaweicloud/gaussdbforopengauss/v3/model/ListFeaturesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListFeaturesRequest::ListFeaturesRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ListFeaturesRequest::~ListFeaturesRequest() = default;

void ListFeaturesRequest::validate()
{
}

web::json::value ListFeaturesRequest::toJson() const
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
bool ListFeaturesRequest::fromJson(const web::json::value& val)
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


std::string ListFeaturesRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListFeaturesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListFeaturesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListFeaturesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListFeaturesRequest::getInstanceId() const
{
    return instanceId_;
}

void ListFeaturesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListFeaturesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListFeaturesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


