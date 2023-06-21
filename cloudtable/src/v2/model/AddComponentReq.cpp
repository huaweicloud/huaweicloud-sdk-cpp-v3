

#include "huaweicloud/cloudtable/v2/model/AddComponentReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {




AddComponentReq::AddComponentReq()
{
    nodeNum_ = 0;
    nodeNumIsSet_ = false;
}

AddComponentReq::~AddComponentReq() = default;

void AddComponentReq::validate()
{
}

web::json::value AddComponentReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeNumIsSet_) {
        val[utility::conversions::to_string_t("node_num")] = ModelBase::toJson(nodeNum_);
    }

    return val;
}

bool AddComponentReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


int32_t AddComponentReq::getNodeNum() const
{
    return nodeNum_;
}

void AddComponentReq::setNodeNum(int32_t value)
{
    nodeNum_ = value;
    nodeNumIsSet_ = true;
}

bool AddComponentReq::nodeNumIsSet() const
{
    return nodeNumIsSet_;
}

void AddComponentReq::unsetnodeNum()
{
    nodeNumIsSet_ = false;
}

}
}
}
}
}


