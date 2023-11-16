
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_DisableNoticeRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_DisableNoticeRequest_H_


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
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  DisableNoticeRequest
    : public ModelBase
{
public:
    DisableNoticeRequest();
    virtual ~DisableNoticeRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DisableNoticeRequest members

    /// <summary>
    /// 构建的任务ID； 编辑构建任务时，浏览器URL末尾的32位数字、字母组合的字符串。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 通知的类型,分为消息，邮件和钉钉
    /// </summary>

    std::string getNoticeType() const;
    bool noticeTypeIsSet() const;
    void unsetnoticeType();
    void setNoticeType(const std::string& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string noticeType_;
    bool noticeTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DisableNoticeRequest& dereference_from_shared_ptr(std::shared_ptr<DisableNoticeRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_DisableNoticeRequest_H_
