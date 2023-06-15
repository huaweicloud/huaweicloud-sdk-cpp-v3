

#include "huaweicloud/live/v2/model/ListSingleStreamBitrateResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




ListSingleStreamBitrateResponse::ListSingleStreamBitrateResponse()
{
    bitrateInfoListIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListSingleStreamBitrateResponse::~ListSingleStreamBitrateResponse() = default;

void ListSingleStreamBitrateResponse::validate()
{
}

web::json::value ListSingleStreamBitrateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bitrateInfoListIsSet_) {
        val[utility::conversions::to_string_t("bitrate_info_list")] = ModelBase::toJson(bitrateInfoList_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}

bool ListSingleStreamBitrateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bitrate_info_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bitrate_info_list"));
        if(!fieldValue.is_null())
        {
            std::vector<V2BitrateInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBitrateInfoList(refVal);
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


std::vector<V2BitrateInfo>& ListSingleStreamBitrateResponse::getBitrateInfoList()
{
    return bitrateInfoList_;
}

void ListSingleStreamBitrateResponse::setBitrateInfoList(const std::vector<V2BitrateInfo>& value)
{
    bitrateInfoList_ = value;
    bitrateInfoListIsSet_ = true;
}

bool ListSingleStreamBitrateResponse::bitrateInfoListIsSet() const
{
    return bitrateInfoListIsSet_;
}

void ListSingleStreamBitrateResponse::unsetbitrateInfoList()
{
    bitrateInfoListIsSet_ = false;
}

std::string ListSingleStreamBitrateResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListSingleStreamBitrateResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListSingleStreamBitrateResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListSingleStreamBitrateResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


