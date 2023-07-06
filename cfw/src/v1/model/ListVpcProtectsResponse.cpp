

#include "huaweicloud/cfw/v1/model/ListVpcProtectsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListVpcProtectsResponse::ListVpcProtectsResponse()
{
    traceId_ = "";
    traceIdIsSet_ = false;
    dataIsSet_ = false;
}

ListVpcProtectsResponse::~ListVpcProtectsResponse() = default;

void ListVpcProtectsResponse::validate()
{
}

web::json::value ListVpcProtectsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(traceIdIsSet_) {
        val[utility::conversions::to_string_t("trace_id")] = ModelBase::toJson(traceId_);
    }
    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}

bool ListVpcProtectsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("trace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trace_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTraceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            VPCProtectsVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}

std::string ListVpcProtectsResponse::getTraceId() const
{
    return traceId_;
}

void ListVpcProtectsResponse::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool ListVpcProtectsResponse::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void ListVpcProtectsResponse::unsettraceId()
{
    traceIdIsSet_ = false;
}

VPCProtectsVo ListVpcProtectsResponse::getData() const
{
    return data_;
}

void ListVpcProtectsResponse::setData(const VPCProtectsVo& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListVpcProtectsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListVpcProtectsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


