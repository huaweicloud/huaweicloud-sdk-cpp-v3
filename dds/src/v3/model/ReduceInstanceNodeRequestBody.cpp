

#include "huaweicloud/dds/v3/model/ReduceInstanceNodeRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ReduceInstanceNodeRequestBody::ReduceInstanceNodeRequestBody()
{
    num_ = 0;
    numIsSet_ = false;
    nodeListIsSet_ = false;
}

ReduceInstanceNodeRequestBody::~ReduceInstanceNodeRequestBody() = default;

void ReduceInstanceNodeRequestBody::validate()
{
}

web::json::value ReduceInstanceNodeRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(numIsSet_) {
        val[utility::conversions::to_string_t("num")] = ModelBase::toJson(num_);
    }
    if(nodeListIsSet_) {
        val[utility::conversions::to_string_t("node_list")] = ModelBase::toJson(nodeList_);
    }

    return val;
}
bool ReduceInstanceNodeRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeList(refVal);
        }
    }
    return ok;
}


int32_t ReduceInstanceNodeRequestBody::getNum() const
{
    return num_;
}

void ReduceInstanceNodeRequestBody::setNum(int32_t value)
{
    num_ = value;
    numIsSet_ = true;
}

bool ReduceInstanceNodeRequestBody::numIsSet() const
{
    return numIsSet_;
}

void ReduceInstanceNodeRequestBody::unsetnum()
{
    numIsSet_ = false;
}

std::vector<std::string>& ReduceInstanceNodeRequestBody::getNodeList()
{
    return nodeList_;
}

void ReduceInstanceNodeRequestBody::setNodeList(const std::vector<std::string>& value)
{
    nodeList_ = value;
    nodeListIsSet_ = true;
}

bool ReduceInstanceNodeRequestBody::nodeListIsSet() const
{
    return nodeListIsSet_;
}

void ReduceInstanceNodeRequestBody::unsetnodeList()
{
    nodeListIsSet_ = false;
}

}
}
}
}
}


