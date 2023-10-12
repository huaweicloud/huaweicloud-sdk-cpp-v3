

#include "huaweicloud/cloudtable/v2/model/GrowNodeReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {




GrowNodeReq::GrowNodeReq()
{
    componentName_ = "";
    componentNameIsSet_ = false;
    nodeNum_ = 0;
    nodeNumIsSet_ = false;
}

GrowNodeReq::~GrowNodeReq() = default;

void GrowNodeReq::validate()
{
}

web::json::value GrowNodeReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(componentNameIsSet_) {
        val[utility::conversions::to_string_t("component_name")] = ModelBase::toJson(componentName_);
    }
    if(nodeNumIsSet_) {
        val[utility::conversions::to_string_t("node_num")] = ModelBase::toJson(nodeNum_);
    }

    return val;
}
bool GrowNodeReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("component_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("component_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComponentName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeNum(refVal);
        }
    }
    return ok;
}


std::string GrowNodeReq::getComponentName() const
{
    return componentName_;
}

void GrowNodeReq::setComponentName(const std::string& value)
{
    componentName_ = value;
    componentNameIsSet_ = true;
}

bool GrowNodeReq::componentNameIsSet() const
{
    return componentNameIsSet_;
}

void GrowNodeReq::unsetcomponentName()
{
    componentNameIsSet_ = false;
}

int32_t GrowNodeReq::getNodeNum() const
{
    return nodeNum_;
}

void GrowNodeReq::setNodeNum(int32_t value)
{
    nodeNum_ = value;
    nodeNumIsSet_ = true;
}

bool GrowNodeReq::nodeNumIsSet() const
{
    return nodeNumIsSet_;
}

void GrowNodeReq::unsetnodeNum()
{
    nodeNumIsSet_ = false;
}

}
}
}
}
}


