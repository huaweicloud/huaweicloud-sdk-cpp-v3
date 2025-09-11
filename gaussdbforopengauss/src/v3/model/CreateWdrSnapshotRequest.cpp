

#include "huaweicloud/gaussdbforopengauss/v3/model/CreateWdrSnapshotRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




CreateWdrSnapshotRequest::CreateWdrSnapshotRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

CreateWdrSnapshotRequest::~CreateWdrSnapshotRequest() = default;

void CreateWdrSnapshotRequest::validate()
{
}

web::json::value CreateWdrSnapshotRequest::toJson() const
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
bool CreateWdrSnapshotRequest::fromJson(const web::json::value& val)
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


std::string CreateWdrSnapshotRequest::getXLanguage() const
{
    return xLanguage_;
}

void CreateWdrSnapshotRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CreateWdrSnapshotRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CreateWdrSnapshotRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string CreateWdrSnapshotRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateWdrSnapshotRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateWdrSnapshotRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateWdrSnapshotRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


