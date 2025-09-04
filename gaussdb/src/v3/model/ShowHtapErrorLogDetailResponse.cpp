

#include "huaweicloud/gaussdb/v3/model/ShowHtapErrorLogDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowHtapErrorLogDetailResponse::ShowHtapErrorLogDetailResponse()
{
    errorLogListIsSet_ = false;
}

ShowHtapErrorLogDetailResponse::~ShowHtapErrorLogDetailResponse() = default;

void ShowHtapErrorLogDetailResponse::validate()
{
}

web::json::value ShowHtapErrorLogDetailResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(errorLogListIsSet_) {
        val[utility::conversions::to_string_t("error_log_list")] = ModelBase::toJson(errorLogList_);
    }

    return val;
}
bool ShowHtapErrorLogDetailResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("error_log_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_log_list"));
        if(!fieldValue.is_null())
        {
            std::vector<HtapErrorLogDetailResponse_error_log_list> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorLogList(refVal);
        }
    }
    return ok;
}


std::vector<HtapErrorLogDetailResponse_error_log_list>& ShowHtapErrorLogDetailResponse::getErrorLogList()
{
    return errorLogList_;
}

void ShowHtapErrorLogDetailResponse::setErrorLogList(const std::vector<HtapErrorLogDetailResponse_error_log_list>& value)
{
    errorLogList_ = value;
    errorLogListIsSet_ = true;
}

bool ShowHtapErrorLogDetailResponse::errorLogListIsSet() const
{
    return errorLogListIsSet_;
}

void ShowHtapErrorLogDetailResponse::unseterrorLogList()
{
    errorLogListIsSet_ = false;
}

}
}
}
}
}


