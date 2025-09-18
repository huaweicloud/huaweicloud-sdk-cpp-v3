

#include "huaweicloud/projectman/v4/model/ListIssueCustomFieldsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListIssueCustomFieldsResponse::ListIssueCustomFieldsResponse()
{
    datasIsSet_ = false;
}

ListIssueCustomFieldsResponse::~ListIssueCustomFieldsResponse() = default;

void ListIssueCustomFieldsResponse::validate()
{
}

web::json::value ListIssueCustomFieldsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(datasIsSet_) {
        val[utility::conversions::to_string_t("datas")] = ModelBase::toJson(datas_);
    }

    return val;
}
bool ListIssueCustomFieldsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("datas"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datas"));
        if(!fieldValue.is_null())
        {
            std::vector<IssueCustomField> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatas(refVal);
        }
    }
    return ok;
}


std::vector<IssueCustomField>& ListIssueCustomFieldsResponse::getDatas()
{
    return datas_;
}

void ListIssueCustomFieldsResponse::setDatas(const std::vector<IssueCustomField>& value)
{
    datas_ = value;
    datasIsSet_ = true;
}

bool ListIssueCustomFieldsResponse::datasIsSet() const
{
    return datasIsSet_;
}

void ListIssueCustomFieldsResponse::unsetdatas()
{
    datasIsSet_ = false;
}

}
}
}
}
}


