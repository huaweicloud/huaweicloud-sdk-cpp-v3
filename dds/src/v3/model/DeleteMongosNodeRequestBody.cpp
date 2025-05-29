

#include "huaweicloud/dds/v3/model/DeleteMongosNodeRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




DeleteMongosNodeRequestBody::DeleteMongosNodeRequestBody()
{
    nodeListIsSet_ = false;
}

DeleteMongosNodeRequestBody::~DeleteMongosNodeRequestBody() = default;

void DeleteMongosNodeRequestBody::validate()
{
}

web::json::value DeleteMongosNodeRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeListIsSet_) {
        val[utility::conversions::to_string_t("node_list")] = ModelBase::toJson(nodeList_);
    }

    return val;
}
bool DeleteMongosNodeRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::vector<std::string>& DeleteMongosNodeRequestBody::getNodeList()
{
    return nodeList_;
}

void DeleteMongosNodeRequestBody::setNodeList(const std::vector<std::string>& value)
{
    nodeList_ = value;
    nodeListIsSet_ = true;
}

bool DeleteMongosNodeRequestBody::nodeListIsSet() const
{
    return nodeListIsSet_;
}

void DeleteMongosNodeRequestBody::unsetnodeList()
{
    nodeListIsSet_ = false;
}

}
}
}
}
}


