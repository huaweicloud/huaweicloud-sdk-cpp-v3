

#include "huaweicloud/codeartsrepo/v4/model/CreateFileResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




CreateFileResponse::CreateFileResponse()
{
    filePath_ = "";
    filePathIsSet_ = false;
    branch_ = "";
    branchIsSet_ = false;
}

CreateFileResponse::~CreateFileResponse() = default;

void CreateFileResponse::validate()
{
}

web::json::value CreateFileResponse::toJson() const
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
bool CreateFileResponse::fromJson(const web::json::value& val)
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


std::string CreateFileResponse::getFilePath() const
{
    return filePath_;
}

void CreateFileResponse::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool CreateFileResponse::filePathIsSet() const
{
    return filePathIsSet_;
}

void CreateFileResponse::unsetfilePath()
{
    filePathIsSet_ = false;
}

std::string CreateFileResponse::getBranch() const
{
    return branch_;
}

void CreateFileResponse::setBranch(const std::string& value)
{
    branch_ = value;
    branchIsSet_ = true;
}

bool CreateFileResponse::branchIsSet() const
{
    return branchIsSet_;
}

void CreateFileResponse::unsetbranch()
{
    branchIsSet_ = false;
}

}
}
}
}
}


