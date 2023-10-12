

#include "huaweicloud/gaussdb/v3/model/ListLtsSlowlogDetailsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListLtsSlowlogDetailsResponse::ListLtsSlowlogDetailsResponse()
{
    slowLogListIsSet_ = false;
}

ListLtsSlowlogDetailsResponse::~ListLtsSlowlogDetailsResponse() = default;

void ListLtsSlowlogDetailsResponse::validate()
{
}

web::json::value ListLtsSlowlogDetailsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(slowLogListIsSet_) {
        val[utility::conversions::to_string_t("slow_log_list")] = ModelBase::toJson(slowLogList_);
    }

    return val;
}
bool ListLtsSlowlogDetailsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("slow_log_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("slow_log_list"));
        if(!fieldValue.is_null())
        {
            std::vector<LtsLogSlowDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSlowLogList(refVal);
        }
    }
    return ok;
}


std::vector<LtsLogSlowDetail>& ListLtsSlowlogDetailsResponse::getSlowLogList()
{
    return slowLogList_;
}

void ListLtsSlowlogDetailsResponse::setSlowLogList(const std::vector<LtsLogSlowDetail>& value)
{
    slowLogList_ = value;
    slowLogListIsSet_ = true;
}

bool ListLtsSlowlogDetailsResponse::slowLogListIsSet() const
{
    return slowLogListIsSet_;
}

void ListLtsSlowlogDetailsResponse::unsetslowLogList()
{
    slowLogListIsSet_ = false;
}

}
}
}
}
}


