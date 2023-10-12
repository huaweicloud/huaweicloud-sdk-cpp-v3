

#include "huaweicloud/gaussdb/v3/model/CancelGaussMySqlInstanceEipRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CancelGaussMySqlInstanceEipRequest::CancelGaussMySqlInstanceEipRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

CancelGaussMySqlInstanceEipRequest::~CancelGaussMySqlInstanceEipRequest() = default;

void CancelGaussMySqlInstanceEipRequest::validate()
{
}

web::json::value CancelGaussMySqlInstanceEipRequest::toJson() const
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
bool CancelGaussMySqlInstanceEipRequest::fromJson(const web::json::value& val)
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


std::string CancelGaussMySqlInstanceEipRequest::getXLanguage() const
{
    return xLanguage_;
}

void CancelGaussMySqlInstanceEipRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CancelGaussMySqlInstanceEipRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CancelGaussMySqlInstanceEipRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string CancelGaussMySqlInstanceEipRequest::getInstanceId() const
{
    return instanceId_;
}

void CancelGaussMySqlInstanceEipRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CancelGaussMySqlInstanceEipRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CancelGaussMySqlInstanceEipRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


