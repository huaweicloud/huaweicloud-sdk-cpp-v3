

#include "huaweicloud/codeartsbuild/v3/model/FlowGraph_result_edges.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




FlowGraph_result_edges::FlowGraph_result_edges()
{
    from_ = "";
    fromIsSet_ = false;
    to_ = "";
    toIsSet_ = false;
}

FlowGraph_result_edges::~FlowGraph_result_edges() = default;

void FlowGraph_result_edges::validate()
{
}

web::json::value FlowGraph_result_edges::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fromIsSet_) {
        val[utility::conversions::to_string_t("from")] = ModelBase::toJson(from_);
    }
    if(toIsSet_) {
        val[utility::conversions::to_string_t("to")] = ModelBase::toJson(to_);
    }

    return val;
}
bool FlowGraph_result_edges::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("from"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("from"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFrom(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("to"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("to"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTo(refVal);
        }
    }
    return ok;
}


std::string FlowGraph_result_edges::getFrom() const
{
    return from_;
}

void FlowGraph_result_edges::setFrom(const std::string& value)
{
    from_ = value;
    fromIsSet_ = true;
}

bool FlowGraph_result_edges::fromIsSet() const
{
    return fromIsSet_;
}

void FlowGraph_result_edges::unsetfrom()
{
    fromIsSet_ = false;
}

std::string FlowGraph_result_edges::getTo() const
{
    return to_;
}

void FlowGraph_result_edges::setTo(const std::string& value)
{
    to_ = value;
    toIsSet_ = true;
}

bool FlowGraph_result_edges::toIsSet() const
{
    return toIsSet_;
}

void FlowGraph_result_edges::unsetto()
{
    toIsSet_ = false;
}

}
}
}
}
}


