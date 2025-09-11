

#include "huaweicloud/gaussdbforopengauss/v3/model/ListDatabaseVolumeSummaryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListDatabaseVolumeSummaryRequest::ListDatabaseVolumeSummaryRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ListDatabaseVolumeSummaryRequest::~ListDatabaseVolumeSummaryRequest() = default;

void ListDatabaseVolumeSummaryRequest::validate()
{
}

web::json::value ListDatabaseVolumeSummaryRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool ListDatabaseVolumeSummaryRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    return ok;
}


std::string ListDatabaseVolumeSummaryRequest::getInstanceId() const
{
    return instanceId_;
}

void ListDatabaseVolumeSummaryRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListDatabaseVolumeSummaryRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListDatabaseVolumeSummaryRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListDatabaseVolumeSummaryRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListDatabaseVolumeSummaryRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListDatabaseVolumeSummaryRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListDatabaseVolumeSummaryRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


