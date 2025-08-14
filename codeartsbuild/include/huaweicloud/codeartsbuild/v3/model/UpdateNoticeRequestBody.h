
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_UpdateNoticeRequestBody_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_UpdateNoticeRequestBody_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新消息接口返回体
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  UpdateNoticeRequestBody
    : public ModelBase
{
public:
    UpdateNoticeRequestBody();
    virtual ~UpdateNoticeRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateNoticeRequestBody members

    /// <summary>
    /// 通知类型
    /// </summary>

    std::string getNoticeType() const;
    bool noticeTypeIsSet() const;
    void unsetnoticeType();
    void setNoticeType(const std::string& value);

    /// <summary>
    /// 开启的通知的种类
    /// </summary>

    std::vector<std::string>& getEnabledEventTypeNames();
    bool enabledEventTypeNamesIsSet() const;
    void unsetenabledEventTypeNames();
    void setEnabledEventTypeNames(const std::vector<std::string>& value);

    /// <summary>
    /// 是否开启消息通知。
    /// </summary>

    std::string getSendSwitch() const;
    bool sendSwitchIsSet() const;
    void unsetsendSwitch();
    void setSendSwitch(const std::string& value);

    /// <summary>
    /// 通知参数配置
    /// </summary>

    std::string getParamConfig() const;
    bool paramConfigIsSet() const;
    void unsetparamConfig();
    void setParamConfig(const std::string& value);

    /// <summary>
    /// 是否使用项目级消息通知设置。
    /// </summary>

    std::string getUseProjectNotice() const;
    bool useProjectNoticeIsSet() const;
    void unsetuseProjectNotice();
    void setUseProjectNotice(const std::string& value);


protected:
    std::string noticeType_;
    bool noticeTypeIsSet_;
    std::vector<std::string> enabledEventTypeNames_;
    bool enabledEventTypeNamesIsSet_;
    std::string sendSwitch_;
    bool sendSwitchIsSet_;
    std::string paramConfig_;
    bool paramConfigIsSet_;
    std::string useProjectNotice_;
    bool useProjectNoticeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_UpdateNoticeRequestBody_H_
