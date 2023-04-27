

#include "huaweicloud/lts/v2/model/ListKeywordsAlarmRulesRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListKeywordsAlarmRulesRequest::ListKeywordsAlarmRulesRequest()
{
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ListKeywordsAlarmRulesRequest::~ListKeywordsAlarmRulesRequest() = default;

void ListKeywordsAlarmRulesRequest::validate()
{
}

web::json::value ListKeywordsAlarmRulesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }

    return val;
}

bool ListKeywordsAlarmRulesRequest::fromJson(const web::json::value& val)
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


std::string ListKeywordsAlarmRulesRequest::getContentType() const
{
    return contentType_;
}

void ListKeywordsAlarmRulesRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ListKeywordsAlarmRulesRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ListKeywordsAlarmRulesRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


