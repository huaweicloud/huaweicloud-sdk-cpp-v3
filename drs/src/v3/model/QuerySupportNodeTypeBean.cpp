

#include "huaweicloud/drs/v3/model/QuerySupportNodeTypeBean.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




QuerySupportNodeTypeBean::QuerySupportNodeTypeBean()
{
    nodeType_ = "";
    nodeTypeIsSet_ = false;
    isSellout_ = false;
    isSelloutIsSet_ = false;
}

QuerySupportNodeTypeBean::~QuerySupportNodeTypeBean() = default;

void QuerySupportNodeTypeBean::validate()
{
}

web::json::value QuerySupportNodeTypeBean::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeTypeIsSet_) {
        val[utility::conversions::to_string_t("node_type")] = ModelBase::toJson(nodeType_);
    }
    if(isSelloutIsSet_) {
        val[utility::conversions::to_string_t("is_sellout")] = ModelBase::toJson(isSellout_);
    }

    return val;
}
bool QuerySupportNodeTypeBean::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("is_sellout"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_sellout"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSellout(refVal);
        }
    }
    return ok;
}


std::string QuerySupportNodeTypeBean::getNodeType() const
{
    return nodeType_;
}

void QuerySupportNodeTypeBean::setNodeType(const std::string& value)
{
    nodeType_ = value;
    nodeTypeIsSet_ = true;
}

bool QuerySupportNodeTypeBean::nodeTypeIsSet() const
{
    return nodeTypeIsSet_;
}

void QuerySupportNodeTypeBean::unsetnodeType()
{
    nodeTypeIsSet_ = false;
}

bool QuerySupportNodeTypeBean::isIsSellout() const
{
    return isSellout_;
}

void QuerySupportNodeTypeBean::setIsSellout(bool value)
{
    isSellout_ = value;
    isSelloutIsSet_ = true;
}

bool QuerySupportNodeTypeBean::isSelloutIsSet() const
{
    return isSelloutIsSet_;
}

void QuerySupportNodeTypeBean::unsetisSellout()
{
    isSelloutIsSet_ = false;
}

}
}
}
}
}


