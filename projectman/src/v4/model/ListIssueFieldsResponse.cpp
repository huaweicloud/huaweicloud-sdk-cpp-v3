

#include "huaweicloud/projectman/v4/model/ListIssueFieldsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListIssueFieldsResponse::ListIssueFieldsResponse()
{
    pageIsSet_ = false;
    resultIsSet_ = false;
}

ListIssueFieldsResponse::~ListIssueFieldsResponse() = default;

void ListIssueFieldsResponse::validate()
{
}

web::json::value ListIssueFieldsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool ListIssueFieldsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page"));
        if(!fieldValue.is_null())
        {
            PageVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::vector<FieldVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


PageVO ListIssueFieldsResponse::getPage() const
{
    return page_;
}

void ListIssueFieldsResponse::setPage(const PageVO& value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListIssueFieldsResponse::pageIsSet() const
{
    return pageIsSet_;
}

void ListIssueFieldsResponse::unsetpage()
{
    pageIsSet_ = false;
}

std::vector<FieldVO>& ListIssueFieldsResponse::getResult()
{
    return result_;
}

void ListIssueFieldsResponse::setResult(const std::vector<FieldVO>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListIssueFieldsResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListIssueFieldsResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


