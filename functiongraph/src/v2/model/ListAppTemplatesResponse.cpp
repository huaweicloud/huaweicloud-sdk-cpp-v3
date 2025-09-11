

#include "huaweicloud/functiongraph/v2/model/ListAppTemplatesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ListAppTemplatesResponse::ListAppTemplatesResponse()
{
    templatesIsSet_ = false;
    nextMarker_ = 0L;
    nextMarkerIsSet_ = false;
    count_ = 0L;
    countIsSet_ = false;
}

ListAppTemplatesResponse::~ListAppTemplatesResponse() = default;

void ListAppTemplatesResponse::validate()
{
}

web::json::value ListAppTemplatesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templatesIsSet_) {
        val[utility::conversions::to_string_t("templates")] = ModelBase::toJson(templates_);
    }
    if(nextMarkerIsSet_) {
        val[utility::conversions::to_string_t("next_marker")] = ModelBase::toJson(nextMarker_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}
bool ListAppTemplatesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("templates"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("templates"));
        if(!fieldValue.is_null())
        {
            std::vector<ListAppTemplatesResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplates(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("next_marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("next_marker"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNextMarker(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    return ok;
}


std::vector<ListAppTemplatesResult>& ListAppTemplatesResponse::getTemplates()
{
    return templates_;
}

void ListAppTemplatesResponse::setTemplates(const std::vector<ListAppTemplatesResult>& value)
{
    templates_ = value;
    templatesIsSet_ = true;
}

bool ListAppTemplatesResponse::templatesIsSet() const
{
    return templatesIsSet_;
}

void ListAppTemplatesResponse::unsettemplates()
{
    templatesIsSet_ = false;
}

int64_t ListAppTemplatesResponse::getNextMarker() const
{
    return nextMarker_;
}

void ListAppTemplatesResponse::setNextMarker(int64_t value)
{
    nextMarker_ = value;
    nextMarkerIsSet_ = true;
}

bool ListAppTemplatesResponse::nextMarkerIsSet() const
{
    return nextMarkerIsSet_;
}

void ListAppTemplatesResponse::unsetnextMarker()
{
    nextMarkerIsSet_ = false;
}

int64_t ListAppTemplatesResponse::getCount() const
{
    return count_;
}

void ListAppTemplatesResponse::setCount(int64_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListAppTemplatesResponse::countIsSet() const
{
    return countIsSet_;
}

void ListAppTemplatesResponse::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


