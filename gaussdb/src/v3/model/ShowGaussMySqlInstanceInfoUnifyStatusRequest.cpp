

#include "huaweicloud/gaussdb/v3/model/ShowGaussMySqlInstanceInfoUnifyStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowGaussMySqlInstanceInfoUnifyStatusRequest::ShowGaussMySqlInstanceInfoUnifyStatusRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowGaussMySqlInstanceInfoUnifyStatusRequest::~ShowGaussMySqlInstanceInfoUnifyStatusRequest() = default;

void ShowGaussMySqlInstanceInfoUnifyStatusRequest::validate()
{
}

web::json::value ShowGaussMySqlInstanceInfoUnifyStatusRequest::toJson() const
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
bool ShowGaussMySqlInstanceInfoUnifyStatusRequest::fromJson(const web::json::value& val)
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


std::string ShowGaussMySqlInstanceInfoUnifyStatusRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowGaussMySqlInstanceInfoUnifyStatusRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowGaussMySqlInstanceInfoUnifyStatusRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowGaussMySqlInstanceInfoUnifyStatusRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowGaussMySqlInstanceInfoUnifyStatusRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowGaussMySqlInstanceInfoUnifyStatusRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowGaussMySqlInstanceInfoUnifyStatusRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowGaussMySqlInstanceInfoUnifyStatusRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


