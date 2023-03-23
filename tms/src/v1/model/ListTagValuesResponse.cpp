

#include "huaweicloud/tms/v1/model/ListTagValuesResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




ListTagValuesResponse::ListTagValuesResponse()
{
    valuesIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListTagValuesResponse::~ListTagValuesResponse() = default;

void ListTagValuesResponse::validate()
{
}

web::json::value ListTagValuesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(valuesIsSet_) {
        val[utility::conversions::to_string_t("values")] = ModelBase::toJson(values_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }

    return val;
}

bool ListTagValuesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("values"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("values"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValues(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_info"));
        if(!fieldValue.is_null())
        {
            PageInfoTagValues refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageInfo(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ListTagValuesResponse::getValues()
{
    return values_;
}

void ListTagValuesResponse::setValues(const std::vector<std::string>& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool ListTagValuesResponse::valuesIsSet() const
{
    return valuesIsSet_;
}

void ListTagValuesResponse::unsetvalues()
{
    valuesIsSet_ = false;
}

PageInfoTagValues ListTagValuesResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListTagValuesResponse::setPageInfo(const PageInfoTagValues& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListTagValuesResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListTagValuesResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


