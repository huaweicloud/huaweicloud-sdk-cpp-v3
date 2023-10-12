

#include "huaweicloud/gaussdb/v3/model/ListGaussMySqlInstanceDetailInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListGaussMySqlInstanceDetailInfoRequest::ListGaussMySqlInstanceDetailInfoRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceIds_ = "";
    instanceIdsIsSet_ = false;
}

ListGaussMySqlInstanceDetailInfoRequest::~ListGaussMySqlInstanceDetailInfoRequest() = default;

void ListGaussMySqlInstanceDetailInfoRequest::validate()
{
}

web::json::value ListGaussMySqlInstanceDetailInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdsIsSet_) {
        val[utility::conversions::to_string_t("instance_ids")] = ModelBase::toJson(instanceIds_);
    }

    return val;
}
bool ListGaussMySqlInstanceDetailInfoRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("instance_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_ids"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceIds(refVal);
        }
    }
    return ok;
}


std::string ListGaussMySqlInstanceDetailInfoRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListGaussMySqlInstanceDetailInfoRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListGaussMySqlInstanceDetailInfoRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListGaussMySqlInstanceDetailInfoRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListGaussMySqlInstanceDetailInfoRequest::getInstanceIds() const
{
    return instanceIds_;
}

void ListGaussMySqlInstanceDetailInfoRequest::setInstanceIds(const std::string& value)
{
    instanceIds_ = value;
    instanceIdsIsSet_ = true;
}

bool ListGaussMySqlInstanceDetailInfoRequest::instanceIdsIsSet() const
{
    return instanceIdsIsSet_;
}

void ListGaussMySqlInstanceDetailInfoRequest::unsetinstanceIds()
{
    instanceIdsIsSet_ = false;
}

}
}
}
}
}


