

#include "huaweicloud/drs/v5/model/DeleteColumnInfosResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




DeleteColumnInfosResponse::DeleteColumnInfosResponse()
{
    deleteResult_ = false;
    deleteResultIsSet_ = false;
}

DeleteColumnInfosResponse::~DeleteColumnInfosResponse() = default;

void DeleteColumnInfosResponse::validate()
{
}

web::json::value DeleteColumnInfosResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(deleteResultIsSet_) {
        val[utility::conversions::to_string_t("delete_result")] = ModelBase::toJson(deleteResult_);
    }

    return val;
}
bool DeleteColumnInfosResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("delete_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delete_result"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleteResult(refVal);
        }
    }
    return ok;
}


bool DeleteColumnInfosResponse::isDeleteResult() const
{
    return deleteResult_;
}

void DeleteColumnInfosResponse::setDeleteResult(bool value)
{
    deleteResult_ = value;
    deleteResultIsSet_ = true;
}

bool DeleteColumnInfosResponse::deleteResultIsSet() const
{
    return deleteResultIsSet_;
}

void DeleteColumnInfosResponse::unsetdeleteResult()
{
    deleteResultIsSet_ = false;
}

}
}
}
}
}


