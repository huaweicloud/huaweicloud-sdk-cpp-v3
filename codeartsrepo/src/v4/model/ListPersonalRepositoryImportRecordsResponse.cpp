

#include "huaweicloud/codeartsrepo/v4/model/ListPersonalRepositoryImportRecordsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListPersonalRepositoryImportRecordsResponse::ListPersonalRepositoryImportRecordsResponse()
{
    bodyIsSet_ = false;
    xTotal_ = "";
    xTotalIsSet_ = false;
}

ListPersonalRepositoryImportRecordsResponse::~ListPersonalRepositoryImportRecordsResponse() = default;

void ListPersonalRepositoryImportRecordsResponse::validate()
{
}

web::json::value ListPersonalRepositoryImportRecordsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }
    if(xTotalIsSet_) {
        val[utility::conversions::to_string_t("X-Total")] = ModelBase::toJson(xTotal_);
    }

    return val;
}
bool ListPersonalRepositoryImportRecordsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<RepositoryImportRecordDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Total"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXTotal(refVal);
        }
    }
    return ok;
}


std::vector<RepositoryImportRecordDto>& ListPersonalRepositoryImportRecordsResponse::getBody()
{
    return body_;
}

void ListPersonalRepositoryImportRecordsResponse::setBody(const std::vector<RepositoryImportRecordDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListPersonalRepositoryImportRecordsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListPersonalRepositoryImportRecordsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

std::string ListPersonalRepositoryImportRecordsResponse::getXTotal() const
{
    return xTotal_;
}

void ListPersonalRepositoryImportRecordsResponse::setXTotal(const std::string& value)
{
    xTotal_ = value;
    xTotalIsSet_ = true;
}

bool ListPersonalRepositoryImportRecordsResponse::xTotalIsSet() const
{
    return xTotalIsSet_;
}

void ListPersonalRepositoryImportRecordsResponse::unsetxTotal()
{
    xTotalIsSet_ = false;
}

}
}
}
}
}


