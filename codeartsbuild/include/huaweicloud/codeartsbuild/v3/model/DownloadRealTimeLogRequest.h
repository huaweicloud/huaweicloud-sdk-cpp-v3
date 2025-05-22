
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_DownloadRealTimeLogRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_DownloadRealTimeLogRequest_H_


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
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  DownloadRealTimeLogRequest
    : public ModelBase
{
public:
    DownloadRealTimeLogRequest();
    virtual ~DownloadRealTimeLogRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DownloadRealTimeLogRequest members

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
    /// 偏移量，传入前一次请求返回的offset
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 可控制返回内容长度，默认值为1000000
    /// </summary>

    int32_t getLength() const;
    bool lengthIsSet() const;
    void unsetlength();
    void setLength(int32_t value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    int32_t buildNo_;
    bool buildNoIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t length_;
    bool lengthIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DownloadRealTimeLogRequest& dereference_from_shared_ptr(std::shared_ptr<DownloadRealTimeLogRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_DownloadRealTimeLogRequest_H_
