

#include "huaweicloud/gaussdb/v3/model/TaurusModifyProxyWeightRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




TaurusModifyProxyWeightRequest::TaurusModifyProxyWeightRequest()
{
    masterWeight_ = 0;
    masterWeightIsSet_ = false;
    readonlyNodesIsSet_ = false;
}

TaurusModifyProxyWeightRequest::~TaurusModifyProxyWeightRequest() = default;

void TaurusModifyProxyWeightRequest::validate()
{
}

web::json::value TaurusModifyProxyWeightRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(masterWeightIsSet_) {
        val[utility::conversions::to_string_t("master_weight")] = ModelBase::toJson(masterWeight_);
    }
    if(readonlyNodesIsSet_) {
        val[utility::conversions::to_string_t("readonly_nodes")] = ModelBase::toJson(readonlyNodes_);
    }

    return val;
}
bool TaurusModifyProxyWeightRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("master_weight"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("master_weight"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMasterWeight(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("readonly_nodes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("readonly_nodes"));
        if(!fieldValue.is_null())
        {
            std::vector<ModifyProxyWeightReadonlyNode> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReadonlyNodes(refVal);
        }
    }
    return ok;
}


int32_t TaurusModifyProxyWeightRequest::getMasterWeight() const
{
    return masterWeight_;
}

void TaurusModifyProxyWeightRequest::setMasterWeight(int32_t value)
{
    masterWeight_ = value;
    masterWeightIsSet_ = true;
}

bool TaurusModifyProxyWeightRequest::masterWeightIsSet() const
{
    return masterWeightIsSet_;
}

void TaurusModifyProxyWeightRequest::unsetmasterWeight()
{
    masterWeightIsSet_ = false;
}

std::vector<ModifyProxyWeightReadonlyNode>& TaurusModifyProxyWeightRequest::getReadonlyNodes()
{
    return readonlyNodes_;
}

void TaurusModifyProxyWeightRequest::setReadonlyNodes(const std::vector<ModifyProxyWeightReadonlyNode>& value)
{
    readonlyNodes_ = value;
    readonlyNodesIsSet_ = true;
}

bool TaurusModifyProxyWeightRequest::readonlyNodesIsSet() const
{
    return readonlyNodesIsSet_;
}

void TaurusModifyProxyWeightRequest::unsetreadonlyNodes()
{
    readonlyNodesIsSet_ = false;
}

}
}
}
}
}


