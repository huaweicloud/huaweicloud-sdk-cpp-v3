
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_StreamTranscodingTemplate_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_StreamTranscodingTemplate_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/live/v1/model/QualityInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  StreamTranscodingTemplate
    : public ModelBase
{
public:
    StreamTranscodingTemplate();
    virtual ~StreamTranscodingTemplate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StreamTranscodingTemplate members

    /// <summary>
    /// 推流域名
    /// </summary>

    std::string getDomain() const;
    bool domainIsSet() const;
    void unsetdomain();
    void setDomain(const std::string& value);

    /// <summary>
    /// 应用名称。 默认为“live”，若您需要自定义应用名称，请先提交工单申请。 
    /// </summary>

    std::string getAppName() const;
    bool appNameIsSet() const;
    void unsetappName();
    void setAppName(const std::string& value);

    /// <summary>
    /// 转码流触发模式。 - play：拉流触发转码。 - publish：推流触发转码。 默认为play 
    /// </summary>

    std::string getTransType() const;
    bool transTypeIsSet() const;
    void unsettransType();
    void setTransType(const std::string& value);

    /// <summary>
    /// 视频质量信息
    /// </summary>

    std::vector<QualityInfo>& getQualityInfo();
    bool qualityInfoIsSet() const;
    void unsetqualityInfo();
    void setQualityInfo(const std::vector<QualityInfo>& value);


protected:
    std::string domain_;
    bool domainIsSet_;
    std::string appName_;
    bool appNameIsSet_;
    std::string transType_;
    bool transTypeIsSet_;
    std::vector<QualityInfo> qualityInfo_;
    bool qualityInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_StreamTranscodingTemplate_H_
