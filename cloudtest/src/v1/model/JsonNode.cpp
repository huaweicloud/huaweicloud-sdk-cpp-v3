

#include "huaweicloud/cloudtest/v1/model/JsonNode.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




JsonNode::JsonNode()
{
}

JsonNode::~JsonNode() = default;

void JsonNode::validate()
{
}

web::json::value JsonNode::toJson() const
{
    web::json::value val = web::json::value::object();


    return val;
}
bool JsonNode::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    return ok;
}


}
}
}
}
}


