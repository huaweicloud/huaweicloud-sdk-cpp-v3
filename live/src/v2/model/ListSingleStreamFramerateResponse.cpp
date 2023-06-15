

#include "huaweicloud/live/v2/model/ListSingleStreamFramerateResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




ListSingleStreamFramerateResponse::ListSingleStreamFramerateResponse()
{
    framerateInfoListIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListSingleStreamFramerateResponse::~ListSingleStreamFramerateResponse() = default;

void ListSingleStreamFramerateResponse::validate()
{
}

web::json::value ListSingleStreamFramerateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(framerateInfoListIsSet_) {
        val[utility::conversions::to_string_t("framerate_info_list")] = ModelBase::toJson(framerateInfoList_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}

bool ListSingleStreamFramerateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("framerate_info_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("framerate_info_list"));
        if(!fieldValue.is_null())
        {
            std::vector<V2FramerateInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFramerateInfoList(refVal);
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


std::vector<V2FramerateInfo>& ListSingleStreamFramerateResponse::getFramerateInfoList()
{
    return framerateInfoList_;
}

void ListSingleStreamFramerateResponse::setFramerateInfoList(const std::vector<V2FramerateInfo>& value)
{
    framerateInfoList_ = value;
    framerateInfoListIsSet_ = true;
}

bool ListSingleStreamFramerateResponse::framerateInfoListIsSet() const
{
    return framerateInfoListIsSet_;
}

void ListSingleStreamFramerateResponse::unsetframerateInfoList()
{
    framerateInfoListIsSet_ = false;
}

std::string ListSingleStreamFramerateResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListSingleStreamFramerateResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListSingleStreamFramerateResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListSingleStreamFramerateResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


