

#include "huaweicloud/ims/v2/model/GlanceListImageMembersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




GlanceListImageMembersResponse::GlanceListImageMembersResponse()
{
    membersIsSet_ = false;
    schema_ = "";
    schemaIsSet_ = false;
}

GlanceListImageMembersResponse::~GlanceListImageMembersResponse() = default;

void GlanceListImageMembersResponse::validate()
{
}

web::json::value GlanceListImageMembersResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(membersIsSet_) {
        val[utility::conversions::to_string_t("members")] = ModelBase::toJson(members_);
    }
    if(schemaIsSet_) {
        val[utility::conversions::to_string_t("schema")] = ModelBase::toJson(schema_);
    }

    return val;
}
bool GlanceListImageMembersResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("members"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("members"));
        if(!fieldValue.is_null())
        {
            std::vector<GlanceImageMembers> refVal;
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
    return ok;
}


std::vector<GlanceImageMembers>& GlanceListImageMembersResponse::getMembers()
{
    return members_;
}

void GlanceListImageMembersResponse::setMembers(const std::vector<GlanceImageMembers>& value)
{
    members_ = value;
    membersIsSet_ = true;
}

bool GlanceListImageMembersResponse::membersIsSet() const
{
    return membersIsSet_;
}

void GlanceListImageMembersResponse::unsetmembers()
{
    membersIsSet_ = false;
}

std::string GlanceListImageMembersResponse::getSchema() const
{
    return schema_;
}

void GlanceListImageMembersResponse::setSchema(const std::string& value)
{
    schema_ = value;
    schemaIsSet_ = true;
}

bool GlanceListImageMembersResponse::schemaIsSet() const
{
    return schemaIsSet_;
}

void GlanceListImageMembersResponse::unsetschema()
{
    schemaIsSet_ = false;
}

}
}
}
}
}


