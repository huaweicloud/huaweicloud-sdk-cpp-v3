

#include "huaweicloud/drs/v5/model/JobNodeSpecInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




JobNodeSpecInfo::JobNodeSpecInfo()
{
    nodeType_ = "";
    nodeTypeIsSet_ = false;
}

JobNodeSpecInfo::~JobNodeSpecInfo() = default;

void JobNodeSpecInfo::validate()
{
}

web::json::value JobNodeSpecInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeTypeIsSet_) {
        val[utility::conversions::to_string_t("node_type")] = ModelBase::toJson(nodeType_);
    }

    return val;
}

bool JobNodeSpecInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("node_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeType(refVal);
        }
    }
    return ok;
}

std::string JobNodeSpecInfo::getNodeType() const
{
    return nodeType_;
}

void JobNodeSpecInfo::setNodeType(const std::string& value)
{
    nodeType_ = value;
    nodeTypeIsSet_ = true;
}

bool JobNodeSpecInfo::nodeTypeIsSet() const
{
    return nodeTypeIsSet_;
}

void JobNodeSpecInfo::unsetnodeType()
{
    nodeTypeIsSet_ = false;
}

}
}
}
}
}


