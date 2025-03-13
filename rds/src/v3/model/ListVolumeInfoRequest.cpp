

#include "huaweicloud/rds/v3/model/ListVolumeInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListVolumeInfoRequest::ListVolumeInfoRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ListVolumeInfoRequest::~ListVolumeInfoRequest() = default;

void ListVolumeInfoRequest::validate()
{
}

web::json::value ListVolumeInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool ListVolumeInfoRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    return ok;
}


std::string ListVolumeInfoRequest::getInstanceId() const
{
    return instanceId_;
}

void ListVolumeInfoRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListVolumeInfoRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListVolumeInfoRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListVolumeInfoRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListVolumeInfoRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListVolumeInfoRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListVolumeInfoRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


