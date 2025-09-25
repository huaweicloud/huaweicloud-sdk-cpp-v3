

#include "huaweicloud/codehub/v4/model/UpdateFileResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




UpdateFileResponse::UpdateFileResponse()
{
    filePath_ = "";
    filePathIsSet_ = false;
    branch_ = "";
    branchIsSet_ = false;
}

UpdateFileResponse::~UpdateFileResponse() = default;

void UpdateFileResponse::validate()
{
}

web::json::value UpdateFileResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(filePathIsSet_) {
        val[utility::conversions::to_string_t("file_path")] = ModelBase::toJson(filePath_);
    }
    if(branchIsSet_) {
        val[utility::conversions::to_string_t("branch")] = ModelBase::toJson(branch_);
    }

    return val;
}
bool UpdateFileResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("file_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilePath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranch(refVal);
        }
    }
    return ok;
}


std::string UpdateFileResponse::getFilePath() const
{
    return filePath_;
}

void UpdateFileResponse::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool UpdateFileResponse::filePathIsSet() const
{
    return filePathIsSet_;
}

void UpdateFileResponse::unsetfilePath()
{
    filePathIsSet_ = false;
}

std::string UpdateFileResponse::getBranch() const
{
    return branch_;
}

void UpdateFileResponse::setBranch(const std::string& value)
{
    branch_ = value;
    branchIsSet_ = true;
}

bool UpdateFileResponse::branchIsSet() const
{
    return branchIsSet_;
}

void UpdateFileResponse::unsetbranch()
{
    branchIsSet_ = false;
}

}
}
}
}
}


