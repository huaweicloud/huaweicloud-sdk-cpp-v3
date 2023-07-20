

#include "huaweicloud/gaussdb/v3/model/ListLtsErrorLogDetailsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListLtsErrorLogDetailsResponse::ListLtsErrorLogDetailsResponse()
{
    errorLogListIsSet_ = false;
}

ListLtsErrorLogDetailsResponse::~ListLtsErrorLogDetailsResponse() = default;

void ListLtsErrorLogDetailsResponse::validate()
{
}

web::json::value ListLtsErrorLogDetailsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(errorLogListIsSet_) {
        val[utility::conversions::to_string_t("error_log_list")] = ModelBase::toJson(errorLogList_);
    }

    return val;
}

bool ListLtsErrorLogDetailsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("error_log_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_log_list"));
        if(!fieldValue.is_null())
        {
            std::vector<LtsLogErrorDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorLogList(refVal);
        }
    }
    return ok;
}

std::vector<LtsLogErrorDetail>& ListLtsErrorLogDetailsResponse::getErrorLogList()
{
    return errorLogList_;
}

void ListLtsErrorLogDetailsResponse::setErrorLogList(const std::vector<LtsLogErrorDetail>& value)
{
    errorLogList_ = value;
    errorLogListIsSet_ = true;
}

bool ListLtsErrorLogDetailsResponse::errorLogListIsSet() const
{
    return errorLogListIsSet_;
}

void ListLtsErrorLogDetailsResponse::unseterrorLogList()
{
    errorLogListIsSet_ = false;
}

}
}
}
}
}


