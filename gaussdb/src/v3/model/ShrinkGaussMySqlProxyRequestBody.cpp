

#include "huaweicloud/gaussdb/v3/model/ShrinkGaussMySqlProxyRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShrinkGaussMySqlProxyRequestBody::ShrinkGaussMySqlProxyRequestBody()
{
    nodeNum_ = 0;
    nodeNumIsSet_ = false;
}

ShrinkGaussMySqlProxyRequestBody::~ShrinkGaussMySqlProxyRequestBody() = default;

void ShrinkGaussMySqlProxyRequestBody::validate()
{
}

web::json::value ShrinkGaussMySqlProxyRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeNumIsSet_) {
        val[utility::conversions::to_string_t("node_num")] = ModelBase::toJson(nodeNum_);
    }

    return val;
}
bool ShrinkGaussMySqlProxyRequestBody::fromJson(const web::json::value& val)
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


int32_t ShrinkGaussMySqlProxyRequestBody::getNodeNum() const
{
    return nodeNum_;
}

void ShrinkGaussMySqlProxyRequestBody::setNodeNum(int32_t value)
{
    nodeNum_ = value;
    nodeNumIsSet_ = true;
}

bool ShrinkGaussMySqlProxyRequestBody::nodeNumIsSet() const
{
    return nodeNumIsSet_;
}

void ShrinkGaussMySqlProxyRequestBody::unsetnodeNum()
{
    nodeNumIsSet_ = false;
}

}
}
}
}
}


