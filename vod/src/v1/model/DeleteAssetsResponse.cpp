

#include "huaweicloud/vod/v1/model/DeleteAssetsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




DeleteAssetsResponse::DeleteAssetsResponse()
{
    deleteResultArrayIsSet_ = false;
}

DeleteAssetsResponse::~DeleteAssetsResponse() = default;

void DeleteAssetsResponse::validate()
{
}

web::json::value DeleteAssetsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(deleteResultArrayIsSet_) {
        val[utility::conversions::to_string_t("delete_result_array")] = ModelBase::toJson(deleteResultArray_);
    }

    return val;
}

bool DeleteAssetsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("delete_result_array"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delete_result_array"));
        if(!fieldValue.is_null())
        {
            std::vector<DeleteResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleteResultArray(refVal);
        }
    }
    return ok;
}


std::vector<DeleteResult>& DeleteAssetsResponse::getDeleteResultArray()
{
    return deleteResultArray_;
}

void DeleteAssetsResponse::setDeleteResultArray(const std::vector<DeleteResult>& value)
{
    deleteResultArray_ = value;
    deleteResultArrayIsSet_ = true;
}

bool DeleteAssetsResponse::deleteResultArrayIsSet() const
{
    return deleteResultArrayIsSet_;
}

void DeleteAssetsResponse::unsetdeleteResultArray()
{
    deleteResultArrayIsSet_ = false;
}

}
}
}
}
}


