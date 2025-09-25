

#include "huaweicloud/gaussdbforopengauss/v3/model/ReduceCnRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ReduceCnRequestBody::ReduceCnRequestBody()
{
    nodeIdListIsSet_ = false;
}

ReduceCnRequestBody::~ReduceCnRequestBody() = default;

void ReduceCnRequestBody::validate()
{
}

web::json::value ReduceCnRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeIdListIsSet_) {
        val[utility::conversions::to_string_t("node_id_list")] = ModelBase::toJson(nodeIdList_);
    }

    return val;
}
bool ReduceCnRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("node_id_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeIdList(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ReduceCnRequestBody::getNodeIdList()
{
    return nodeIdList_;
}

void ReduceCnRequestBody::setNodeIdList(const std::vector<std::string>& value)
{
    nodeIdList_ = value;
    nodeIdListIsSet_ = true;
}

bool ReduceCnRequestBody::nodeIdListIsSet() const
{
    return nodeIdListIsSet_;
}

void ReduceCnRequestBody::unsetnodeIdList()
{
    nodeIdListIsSet_ = false;
}

}
}
}
}
}


