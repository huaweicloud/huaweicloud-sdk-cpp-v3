

#include "huaweicloud/codehub/v4/model/RenameFileResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




RenameFileResponse::RenameFileResponse()
{
    filePath_ = "";
    filePathIsSet_ = false;
    branch_ = "";
    branchIsSet_ = false;
}

RenameFileResponse::~RenameFileResponse() = default;

void RenameFileResponse::validate()
{
}

web::json::value RenameFileResponse::toJson() const
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
bool RenameFileResponse::fromJson(const web::json::value& val)
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


std::string RenameFileResponse::getFilePath() const
{
    return filePath_;
}

void RenameFileResponse::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool RenameFileResponse::filePathIsSet() const
{
    return filePathIsSet_;
}

void RenameFileResponse::unsetfilePath()
{
    filePathIsSet_ = false;
}

std::string RenameFileResponse::getBranch() const
{
    return branch_;
}

void RenameFileResponse::setBranch(const std::string& value)
{
    branch_ = value;
    branchIsSet_ = true;
}

bool RenameFileResponse::branchIsSet() const
{
    return branchIsSet_;
}

void RenameFileResponse::unsetbranch()
{
    branchIsSet_ = false;
}

}
}
}
}
}


