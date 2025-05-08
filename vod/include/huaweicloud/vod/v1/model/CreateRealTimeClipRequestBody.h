
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_CreateRealTimeClipRequestBody_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_CreateRealTimeClipRequestBody_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/vod/v1/model/AdditionalObjectProcessReq.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// obs桶取回请求消息
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  CreateRealTimeClipRequestBody
    : public ModelBase
{
public:
    CreateRealTimeClipRequestBody();
    virtual ~CreateRealTimeClipRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateRealTimeClipRequestBody members

    /// <summary>
    /// 时移域名 
    /// </summary>

    std::string getTimeshiftDomain() const;
    bool timeshiftDomainIsSet() const;
    void unsettimeshiftDomain();
    void setTimeshiftDomain(const std::string& value);

    /// <summary>
    /// live的应用名，默认可填写live 
    /// </summary>

    std::string getApp() const;
    bool appIsSet() const;
    void unsetapp();
    void setApp(const std::string& value);

    /// <summary>
    /// 截取的流名 
    /// </summary>

    std::string getStream() const;
    bool streamIsSet() const;
    void unsetstream();
    void setStream(const std::string& value);

    /// <summary>
    /// 直播时移的转码模板，空表示截取源流 
    /// </summary>

    std::string getTransTemplateName() const;
    bool transTemplateNameIsSet() const;
    void unsettransTemplateName();
    void setTransTemplateName(const std::string& value);

    /// <summary>
    /// 截取流的开始时间，格式为：YYYY-MM-DDTHH:mm:ssZ（UTC时间）,开始时间与结束时间的间隔最大为12小时 
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 截取流的开始时间，格式为：YYYY-MM-DDTHH:mm:ssZ（UTC时间）,开始时间与结束时间的间隔最大为12小时 
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 0 非固化，1 固化。默认非固化 
    /// </summary>

    int32_t getIsPersistence() const;
    bool isPersistenceIsSet() const;
    void unsetisPersistence();
    void setIsPersistence(int32_t value);

    /// <summary>
    /// 非固化场景为空，固化场景必填，复制到该桶中。 
    /// </summary>

    std::string getOutputBucket() const;
    bool outputBucketIsSet() const;
    void unsetoutputBucket();
    void setOutputBucket(const std::string& value);

    /// <summary>
    /// 截取指定的m3u8文件路径名，仅支持HLS 
    /// </summary>

    std::string getOutputObject() const;
    bool outputObjectIsSet() const;
    void unsetoutputObject();
    void setOutputObject(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    AdditionalObjectProcessReq getMediaProcessTask() const;
    bool mediaProcessTaskIsSet() const;
    void unsetmediaProcessTask();
    void setMediaProcessTask(const AdditionalObjectProcessReq& value);

    /// <summary>
    /// 回调地址，为空则不回调 
    /// </summary>

    std::string getCallbackUrl() const;
    bool callbackUrlIsSet() const;
    void unsetcallbackUrl();
    void setCallbackUrl(const std::string& value);

    /// <summary>
    /// 自定义上下文，回调时会回调给用户，透传信息 
    /// </summary>

    std::string getSessionContext() const;
    bool sessionContextIsSet() const;
    void unsetsessionContext();
    void setSessionContext(const std::string& value);


protected:
    std::string timeshiftDomain_;
    bool timeshiftDomainIsSet_;
    std::string app_;
    bool appIsSet_;
    std::string stream_;
    bool streamIsSet_;
    std::string transTemplateName_;
    bool transTemplateNameIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    int32_t isPersistence_;
    bool isPersistenceIsSet_;
    std::string outputBucket_;
    bool outputBucketIsSet_;
    std::string outputObject_;
    bool outputObjectIsSet_;
    AdditionalObjectProcessReq mediaProcessTask_;
    bool mediaProcessTaskIsSet_;
    std::string callbackUrl_;
    bool callbackUrlIsSet_;
    std::string sessionContext_;
    bool sessionContextIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_CreateRealTimeClipRequestBody_H_
