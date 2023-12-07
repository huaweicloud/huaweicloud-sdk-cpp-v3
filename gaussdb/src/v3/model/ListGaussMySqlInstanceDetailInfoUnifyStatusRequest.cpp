

#include "huaweicloud/gaussdb/v3/model/ListGaussMySqlInstanceDetailInfoUnifyStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListGaussMySqlInstanceDetailInfoUnifyStatusRequest::ListGaussMySqlInstanceDetailInfoUnifyStatusRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceIds_ = "";
    instanceIdsIsSet_ = false;
}

ListGaussMySqlInstanceDetailInfoUnifyStatusRequest::~ListGaussMySqlInstanceDetailInfoUnifyStatusRequest() = default;

void ListGaussMySqlInstanceDetailInfoUnifyStatusRequest::validate()
{
}

web::json::value ListGaussMySqlInstanceDetailInfoUnifyStatusRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdsIsSet_) {
        val[utility::conversions::to_string_t("instance_ids")] = ModelBase::toJson(instanceIds_);
    }

    return val;
}
bool ListGaussMySqlInstanceDetailInfoUnifyStatusRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("instance_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_ids"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceIds(refVal);
        }
    }
    return ok;
}


std::string ListGaussMySqlInstanceDetailInfoUnifyStatusRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListGaussMySqlInstanceDetailInfoUnifyStatusRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListGaussMySqlInstanceDetailInfoUnifyStatusRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListGaussMySqlInstanceDetailInfoUnifyStatusRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListGaussMySqlInstanceDetailInfoUnifyStatusRequest::getInstanceIds() const
{
    return instanceIds_;
}

void ListGaussMySqlInstanceDetailInfoUnifyStatusRequest::setInstanceIds(const std::string& value)
{
    instanceIds_ = value;
    instanceIdsIsSet_ = true;
}

bool ListGaussMySqlInstanceDetailInfoUnifyStatusRequest::instanceIdsIsSet() const
{
    return instanceIdsIsSet_;
}

void ListGaussMySqlInstanceDetailInfoUnifyStatusRequest::unsetinstanceIds()
{
    instanceIdsIsSet_ = false;
}

}
}
}
}
}


