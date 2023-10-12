

#include "huaweicloud/rds/v3/model/ListErrorlogForLtsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListErrorlogForLtsResponse::ListErrorlogForLtsResponse()
{
    errorLogListIsSet_ = false;
}

ListErrorlogForLtsResponse::~ListErrorlogForLtsResponse() = default;

void ListErrorlogForLtsResponse::validate()
{
}

web::json::value ListErrorlogForLtsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(errorLogListIsSet_) {
        val[utility::conversions::to_string_t("error_log_list")] = ModelBase::toJson(errorLogList_);
    }

    return val;
}
bool ListErrorlogForLtsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("error_log_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_log_list"));
        if(!fieldValue.is_null())
        {
            std::vector<ErrorLogItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorLogList(refVal);
        }
    }
    return ok;
}


std::vector<ErrorLogItem>& ListErrorlogForLtsResponse::getErrorLogList()
{
    return errorLogList_;
}

void ListErrorlogForLtsResponse::setErrorLogList(const std::vector<ErrorLogItem>& value)
{
    errorLogList_ = value;
    errorLogListIsSet_ = true;
}

bool ListErrorlogForLtsResponse::errorLogListIsSet() const
{
    return errorLogListIsSet_;
}

void ListErrorlogForLtsResponse::unseterrorLogList()
{
    errorLogListIsSet_ = false;
}

}
}
}
}
}


