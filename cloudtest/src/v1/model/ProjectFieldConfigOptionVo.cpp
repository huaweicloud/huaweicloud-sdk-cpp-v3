

#include "huaweicloud/cloudtest/v1/model/ProjectFieldConfigOptionVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ProjectFieldConfigOptionVo::ProjectFieldConfigOptionVo()
{
    uri_ = "";
    uriIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    code_ = "";
    codeIsSet_ = false;
    updatorIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    flag_ = 0;
    flagIsSet_ = false;
    sortNumb_ = 0;
    sortNumbIsSet_ = false;
    creatorIsSet_ = false;
    createTimeStamp_ = 0L;
    createTimeStampIsSet_ = false;
    updateTimeStamp_ = 0L;
    updateTimeStampIsSet_ = false;
}

ProjectFieldConfigOptionVo::~ProjectFieldConfigOptionVo() = default;

void ProjectFieldConfigOptionVo::validate()
{
}

web::json::value ProjectFieldConfigOptionVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uriIsSet_) {
        val[utility::conversions::to_string_t("uri")] = ModelBase::toJson(uri_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(updatorIsSet_) {
        val[utility::conversions::to_string_t("updator")] = ModelBase::toJson(updator_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(flagIsSet_) {
        val[utility::conversions::to_string_t("flag")] = ModelBase::toJson(flag_);
    }
    if(sortNumbIsSet_) {
        val[utility::conversions::to_string_t("sort_numb")] = ModelBase::toJson(sortNumb_);
    }
    if(creatorIsSet_) {
        val[utility::conversions::to_string_t("creator")] = ModelBase::toJson(creator_);
    }
    if(createTimeStampIsSet_) {
        val[utility::conversions::to_string_t("create_time_stamp")] = ModelBase::toJson(createTimeStamp_);
    }
    if(updateTimeStampIsSet_) {
        val[utility::conversions::to_string_t("update_time_stamp")] = ModelBase::toJson(updateTimeStamp_);
    }

    return val;
}
bool ProjectFieldConfigOptionVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUri(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updator"));
        if(!fieldValue.is_null())
        {
            NameAndIdVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flag"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_numb"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_numb"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortNumb(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator"));
        if(!fieldValue.is_null())
        {
            NameAndIdVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time_stamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time_stamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTimeStamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time_stamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time_stamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTimeStamp(refVal);
        }
    }
    return ok;
}


std::string ProjectFieldConfigOptionVo::getUri() const
{
    return uri_;
}

void ProjectFieldConfigOptionVo::setUri(const std::string& value)
{
    uri_ = value;
    uriIsSet_ = true;
}

bool ProjectFieldConfigOptionVo::uriIsSet() const
{
    return uriIsSet_;
}

void ProjectFieldConfigOptionVo::unseturi()
{
    uriIsSet_ = false;
}

std::string ProjectFieldConfigOptionVo::getName() const
{
    return name_;
}

void ProjectFieldConfigOptionVo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ProjectFieldConfigOptionVo::nameIsSet() const
{
    return nameIsSet_;
}

void ProjectFieldConfigOptionVo::unsetname()
{
    nameIsSet_ = false;
}

std::string ProjectFieldConfigOptionVo::getCode() const
{
    return code_;
}

void ProjectFieldConfigOptionVo::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool ProjectFieldConfigOptionVo::codeIsSet() const
{
    return codeIsSet_;
}

void ProjectFieldConfigOptionVo::unsetcode()
{
    codeIsSet_ = false;
}

NameAndIdVo ProjectFieldConfigOptionVo::getUpdator() const
{
    return updator_;
}

void ProjectFieldConfigOptionVo::setUpdator(const NameAndIdVo& value)
{
    updator_ = value;
    updatorIsSet_ = true;
}

bool ProjectFieldConfigOptionVo::updatorIsSet() const
{
    return updatorIsSet_;
}

void ProjectFieldConfigOptionVo::unsetupdator()
{
    updatorIsSet_ = false;
}

std::string ProjectFieldConfigOptionVo::getDescription() const
{
    return description_;
}

void ProjectFieldConfigOptionVo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ProjectFieldConfigOptionVo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ProjectFieldConfigOptionVo::unsetdescription()
{
    descriptionIsSet_ = false;
}

int32_t ProjectFieldConfigOptionVo::getFlag() const
{
    return flag_;
}

void ProjectFieldConfigOptionVo::setFlag(int32_t value)
{
    flag_ = value;
    flagIsSet_ = true;
}

bool ProjectFieldConfigOptionVo::flagIsSet() const
{
    return flagIsSet_;
}

void ProjectFieldConfigOptionVo::unsetflag()
{
    flagIsSet_ = false;
}

int32_t ProjectFieldConfigOptionVo::getSortNumb() const
{
    return sortNumb_;
}

void ProjectFieldConfigOptionVo::setSortNumb(int32_t value)
{
    sortNumb_ = value;
    sortNumbIsSet_ = true;
}

bool ProjectFieldConfigOptionVo::sortNumbIsSet() const
{
    return sortNumbIsSet_;
}

void ProjectFieldConfigOptionVo::unsetsortNumb()
{
    sortNumbIsSet_ = false;
}

NameAndIdVo ProjectFieldConfigOptionVo::getCreator() const
{
    return creator_;
}

void ProjectFieldConfigOptionVo::setCreator(const NameAndIdVo& value)
{
    creator_ = value;
    creatorIsSet_ = true;
}

bool ProjectFieldConfigOptionVo::creatorIsSet() const
{
    return creatorIsSet_;
}

void ProjectFieldConfigOptionVo::unsetcreator()
{
    creatorIsSet_ = false;
}

int64_t ProjectFieldConfigOptionVo::getCreateTimeStamp() const
{
    return createTimeStamp_;
}

void ProjectFieldConfigOptionVo::setCreateTimeStamp(int64_t value)
{
    createTimeStamp_ = value;
    createTimeStampIsSet_ = true;
}

bool ProjectFieldConfigOptionVo::createTimeStampIsSet() const
{
    return createTimeStampIsSet_;
}

void ProjectFieldConfigOptionVo::unsetcreateTimeStamp()
{
    createTimeStampIsSet_ = false;
}

int64_t ProjectFieldConfigOptionVo::getUpdateTimeStamp() const
{
    return updateTimeStamp_;
}

void ProjectFieldConfigOptionVo::setUpdateTimeStamp(int64_t value)
{
    updateTimeStamp_ = value;
    updateTimeStampIsSet_ = true;
}

bool ProjectFieldConfigOptionVo::updateTimeStampIsSet() const
{
    return updateTimeStampIsSet_;
}

void ProjectFieldConfigOptionVo::unsetupdateTimeStamp()
{
    updateTimeStampIsSet_ = false;
}

}
}
}
}
}


