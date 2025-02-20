

#include "huaweicloud/drs/v5/model/ActionParams_repair_info.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ActionParams_repair_info::ActionParams_repair_info()
{
    queryId_ = "";
    queryIdIsSet_ = false;
    objectsIsSet_ = false;
}

ActionParams_repair_info::~ActionParams_repair_info() = default;

void ActionParams_repair_info::validate()
{
}

web::json::value ActionParams_repair_info::toJson() const
{
    web::json::value val = web::json::value::object();

    if(queryIdIsSet_) {
        val[utility::conversions::to_string_t("query_id")] = ModelBase::toJson(queryId_);
    }
    if(objectsIsSet_) {
        val[utility::conversions::to_string_t("objects")] = ModelBase::toJson(objects_);
    }

    return val;
}
bool ActionParams_repair_info::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("query_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("objects"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("objects"));
        if(!fieldValue.is_null())
        {
            std::vector<ActionParams_repair_info_objects> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjects(refVal);
        }
    }
    return ok;
}


std::string ActionParams_repair_info::getQueryId() const
{
    return queryId_;
}

void ActionParams_repair_info::setQueryId(const std::string& value)
{
    queryId_ = value;
    queryIdIsSet_ = true;
}

bool ActionParams_repair_info::queryIdIsSet() const
{
    return queryIdIsSet_;
}

void ActionParams_repair_info::unsetqueryId()
{
    queryIdIsSet_ = false;
}

std::vector<ActionParams_repair_info_objects>& ActionParams_repair_info::getObjects()
{
    return objects_;
}

void ActionParams_repair_info::setObjects(const std::vector<ActionParams_repair_info_objects>& value)
{
    objects_ = value;
    objectsIsSet_ = true;
}

bool ActionParams_repair_info::objectsIsSet() const
{
    return objectsIsSet_;
}

void ActionParams_repair_info::unsetobjects()
{
    objectsIsSet_ = false;
}

}
}
}
}
}


