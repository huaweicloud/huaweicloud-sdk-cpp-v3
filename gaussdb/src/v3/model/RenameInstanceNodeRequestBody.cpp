

#include "huaweicloud/gaussdb/v3/model/RenameInstanceNodeRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




RenameInstanceNodeRequestBody::RenameInstanceNodeRequestBody()
{
    nodeListIsSet_ = false;
}

RenameInstanceNodeRequestBody::~RenameInstanceNodeRequestBody() = default;

void RenameInstanceNodeRequestBody::validate()
{
}

web::json::value RenameInstanceNodeRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeListIsSet_) {
        val[utility::conversions::to_string_t("node_list")] = ModelBase::toJson(nodeList_);
    }

    return val;
}
bool RenameInstanceNodeRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("node_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_list"));
        if(!fieldValue.is_null())
        {
            std::vector<SingleNodeInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeList(refVal);
        }
    }
    return ok;
}


std::vector<SingleNodeInfo>& RenameInstanceNodeRequestBody::getNodeList()
{
    return nodeList_;
}

void RenameInstanceNodeRequestBody::setNodeList(const std::vector<SingleNodeInfo>& value)
{
    nodeList_ = value;
    nodeListIsSet_ = true;
}

bool RenameInstanceNodeRequestBody::nodeListIsSet() const
{
    return nodeListIsSet_;
}

void RenameInstanceNodeRequestBody::unsetnodeList()
{
    nodeListIsSet_ = false;
}

}
}
}
}
}


