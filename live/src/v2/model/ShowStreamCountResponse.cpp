

#include "huaweicloud/live/v2/model/ShowStreamCountResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




ShowStreamCountResponse::ShowStreamCountResponse()
{
    dataListIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowStreamCountResponse::~ShowStreamCountResponse() = default;

void ShowStreamCountResponse::validate()
{
}

web::json::value ShowStreamCountResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataListIsSet_) {
        val[utility::conversions::to_string_t("data_list")] = ModelBase::toJson(dataList_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}

bool ShowStreamCountResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_list"));
        if(!fieldValue.is_null())
        {
            std::vector<StreamCountData> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}

std::vector<StreamCountData>& ShowStreamCountResponse::getDataList()
{
    return dataList_;
}

void ShowStreamCountResponse::setDataList(const std::vector<StreamCountData>& value)
{
    dataList_ = value;
    dataListIsSet_ = true;
}

bool ShowStreamCountResponse::dataListIsSet() const
{
    return dataListIsSet_;
}

void ShowStreamCountResponse::unsetdataList()
{
    dataListIsSet_ = false;
}

std::string ShowStreamCountResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowStreamCountResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowStreamCountResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowStreamCountResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


