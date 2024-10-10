

#include "huaweicloud/drs/v5/model/ListJobDdlsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ListJobDdlsResponse::ListJobDdlsResponse()
{
    ddlListIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
}

ListJobDdlsResponse::~ListJobDdlsResponse() = default;

void ListJobDdlsResponse::validate()
{
}

web::json::value ListJobDdlsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ddlListIsSet_) {
        val[utility::conversions::to_string_t("ddl_list")] = ModelBase::toJson(ddlList_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}
bool ListJobDdlsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ddl_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ddl_list"));
        if(!fieldValue.is_null())
        {
            std::vector<DdlAlarmResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDdlList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    return ok;
}


std::vector<DdlAlarmResp>& ListJobDdlsResponse::getDdlList()
{
    return ddlList_;
}

void ListJobDdlsResponse::setDdlList(const std::vector<DdlAlarmResp>& value)
{
    ddlList_ = value;
    ddlListIsSet_ = true;
}

bool ListJobDdlsResponse::ddlListIsSet() const
{
    return ddlListIsSet_;
}

void ListJobDdlsResponse::unsetddlList()
{
    ddlListIsSet_ = false;
}

int32_t ListJobDdlsResponse::getCount() const
{
    return count_;
}

void ListJobDdlsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListJobDdlsResponse::countIsSet() const
{
    return countIsSet_;
}

void ListJobDdlsResponse::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


