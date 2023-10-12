

#include "huaweicloud/rds/v3/model/GetTaskDetailListRsp_jobs_instance.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




GetTaskDetailListRsp_jobs_instance::GetTaskDetailListRsp_jobs_instance()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

GetTaskDetailListRsp_jobs_instance::~GetTaskDetailListRsp_jobs_instance() = default;

void GetTaskDetailListRsp_jobs_instance::validate()
{
}

web::json::value GetTaskDetailListRsp_jobs_instance::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool GetTaskDetailListRsp_jobs_instance::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


std::string GetTaskDetailListRsp_jobs_instance::getId() const
{
    return id_;
}

void GetTaskDetailListRsp_jobs_instance::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool GetTaskDetailListRsp_jobs_instance::idIsSet() const
{
    return idIsSet_;
}

void GetTaskDetailListRsp_jobs_instance::unsetid()
{
    idIsSet_ = false;
}

std::string GetTaskDetailListRsp_jobs_instance::getName() const
{
    return name_;
}

void GetTaskDetailListRsp_jobs_instance::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool GetTaskDetailListRsp_jobs_instance::nameIsSet() const
{
    return nameIsSet_;
}

void GetTaskDetailListRsp_jobs_instance::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


