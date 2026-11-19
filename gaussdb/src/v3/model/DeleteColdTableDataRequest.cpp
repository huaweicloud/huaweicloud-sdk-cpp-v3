

#include "huaweicloud/gaussdb/v3/model/DeleteColdTableDataRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteColdTableDataRequest::DeleteColdTableDataRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    spaceId_ = "";
    spaceIdIsSet_ = false;
    ddId_ = "";
    ddIdIsSet_ = false;
}

DeleteColdTableDataRequest::~DeleteColdTableDataRequest() = default;

void DeleteColdTableDataRequest::validate()
{
}

web::json::value DeleteColdTableDataRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(spaceIdIsSet_) {
        val[utility::conversions::to_string_t("space_id")] = ModelBase::toJson(spaceId_);
    }
    if(ddIdIsSet_) {
        val[utility::conversions::to_string_t("dd_id")] = ModelBase::toJson(ddId_);
    }

    return val;
}
bool DeleteColdTableDataRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("space_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("space_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpaceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dd_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dd_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDdId(refVal);
        }
    }
    return ok;
}


std::string DeleteColdTableDataRequest::getXLanguage() const
{
    return xLanguage_;
}

void DeleteColdTableDataRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DeleteColdTableDataRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DeleteColdTableDataRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string DeleteColdTableDataRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteColdTableDataRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteColdTableDataRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteColdTableDataRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteColdTableDataRequest::getSpaceId() const
{
    return spaceId_;
}

void DeleteColdTableDataRequest::setSpaceId(const std::string& value)
{
    spaceId_ = value;
    spaceIdIsSet_ = true;
}

bool DeleteColdTableDataRequest::spaceIdIsSet() const
{
    return spaceIdIsSet_;
}

void DeleteColdTableDataRequest::unsetspaceId()
{
    spaceIdIsSet_ = false;
}

std::string DeleteColdTableDataRequest::getDdId() const
{
    return ddId_;
}

void DeleteColdTableDataRequest::setDdId(const std::string& value)
{
    ddId_ = value;
    ddIdIsSet_ = true;
}

bool DeleteColdTableDataRequest::ddIdIsSet() const
{
    return ddIdIsSet_;
}

void DeleteColdTableDataRequest::unsetddId()
{
    ddIdIsSet_ = false;
}

}
}
}
}
}


