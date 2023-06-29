

#include "huaweicloud/mpc/v1/model/ListAllObsObjListResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




ListAllObsObjListResponse::ListAllObsObjListResponse()
{
    objectsIsSet_ = false;
}

ListAllObsObjListResponse::~ListAllObsObjListResponse() = default;

void ListAllObsObjListResponse::validate()
{
}

web::json::value ListAllObsObjListResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(objectsIsSet_) {
        val[utility::conversions::to_string_t("objects")] = ModelBase::toJson(objects_);
    }

    return val;
}

bool ListAllObsObjListResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("objects"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("objects"));
        if(!fieldValue.is_null())
        {
            std::vector<ObsObject> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjects(refVal);
        }
    }
    return ok;
}


std::vector<ObsObject>& ListAllObsObjListResponse::getObjects()
{
    return objects_;
}

void ListAllObsObjListResponse::setObjects(const std::vector<ObsObject>& value)
{
    objects_ = value;
    objectsIsSet_ = true;
}

bool ListAllObsObjListResponse::objectsIsSet() const
{
    return objectsIsSet_;
}

void ListAllObsObjListResponse::unsetobjects()
{
    objectsIsSet_ = false;
}

}
}
}
}
}


