

#include "huaweicloud/cloudtest/v1/model/CreateTestSuitByRepoFileInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CreateTestSuitByRepoFileInfo::CreateTestSuitByRepoFileInfo()
{
    testsuiteName_ = "";
    testsuiteNameIsSet_ = false;
    repositoryId_ = "";
    repositoryIdIsSet_ = false;
    repositoryBranch_ = "";
    repositoryBranchIsSet_ = false;
    filePath_ = "";
    filePathIsSet_ = false;
}

CreateTestSuitByRepoFileInfo::~CreateTestSuitByRepoFileInfo() = default;

void CreateTestSuitByRepoFileInfo::validate()
{
}

web::json::value CreateTestSuitByRepoFileInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(testsuiteNameIsSet_) {
        val[utility::conversions::to_string_t("testsuite_name")] = ModelBase::toJson(testsuiteName_);
    }
    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(repositoryBranchIsSet_) {
        val[utility::conversions::to_string_t("repository_branch")] = ModelBase::toJson(repositoryBranch_);
    }
    if(filePathIsSet_) {
        val[utility::conversions::to_string_t("file_path")] = ModelBase::toJson(filePath_);
    }

    return val;
}
bool CreateTestSuitByRepoFileInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("testsuite_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("testsuite_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestsuiteName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repository_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repository_branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryBranch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilePath(refVal);
        }
    }
    return ok;
}


std::string CreateTestSuitByRepoFileInfo::getTestsuiteName() const
{
    return testsuiteName_;
}

void CreateTestSuitByRepoFileInfo::setTestsuiteName(const std::string& value)
{
    testsuiteName_ = value;
    testsuiteNameIsSet_ = true;
}

bool CreateTestSuitByRepoFileInfo::testsuiteNameIsSet() const
{
    return testsuiteNameIsSet_;
}

void CreateTestSuitByRepoFileInfo::unsettestsuiteName()
{
    testsuiteNameIsSet_ = false;
}

std::string CreateTestSuitByRepoFileInfo::getRepositoryId() const
{
    return repositoryId_;
}

void CreateTestSuitByRepoFileInfo::setRepositoryId(const std::string& value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool CreateTestSuitByRepoFileInfo::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void CreateTestSuitByRepoFileInfo::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string CreateTestSuitByRepoFileInfo::getRepositoryBranch() const
{
    return repositoryBranch_;
}

void CreateTestSuitByRepoFileInfo::setRepositoryBranch(const std::string& value)
{
    repositoryBranch_ = value;
    repositoryBranchIsSet_ = true;
}

bool CreateTestSuitByRepoFileInfo::repositoryBranchIsSet() const
{
    return repositoryBranchIsSet_;
}

void CreateTestSuitByRepoFileInfo::unsetrepositoryBranch()
{
    repositoryBranchIsSet_ = false;
}

std::string CreateTestSuitByRepoFileInfo::getFilePath() const
{
    return filePath_;
}

void CreateTestSuitByRepoFileInfo::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool CreateTestSuitByRepoFileInfo::filePathIsSet() const
{
    return filePathIsSet_;
}

void CreateTestSuitByRepoFileInfo::unsetfilePath()
{
    filePathIsSet_ = false;
}

}
}
}
}
}


