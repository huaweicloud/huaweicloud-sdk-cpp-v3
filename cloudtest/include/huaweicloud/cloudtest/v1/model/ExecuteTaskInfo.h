
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ExecuteTaskInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ExecuteTaskInfo_H_


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
/// 测试套执行结果
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ExecuteTaskInfo
    : public ModelBase
{
public:
    ExecuteTaskInfo();
    virtual ~ExecuteTaskInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExecuteTaskInfo members

    /// <summary>
    /// 描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 发布版本号
    /// </summary>

    std::string getReleaseDev() const;
    bool releaseDevIsSet() const;
    void unsetreleaseDev();
    void setReleaseDev(const std::string& value);

    /// <summary>
    /// 结果Code
    /// </summary>

    std::string getResultCode() const;
    bool resultCodeIsSet() const;
    void unsetresultCode();
    void setResultCode(const std::string& value);

    /// <summary>
    /// 任务执行结果Uri
    /// </summary>

    std::string getTestResultUri() const;
    bool testResultUriIsSet() const;
    void unsettestResultUri();
    void setTestResultUri(const std::string& value);

    /// <summary>
    /// 状态Code
    /// </summary>

    std::string getStatusCode() const;
    bool statusCodeIsSet() const;
    void unsetstatusCode();
    void setStatusCode(const std::string& value);

    /// <summary>
    /// 分支/迭代uri
    /// </summary>

    std::string getVersionUri() const;
    bool versionUriIsSet() const;
    void unsetversionUri();
    void setVersionUri(const std::string& value);


protected:
    std::string description_;
    bool descriptionIsSet_;
    std::string releaseDev_;
    bool releaseDevIsSet_;
    std::string resultCode_;
    bool resultCodeIsSet_;
    std::string testResultUri_;
    bool testResultUriIsSet_;
    std::string statusCode_;
    bool statusCodeIsSet_;
    std::string versionUri_;
    bool versionUriIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ExecuteTaskInfo_H_
