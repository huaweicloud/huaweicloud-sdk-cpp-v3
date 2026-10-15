

#include "huaweicloud/drs/v5/model/ReplayCompareResultResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ReplayCompareResultResp::ReplayCompareResultResp()
{
    sqlTemplate_ = "";
    sqlTemplateIsSet_ = false;
    sqlTemplateMd5_ = "";
    sqlTemplateMd5IsSet_ = false;
    sqlParams_ = "";
    sqlParamsIsSet_ = false;
    targetContent_ = "";
    targetContentIsSet_ = false;
    mirrorContent_ = "";
    mirrorContentIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
}

ReplayCompareResultResp::~ReplayCompareResultResp() = default;

void ReplayCompareResultResp::validate()
{
}

web::json::value ReplayCompareResultResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sqlTemplateIsSet_) {
        val[utility::conversions::to_string_t("sql_template")] = ModelBase::toJson(sqlTemplate_);
    }
    if(sqlTemplateMd5IsSet_) {
        val[utility::conversions::to_string_t("sql_template_md5")] = ModelBase::toJson(sqlTemplateMd5_);
    }
    if(sqlParamsIsSet_) {
        val[utility::conversions::to_string_t("sql_params")] = ModelBase::toJson(sqlParams_);
    }
    if(targetContentIsSet_) {
        val[utility::conversions::to_string_t("target_content")] = ModelBase::toJson(targetContent_);
    }
    if(mirrorContentIsSet_) {
        val[utility::conversions::to_string_t("mirror_content")] = ModelBase::toJson(mirrorContent_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }

    return val;
}
bool ReplayCompareResultResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sql_template"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_template"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlTemplate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sql_template_md5"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_template_md5"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlTemplateMd5(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sql_params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_params"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlParams(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_content"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetContent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mirror_content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mirror_content"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMirrorContent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    return ok;
}


std::string ReplayCompareResultResp::getSqlTemplate() const
{
    return sqlTemplate_;
}

void ReplayCompareResultResp::setSqlTemplate(const std::string& value)
{
    sqlTemplate_ = value;
    sqlTemplateIsSet_ = true;
}

bool ReplayCompareResultResp::sqlTemplateIsSet() const
{
    return sqlTemplateIsSet_;
}

void ReplayCompareResultResp::unsetsqlTemplate()
{
    sqlTemplateIsSet_ = false;
}

std::string ReplayCompareResultResp::getSqlTemplateMd5() const
{
    return sqlTemplateMd5_;
}

void ReplayCompareResultResp::setSqlTemplateMd5(const std::string& value)
{
    sqlTemplateMd5_ = value;
    sqlTemplateMd5IsSet_ = true;
}

bool ReplayCompareResultResp::sqlTemplateMd5IsSet() const
{
    return sqlTemplateMd5IsSet_;
}

void ReplayCompareResultResp::unsetsqlTemplateMd5()
{
    sqlTemplateMd5IsSet_ = false;
}

std::string ReplayCompareResultResp::getSqlParams() const
{
    return sqlParams_;
}

void ReplayCompareResultResp::setSqlParams(const std::string& value)
{
    sqlParams_ = value;
    sqlParamsIsSet_ = true;
}

bool ReplayCompareResultResp::sqlParamsIsSet() const
{
    return sqlParamsIsSet_;
}

void ReplayCompareResultResp::unsetsqlParams()
{
    sqlParamsIsSet_ = false;
}

std::string ReplayCompareResultResp::getTargetContent() const
{
    return targetContent_;
}

void ReplayCompareResultResp::setTargetContent(const std::string& value)
{
    targetContent_ = value;
    targetContentIsSet_ = true;
}

bool ReplayCompareResultResp::targetContentIsSet() const
{
    return targetContentIsSet_;
}

void ReplayCompareResultResp::unsettargetContent()
{
    targetContentIsSet_ = false;
}

std::string ReplayCompareResultResp::getMirrorContent() const
{
    return mirrorContent_;
}

void ReplayCompareResultResp::setMirrorContent(const std::string& value)
{
    mirrorContent_ = value;
    mirrorContentIsSet_ = true;
}

bool ReplayCompareResultResp::mirrorContentIsSet() const
{
    return mirrorContentIsSet_;
}

void ReplayCompareResultResp::unsetmirrorContent()
{
    mirrorContentIsSet_ = false;
}

std::string ReplayCompareResultResp::getCreateTime() const
{
    return createTime_;
}

void ReplayCompareResultResp::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ReplayCompareResultResp::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ReplayCompareResultResp::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

}
}
}
}
}


