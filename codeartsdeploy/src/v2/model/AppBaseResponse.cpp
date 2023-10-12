

#include "huaweicloud/codeartsdeploy/v2/model/AppBaseResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




AppBaseResponse::AppBaseResponse()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    arrangeInfosIsSet_ = false;
}

AppBaseResponse::~AppBaseResponse() = default;

void AppBaseResponse::validate()
{
}

web::json::value AppBaseResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(arrangeInfosIsSet_) {
        val[utility::conversions::to_string_t("arrange_infos")] = ModelBase::toJson(arrangeInfos_);
    }

    return val;
}
bool AppBaseResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("arrange_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("arrange_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<TaskBaseBody> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArrangeInfos(refVal);
        }
    }
    return ok;
}


std::string AppBaseResponse::getId() const
{
    return id_;
}

void AppBaseResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AppBaseResponse::idIsSet() const
{
    return idIsSet_;
}

void AppBaseResponse::unsetid()
{
    idIsSet_ = false;
}

std::string AppBaseResponse::getName() const
{
    return name_;
}

void AppBaseResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AppBaseResponse::nameIsSet() const
{
    return nameIsSet_;
}

void AppBaseResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string AppBaseResponse::getRegion() const
{
    return region_;
}

void AppBaseResponse::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool AppBaseResponse::regionIsSet() const
{
    return regionIsSet_;
}

void AppBaseResponse::unsetregion()
{
    regionIsSet_ = false;
}

std::vector<TaskBaseBody>& AppBaseResponse::getArrangeInfos()
{
    return arrangeInfos_;
}

void AppBaseResponse::setArrangeInfos(const std::vector<TaskBaseBody>& value)
{
    arrangeInfos_ = value;
    arrangeInfosIsSet_ = true;
}

bool AppBaseResponse::arrangeInfosIsSet() const
{
    return arrangeInfosIsSet_;
}

void AppBaseResponse::unsetarrangeInfos()
{
    arrangeInfosIsSet_ = false;
}

}
}
}
}
}


