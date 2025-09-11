

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowWdrSnapshotStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowWdrSnapshotStatusRequest::ShowWdrSnapshotStatusRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowWdrSnapshotStatusRequest::~ShowWdrSnapshotStatusRequest() = default;

void ShowWdrSnapshotStatusRequest::validate()
{
}

web::json::value ShowWdrSnapshotStatusRequest::toJson() const
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
bool ShowWdrSnapshotStatusRequest::fromJson(const web::json::value& val)
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


std::string ShowWdrSnapshotStatusRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowWdrSnapshotStatusRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowWdrSnapshotStatusRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowWdrSnapshotStatusRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowWdrSnapshotStatusRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowWdrSnapshotStatusRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowWdrSnapshotStatusRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowWdrSnapshotStatusRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


