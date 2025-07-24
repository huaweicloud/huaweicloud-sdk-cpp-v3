

#include "huaweicloud/cloudtest/v1/model/CommRequestAssetTree.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CommRequestAssetTree::CommRequestAssetTree()
{
    paramsIsSet_ = false;
}

CommRequestAssetTree::~CommRequestAssetTree() = default;

void CommRequestAssetTree::validate()
{
}

web::json::value CommRequestAssetTree::toJson() const
{
    web::json::value val = web::json::value::object();

    if(paramsIsSet_) {
        val[utility::conversions::to_string_t("params")] = ModelBase::toJson(params_);
    }

    return val;
}
bool CommRequestAssetTree::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("params"));
        if(!fieldValue.is_null())
        {
            AssetTree refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParams(refVal);
        }
    }
    return ok;
}


AssetTree CommRequestAssetTree::getParams() const
{
    return params_;
}

void CommRequestAssetTree::setParams(const AssetTree& value)
{
    params_ = value;
    paramsIsSet_ = true;
}

bool CommRequestAssetTree::paramsIsSet() const
{
    return paramsIsSet_;
}

void CommRequestAssetTree::unsetparams()
{
    paramsIsSet_ = false;
}

}
}
}
}
}


