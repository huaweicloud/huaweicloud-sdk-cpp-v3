

#include "huaweicloud/lts/v2/model/ListSqlAlarmRulesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListSqlAlarmRulesRequest::ListSqlAlarmRulesRequest()
{
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ListSqlAlarmRulesRequest::~ListSqlAlarmRulesRequest() = default;

void ListSqlAlarmRulesRequest::validate()
{
}

web::json::value ListSqlAlarmRulesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }

    return val;
}
bool ListSqlAlarmRulesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    return ok;
}


std::string ListSqlAlarmRulesRequest::getContentType() const
{
    return contentType_;
}

void ListSqlAlarmRulesRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ListSqlAlarmRulesRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ListSqlAlarmRulesRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


