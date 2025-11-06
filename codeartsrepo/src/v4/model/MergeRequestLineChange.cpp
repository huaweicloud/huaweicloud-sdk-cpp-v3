

#include "huaweicloud/codeartsrepo/v4/model/MergeRequestLineChange.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




MergeRequestLineChange::MergeRequestLineChange()
{
    addedLines_ = 0;
    addedLinesIsSet_ = false;
    removedLines_ = 0;
    removedLinesIsSet_ = false;
}

MergeRequestLineChange::~MergeRequestLineChange() = default;

void MergeRequestLineChange::validate()
{
}

web::json::value MergeRequestLineChange::toJson() const
{
    web::json::value val = web::json::value::object();

    if(addedLinesIsSet_) {
        val[utility::conversions::to_string_t("added_lines")] = ModelBase::toJson(addedLines_);
    }
    if(removedLinesIsSet_) {
        val[utility::conversions::to_string_t("removed_lines")] = ModelBase::toJson(removedLines_);
    }

    return val;
}
bool MergeRequestLineChange::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("added_lines"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("added_lines"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddedLines(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("removed_lines"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("removed_lines"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemovedLines(refVal);
        }
    }
    return ok;
}


int32_t MergeRequestLineChange::getAddedLines() const
{
    return addedLines_;
}

void MergeRequestLineChange::setAddedLines(int32_t value)
{
    addedLines_ = value;
    addedLinesIsSet_ = true;
}

bool MergeRequestLineChange::addedLinesIsSet() const
{
    return addedLinesIsSet_;
}

void MergeRequestLineChange::unsetaddedLines()
{
    addedLinesIsSet_ = false;
}

int32_t MergeRequestLineChange::getRemovedLines() const
{
    return removedLines_;
}

void MergeRequestLineChange::setRemovedLines(int32_t value)
{
    removedLines_ = value;
    removedLinesIsSet_ = true;
}

bool MergeRequestLineChange::removedLinesIsSet() const
{
    return removedLinesIsSet_;
}

void MergeRequestLineChange::unsetremovedLines()
{
    removedLinesIsSet_ = false;
}

}
}
}
}
}


