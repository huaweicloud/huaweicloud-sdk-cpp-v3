

#include "huaweicloud/gaussdbfornosql/v3/model/ShrinkInstanceNodeRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShrinkInstanceNodeRequestBody::ShrinkInstanceNodeRequestBody()
{
    num_ = 0;
    numIsSet_ = false;
    nodeListIsSet_ = false;
}

ShrinkInstanceNodeRequestBody::~ShrinkInstanceNodeRequestBody() = default;

void ShrinkInstanceNodeRequestBody::validate()
{
}

web::json::value ShrinkInstanceNodeRequestBody::toJson() const
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
bool ShrinkInstanceNodeRequestBody::fromJson(const web::json::value& val)
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


int32_t ShrinkInstanceNodeRequestBody::getNum() const
{
    return num_;
}

void ShrinkInstanceNodeRequestBody::setNum(int32_t value)
{
    num_ = value;
    numIsSet_ = true;
}

bool ShrinkInstanceNodeRequestBody::numIsSet() const
{
    return numIsSet_;
}

void ShrinkInstanceNodeRequestBody::unsetnum()
{
    numIsSet_ = false;
}

std::vector<std::string>& ShrinkInstanceNodeRequestBody::getNodeList()
{
    return nodeList_;
}

void ShrinkInstanceNodeRequestBody::setNodeList(const std::vector<std::string>& value)
{
    nodeList_ = value;
    nodeListIsSet_ = true;
}

bool ShrinkInstanceNodeRequestBody::nodeListIsSet() const
{
    return nodeListIsSet_;
}

void ShrinkInstanceNodeRequestBody::unsetnodeList()
{
    nodeListIsSet_ = false;
}

}
}
}
}
}


