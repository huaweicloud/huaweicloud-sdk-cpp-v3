

#include "huaweicloud/ims/v2/model/ListImageMembersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




ListImageMembersResponse::ListImageMembersResponse()
{
    membersIsSet_ = false;
    schema_ = "";
    schemaIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListImageMembersResponse::~ListImageMembersResponse() = default;

void ListImageMembersResponse::validate()
{
}

web::json::value ListImageMembersResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(membersIsSet_) {
        val[utility::conversions::to_string_t("members")] = ModelBase::toJson(members_);
    }
    if(schemaIsSet_) {
        val[utility::conversions::to_string_t("schema")] = ModelBase::toJson(schema_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }

    return val;
}
bool ListImageMembersResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("members"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("members"));
        if(!fieldValue.is_null())
        {
            std::vector<ImageMember> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMembers(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("schema"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schema"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSchema(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_info"));
        if(!fieldValue.is_null())
        {
            GlancePageInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageInfo(refVal);
        }
    }
    return ok;
}


std::vector<ImageMember>& ListImageMembersResponse::getMembers()
{
    return members_;
}

void ListImageMembersResponse::setMembers(const std::vector<ImageMember>& value)
{
    members_ = value;
    membersIsSet_ = true;
}

bool ListImageMembersResponse::membersIsSet() const
{
    return membersIsSet_;
}

void ListImageMembersResponse::unsetmembers()
{
    membersIsSet_ = false;
}

std::string ListImageMembersResponse::getSchema() const
{
    return schema_;
}

void ListImageMembersResponse::setSchema(const std::string& value)
{
    schema_ = value;
    schemaIsSet_ = true;
}

bool ListImageMembersResponse::schemaIsSet() const
{
    return schemaIsSet_;
}

void ListImageMembersResponse::unsetschema()
{
    schemaIsSet_ = false;
}

GlancePageInfo ListImageMembersResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListImageMembersResponse::setPageInfo(const GlancePageInfo& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListImageMembersResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListImageMembersResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


