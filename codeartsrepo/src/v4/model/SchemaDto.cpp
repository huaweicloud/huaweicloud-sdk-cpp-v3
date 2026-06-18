

#include "huaweicloud/codeartsrepo/v4/model/SchemaDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




SchemaDto::SchemaDto()
{
    version_ = "";
    versionIsSet_ = false;
    maximumFileSize_ = 0;
    maximumFileSizeIsSet_ = false;
    maximumLineLength_ = 0;
    maximumLineLengthIsSet_ = false;
    maximumTruncateLine_ = 0;
    maximumTruncateLineIsSet_ = false;
    createAt_ = "";
    createAtIsSet_ = false;
    updateAt_ = "";
    updateAtIsSet_ = false;
    rebuildAt_ = "";
    rebuildAtIsSet_ = false;
    lastBuildAt_ = "";
    lastBuildAtIsSet_ = false;
    buildTimes_ = 0;
    buildTimesIsSet_ = false;
    queryTimes_ = 0;
    queryTimesIsSet_ = false;
    outlineTimes_ = 0;
    outlineTimesIsSet_ = false;
}

SchemaDto::~SchemaDto() = default;

void SchemaDto::validate()
{
}

web::json::value SchemaDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(maximumFileSizeIsSet_) {
        val[utility::conversions::to_string_t("maximum_file_size")] = ModelBase::toJson(maximumFileSize_);
    }
    if(maximumLineLengthIsSet_) {
        val[utility::conversions::to_string_t("maximum_line_length")] = ModelBase::toJson(maximumLineLength_);
    }
    if(maximumTruncateLineIsSet_) {
        val[utility::conversions::to_string_t("maximum_truncate_line")] = ModelBase::toJson(maximumTruncateLine_);
    }
    if(createAtIsSet_) {
        val[utility::conversions::to_string_t("create_at")] = ModelBase::toJson(createAt_);
    }
    if(updateAtIsSet_) {
        val[utility::conversions::to_string_t("update_at")] = ModelBase::toJson(updateAt_);
    }
    if(rebuildAtIsSet_) {
        val[utility::conversions::to_string_t("rebuild_at")] = ModelBase::toJson(rebuildAt_);
    }
    if(lastBuildAtIsSet_) {
        val[utility::conversions::to_string_t("last_build_at")] = ModelBase::toJson(lastBuildAt_);
    }
    if(buildTimesIsSet_) {
        val[utility::conversions::to_string_t("build_times")] = ModelBase::toJson(buildTimes_);
    }
    if(queryTimesIsSet_) {
        val[utility::conversions::to_string_t("query_times")] = ModelBase::toJson(queryTimes_);
    }
    if(outlineTimesIsSet_) {
        val[utility::conversions::to_string_t("outline_times")] = ModelBase::toJson(outlineTimes_);
    }

    return val;
}
bool SchemaDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("maximum_file_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("maximum_file_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaximumFileSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("maximum_line_length"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("maximum_line_length"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaximumLineLength(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("maximum_truncate_line"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("maximum_truncate_line"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaximumTruncateLine(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rebuild_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rebuild_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRebuildAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_build_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_build_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastBuildAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("build_times"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_times"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildTimes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("query_times"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_times"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryTimes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("outline_times"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("outline_times"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutlineTimes(refVal);
        }
    }
    return ok;
}


std::string SchemaDto::getVersion() const
{
    return version_;
}

void SchemaDto::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool SchemaDto::versionIsSet() const
{
    return versionIsSet_;
}

void SchemaDto::unsetversion()
{
    versionIsSet_ = false;
}

int32_t SchemaDto::getMaximumFileSize() const
{
    return maximumFileSize_;
}

void SchemaDto::setMaximumFileSize(int32_t value)
{
    maximumFileSize_ = value;
    maximumFileSizeIsSet_ = true;
}

bool SchemaDto::maximumFileSizeIsSet() const
{
    return maximumFileSizeIsSet_;
}

void SchemaDto::unsetmaximumFileSize()
{
    maximumFileSizeIsSet_ = false;
}

int32_t SchemaDto::getMaximumLineLength() const
{
    return maximumLineLength_;
}

void SchemaDto::setMaximumLineLength(int32_t value)
{
    maximumLineLength_ = value;
    maximumLineLengthIsSet_ = true;
}

bool SchemaDto::maximumLineLengthIsSet() const
{
    return maximumLineLengthIsSet_;
}

void SchemaDto::unsetmaximumLineLength()
{
    maximumLineLengthIsSet_ = false;
}

int32_t SchemaDto::getMaximumTruncateLine() const
{
    return maximumTruncateLine_;
}

void SchemaDto::setMaximumTruncateLine(int32_t value)
{
    maximumTruncateLine_ = value;
    maximumTruncateLineIsSet_ = true;
}

bool SchemaDto::maximumTruncateLineIsSet() const
{
    return maximumTruncateLineIsSet_;
}

void SchemaDto::unsetmaximumTruncateLine()
{
    maximumTruncateLineIsSet_ = false;
}

std::string SchemaDto::getCreateAt() const
{
    return createAt_;
}

void SchemaDto::setCreateAt(const std::string& value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool SchemaDto::createAtIsSet() const
{
    return createAtIsSet_;
}

void SchemaDto::unsetcreateAt()
{
    createAtIsSet_ = false;
}

std::string SchemaDto::getUpdateAt() const
{
    return updateAt_;
}

void SchemaDto::setUpdateAt(const std::string& value)
{
    updateAt_ = value;
    updateAtIsSet_ = true;
}

bool SchemaDto::updateAtIsSet() const
{
    return updateAtIsSet_;
}

void SchemaDto::unsetupdateAt()
{
    updateAtIsSet_ = false;
}

std::string SchemaDto::getRebuildAt() const
{
    return rebuildAt_;
}

void SchemaDto::setRebuildAt(const std::string& value)
{
    rebuildAt_ = value;
    rebuildAtIsSet_ = true;
}

bool SchemaDto::rebuildAtIsSet() const
{
    return rebuildAtIsSet_;
}

void SchemaDto::unsetrebuildAt()
{
    rebuildAtIsSet_ = false;
}

std::string SchemaDto::getLastBuildAt() const
{
    return lastBuildAt_;
}

void SchemaDto::setLastBuildAt(const std::string& value)
{
    lastBuildAt_ = value;
    lastBuildAtIsSet_ = true;
}

bool SchemaDto::lastBuildAtIsSet() const
{
    return lastBuildAtIsSet_;
}

void SchemaDto::unsetlastBuildAt()
{
    lastBuildAtIsSet_ = false;
}

int32_t SchemaDto::getBuildTimes() const
{
    return buildTimes_;
}

void SchemaDto::setBuildTimes(int32_t value)
{
    buildTimes_ = value;
    buildTimesIsSet_ = true;
}

bool SchemaDto::buildTimesIsSet() const
{
    return buildTimesIsSet_;
}

void SchemaDto::unsetbuildTimes()
{
    buildTimesIsSet_ = false;
}

int32_t SchemaDto::getQueryTimes() const
{
    return queryTimes_;
}

void SchemaDto::setQueryTimes(int32_t value)
{
    queryTimes_ = value;
    queryTimesIsSet_ = true;
}

bool SchemaDto::queryTimesIsSet() const
{
    return queryTimesIsSet_;
}

void SchemaDto::unsetqueryTimes()
{
    queryTimesIsSet_ = false;
}

int32_t SchemaDto::getOutlineTimes() const
{
    return outlineTimes_;
}

void SchemaDto::setOutlineTimes(int32_t value)
{
    outlineTimes_ = value;
    outlineTimesIsSet_ = true;
}

bool SchemaDto::outlineTimesIsSet() const
{
    return outlineTimesIsSet_;
}

void SchemaDto::unsetoutlineTimes()
{
    outlineTimesIsSet_ = false;
}

}
}
}
}
}


