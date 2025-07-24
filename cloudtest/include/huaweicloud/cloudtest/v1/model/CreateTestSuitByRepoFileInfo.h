
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CreateTestSuitByRepoFileInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CreateTestSuitByRepoFileInfo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 生成测试套的请求信息
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  CreateTestSuitByRepoFileInfo
    : public ModelBase
{
public:
    CreateTestSuitByRepoFileInfo();
    virtual ~CreateTestSuitByRepoFileInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateTestSuitByRepoFileInfo members

    /// <summary>
    /// 要生成的测试套名称
    /// </summary>

    std::string getTestsuiteName() const;
    bool testsuiteNameIsSet() const;
    void unsettestsuiteName();
    void setTestsuiteName(const std::string& value);

    /// <summary>
    /// 仓库id
    /// </summary>

    std::string getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(const std::string& value);

    /// <summary>
    /// 仓库分支
    /// </summary>

    std::string getRepositoryBranch() const;
    bool repositoryBranchIsSet() const;
    void unsetrepositoryBranch();
    void setRepositoryBranch(const std::string& value);

    /// <summary>
    /// 仓库中yaml或json文件的相对路径，仅支持swagger 2.0版本的yaml和json文件
    /// </summary>

    std::string getFilePath() const;
    bool filePathIsSet() const;
    void unsetfilePath();
    void setFilePath(const std::string& value);


protected:
    std::string testsuiteName_;
    bool testsuiteNameIsSet_;
    std::string repositoryId_;
    bool repositoryIdIsSet_;
    std::string repositoryBranch_;
    bool repositoryBranchIsSet_;
    std::string filePath_;
    bool filePathIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CreateTestSuitByRepoFileInfo_H_
