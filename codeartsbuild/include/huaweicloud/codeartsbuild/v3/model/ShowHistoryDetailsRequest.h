
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowHistoryDetailsRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowHistoryDetailsRequest_H_

#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  ShowHistoryDetailsRequest
    : public ModelBase
{
public:
    ShowHistoryDetailsRequest();
    virtual ~ShowHistoryDetailsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowHistoryDetailsRequest members

    /// <summary>
    /// 构建的任务ID [获取项目下构建任务列表](https://support.huaweicloud.com/api-codeci/ShowJobListByProjectId.html)； 编辑构建任务时，浏览器URL末尾的32位数字、字母组合的字符串。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 构建任务的构建编号，从1开始，每次构建递增1
    /// </summary>

    int32_t getBuildNumber() const;
    bool buildNumberIsSet() const;
    void unsetbuildNumber();
    void setBuildNumber(int32_t value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    int32_t buildNumber_;
    bool buildNumberIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowHistoryDetailsRequest& dereference_from_shared_ptr(std::shared_ptr<ShowHistoryDetailsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowHistoryDetailsRequest_H_
