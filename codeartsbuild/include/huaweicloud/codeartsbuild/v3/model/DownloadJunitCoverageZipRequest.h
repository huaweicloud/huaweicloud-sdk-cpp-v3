
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_DownloadJunitCoverageZipRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_DownloadJunitCoverageZipRequest_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  DownloadJunitCoverageZipRequest
    : public ModelBase
{
public:
    DownloadJunitCoverageZipRequest();
    virtual ~DownloadJunitCoverageZipRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DownloadJunitCoverageZipRequest members

    /// <summary>
    /// 构建的任务ID； 编辑构建任务时，浏览器URL末尾的32位数字、字母组合的字符串。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 构建任务的构建编号，从1开始，每次构建递增1
    /// </summary>

    int32_t getBuildNo() const;
    bool buildNoIsSet() const;
    void unsetbuildNo();
    void setBuildNo(int32_t value);

    /// <summary>
    /// 资源ID，下载覆盖率报告时使用
    /// </summary>

    std::string getRootId() const;
    bool rootIdIsSet() const;
    void unsetrootId();
    void setRootId(const std::string& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    int32_t buildNo_;
    bool buildNoIsSet_;
    std::string rootId_;
    bool rootIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DownloadJunitCoverageZipRequest& dereference_from_shared_ptr(std::shared_ptr<DownloadJunitCoverageZipRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_DownloadJunitCoverageZipRequest_H_
