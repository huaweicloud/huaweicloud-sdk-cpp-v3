

#include "huaweicloud/gaussdb/v3/model/CollectColdTableMetasRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CollectColdTableMetasRequest::CollectColdTableMetasRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

CollectColdTableMetasRequest::~CollectColdTableMetasRequest() = default;

void CollectColdTableMetasRequest::validate()
{
}

web::json::value CollectColdTableMetasRequest::toJson() const
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
bool CollectColdTableMetasRequest::fromJson(const web::json::value& val)
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


std::string CollectColdTableMetasRequest::getXLanguage() const
{
    return xLanguage_;
}

void CollectColdTableMetasRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CollectColdTableMetasRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CollectColdTableMetasRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string CollectColdTableMetasRequest::getInstanceId() const
{
    return instanceId_;
}

void CollectColdTableMetasRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CollectColdTableMetasRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CollectColdTableMetasRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


