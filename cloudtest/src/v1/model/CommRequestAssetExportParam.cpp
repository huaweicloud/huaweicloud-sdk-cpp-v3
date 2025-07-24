

#include "huaweicloud/cloudtest/v1/model/CommRequestAssetExportParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CommRequestAssetExportParam::CommRequestAssetExportParam()
{
    paramsIsSet_ = false;
}

CommRequestAssetExportParam::~CommRequestAssetExportParam() = default;

void CommRequestAssetExportParam::validate()
{
}

web::json::value CommRequestAssetExportParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(paramsIsSet_) {
        val[utility::conversions::to_string_t("params")] = ModelBase::toJson(params_);
    }

    return val;
}
bool CommRequestAssetExportParam::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("params"));
        if(!fieldValue.is_null())
        {
            AssetExportParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParams(refVal);
        }
    }
    return ok;
}


AssetExportParam CommRequestAssetExportParam::getParams() const
{
    return params_;
}

void CommRequestAssetExportParam::setParams(const AssetExportParam& value)
{
    params_ = value;
    paramsIsSet_ = true;
}

bool CommRequestAssetExportParam::paramsIsSet() const
{
    return paramsIsSet_;
}

void CommRequestAssetExportParam::unsetparams()
{
    paramsIsSet_ = false;
}

}
}
}
}
}


