
#ifndef HUAWEICLOUD_SDK_CTS_V3_MODEL_Traces_H_
#define HUAWEICLOUD_SDK_CTS_V3_MODEL_Traces_H_


#include <huaweicloud/cts/v3/CtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cts/v3/model/UserInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CTS_V3_EXPORT  Traces
    : public ModelBase
{
public:
    Traces();
    virtual ~Traces();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Traces members

    /// <summary>
    /// 标识事件对应的云服务资源ID。
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// 标识查询事件列表对应的事件名称。由0-9,a-z,A-Z,&#39;-&#39;,&#39;.&#39;,&#39;_&#39;,组成，长度为1～64个字符，且以首字符必须为字母。
    /// </summary>

    std::string getTraceName() const;
    bool traceNameIsSet() const;
    void unsettraceName();
    void setTraceName(const std::string& value);

    /// <summary>
    /// 标识事件等级，目前有三种：正常（normal），警告（warning），事故（incident）。
    /// </summary>

    std::string getTraceRating() const;
    bool traceRatingIsSet() const;
    void unsettraceRating();
    void setTraceRating(const std::string& value);

    /// <summary>
    /// 标识事件发生源头类型，管理类事件主要包括API调用（ApiCall），Console页面调用（ConsoleAction）和系统间调用（SystemAction）。 数据类事件主要包括ObsSDK，ObsAPI。
    /// </summary>

    std::string getTraceType() const;
    bool traceTypeIsSet() const;
    void unsettraceType();
    void setTraceType(const std::string& value);

    /// <summary>
    /// 标识事件对应接口请求内容，即资源操作请求体。
    /// </summary>

    std::string getRequest() const;
    bool requestIsSet() const;
    void unsetrequest();
    void setRequest(const std::string& value);

    /// <summary>
    /// 记录用户请求的响应，标识事件对应接口响应内容，即资源操作结果返回体。
    /// </summary>

    std::string getResponse() const;
    bool responseIsSet() const;
    void unsetresponse();
    void setResponse(const std::string& value);

    /// <summary>
    /// 记录用户请求的响应，标识事件对应接口返回的HTTP状态码。
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);

    /// <summary>
    /// 标识事件对应的云服务接口版本。
    /// </summary>

    std::string getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetapiVersion();
    void setApiVersion(const std::string& value);

    /// <summary>
    /// 标识其他云服务为此条事件添加的备注信息。
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// 标识云审计服务记录本次事件的时间戳。
    /// </summary>

    int64_t getRecordTime() const;
    bool recordTimeIsSet() const;
    void unsetrecordTime();
    void setRecordTime(int64_t value);

    /// <summary>
    /// 标识事件的ID，由系统生成的UUID。
    /// </summary>

    std::string getTraceId() const;
    bool traceIdIsSet() const;
    void unsettraceId();
    void setTraceId(const std::string& value);

    /// <summary>
    /// 标识事件产生的时间戳。
    /// </summary>

    int64_t getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(int64_t value);

    /// <summary>
    /// 
    /// </summary>

    UserInfo getUser() const;
    bool userIsSet() const;
    void unsetuser();
    void setUser(const UserInfo& value);

    /// <summary>
    /// 标识查询事件列表对应的云服务类型。必须为已对接CTS的云服务的英文缩写，且服务类型一般为大写字母。
    /// </summary>

    std::string getServiceType() const;
    bool serviceTypeIsSet() const;
    void unsetserviceType();
    void setServiceType(const std::string& value);

    /// <summary>
    /// 查询事件列表对应的资源类型。
    /// </summary>

    std::string getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const std::string& value);

    /// <summary>
    /// 标识触发事件的租户IP。
    /// </summary>

    std::string getSourceIp() const;
    bool sourceIpIsSet() const;
    void unsetsourceIp();
    void setSourceIp(const std::string& value);

    /// <summary>
    /// 标识事件对应的资源名称。
    /// </summary>

    std::string getResourceName() const;
    bool resourceNameIsSet() const;
    void unsetresourceName();
    void setResourceName(const std::string& value);

    /// <summary>
    /// 记录本次请求的request id
    /// </summary>

    std::string getRequestId() const;
    bool requestIdIsSet() const;
    void unsetrequestId();
    void setRequestId(const std::string& value);

    /// <summary>
    /// 记录本次请求出错后，问题定位所需要的辅助信息。
    /// </summary>

    std::string getLocationInfo() const;
    bool locationInfoIsSet() const;
    void unsetlocationInfo();
    void setLocationInfo(const std::string& value);

    /// <summary>
    /// 云资源的详情页面
    /// </summary>

    std::string getEndpoint() const;
    bool endpointIsSet() const;
    void unsetendpoint();
    void setEndpoint(const std::string& value);

    /// <summary>
    /// 云资源的详情页面的访问链接（不含endpoint）
    /// </summary>

    std::string getResourceUrl() const;
    bool resourceUrlIsSet() const;
    void unsetresourceUrl();
    void setResourceUrl(const std::string& value);


protected:
    std::string resourceId_;
    bool resourceIdIsSet_;
    std::string traceName_;
    bool traceNameIsSet_;
    std::string traceRating_;
    bool traceRatingIsSet_;
    std::string traceType_;
    bool traceTypeIsSet_;
    std::string request_;
    bool requestIsSet_;
    std::string response_;
    bool responseIsSet_;
    std::string code_;
    bool codeIsSet_;
    std::string apiVersion_;
    bool apiVersionIsSet_;
    std::string message_;
    bool messageIsSet_;
    int64_t recordTime_;
    bool recordTimeIsSet_;
    std::string traceId_;
    bool traceIdIsSet_;
    int64_t time_;
    bool timeIsSet_;
    UserInfo user_;
    bool userIsSet_;
    std::string serviceType_;
    bool serviceTypeIsSet_;
    std::string resourceType_;
    bool resourceTypeIsSet_;
    std::string sourceIp_;
    bool sourceIpIsSet_;
    std::string resourceName_;
    bool resourceNameIsSet_;
    std::string requestId_;
    bool requestIdIsSet_;
    std::string locationInfo_;
    bool locationInfoIsSet_;
    std::string endpoint_;
    bool endpointIsSet_;
    std::string resourceUrl_;
    bool resourceUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CTS_V3_MODEL_Traces_H_
