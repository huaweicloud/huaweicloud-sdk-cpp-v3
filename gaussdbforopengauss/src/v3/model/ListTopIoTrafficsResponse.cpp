

#include "huaweicloud/gaussdbforopengauss/v3/model/ListTopIoTrafficsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListTopIoTrafficsResponse::ListTopIoTrafficsResponse()
{
    topIoInfosIsSet_ = false;
}

ListTopIoTrafficsResponse::~ListTopIoTrafficsResponse() = default;

void ListTopIoTrafficsResponse::validate()
{
}

web::json::value ListTopIoTrafficsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(topIoInfosIsSet_) {
        val[utility::conversions::to_string_t("top_io_infos")] = ModelBase::toJson(topIoInfos_);
    }

    return val;
}
bool ListTopIoTrafficsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("top_io_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("top_io_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<TopIoInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopIoInfos(refVal);
        }
    }
    return ok;
}


std::vector<TopIoInfo>& ListTopIoTrafficsResponse::getTopIoInfos()
{
    return topIoInfos_;
}

void ListTopIoTrafficsResponse::setTopIoInfos(const std::vector<TopIoInfo>& value)
{
    topIoInfos_ = value;
    topIoInfosIsSet_ = true;
}

bool ListTopIoTrafficsResponse::topIoInfosIsSet() const
{
    return topIoInfosIsSet_;
}

void ListTopIoTrafficsResponse::unsettopIoInfos()
{
    topIoInfosIsSet_ = false;
}

}
}
}
}
}


