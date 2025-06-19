

#include "huaweicloud/codeartsbuild/v3/model/ListBriefRecordRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ListBriefRecordRequest::ListBriefRecordRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    bodyIsSet_ = false;
}

ListBriefRecordRequest::~ListBriefRecordRequest() = default;

void ListBriefRecordRequest::validate()
{
}

web::json::value ListBriefRecordRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListBriefRecordRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t ListBriefRecordRequest::getLimit() const
{
    return limit_;
}

void ListBriefRecordRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListBriefRecordRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListBriefRecordRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::vector<std::string>& ListBriefRecordRequest::getBody()
{
    return body_;
}

void ListBriefRecordRequest::setBody(const std::vector<std::string>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListBriefRecordRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListBriefRecordRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


