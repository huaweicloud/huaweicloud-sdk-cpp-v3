
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_CaptureResultUrlVO_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_CaptureResultUrlVO_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/CaptureFile.h>
#include <huaweicloud/cfw/v1/model/HostHeaderInfo.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  CaptureResultUrlVO
    : public ModelBase
{
public:
    CaptureResultUrlVO();
    virtual ~CaptureResultUrlVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CaptureResultUrlVO members

    /// <summary>
    /// 下载链接提取码
    /// </summary>

    std::string getCaptcha() const;
    bool captchaIsSet() const;
    void unsetcaptcha();
    void setCaptcha(const std::string& value);

    /// <summary>
    /// 下载链接过期时间
    /// </summary>

    int64_t getExpires() const;
    bool expiresIsSet() const;
    void unsetexpires();
    void setExpires(int64_t value);

    /// <summary>
    /// 抓包文件列表
    /// </summary>

    std::vector<CaptureFile>& getFileList();
    bool fileListIsSet() const;
    void unsetfileList();
    void setFileList(const std::vector<CaptureFile>& value);

    /// <summary>
    /// 
    /// </summary>

    HostHeaderInfo getRequestHeader() const;
    bool requestHeaderIsSet() const;
    void unsetrequestHeader();
    void setRequestHeader(const HostHeaderInfo& value);

    /// <summary>
    /// 下载链接
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);


protected:
    std::string captcha_;
    bool captchaIsSet_;
    int64_t expires_;
    bool expiresIsSet_;
    std::vector<CaptureFile> fileList_;
    bool fileListIsSet_;
    HostHeaderInfo requestHeader_;
    bool requestHeaderIsSet_;
    std::string url_;
    bool urlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_CaptureResultUrlVO_H_
