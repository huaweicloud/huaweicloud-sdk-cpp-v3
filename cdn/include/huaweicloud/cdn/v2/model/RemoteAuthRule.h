
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_RemoteAuthRule_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_RemoteAuthRule_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v2/model/CustomArgs.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 远程鉴权配置。
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  RemoteAuthRule
    : public ModelBase
{
public:
    RemoteAuthRule();
    virtual ~RemoteAuthRule();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RemoteAuthRule members

    /// <summary>
    /// 可访问的鉴权服务器地址。 输入的URL必须有“http”或“https”。不能是localhost或127.0.0.1这类本地地址。 不能是CDN的加速域名。
    /// </summary>

    std::string getAuthServer() const;
    bool authServerIsSet() const;
    void unsetauthServer();
    void setAuthServer(const std::string& value);

    /// <summary>
    /// 鉴权服务器支持的请求方法，支持GET、POST、HEAD。
    /// </summary>

    std::string getRequestMethod() const;
    bool requestMethodIsSet() const;
    void unsetrequestMethod();
    void setRequestMethod(const std::string& value);

    /// <summary>
    /// all（所有文件类型）：所有文件均参与鉴权。 specific_file（指定文件类型）：指定类型的文件参与鉴权。示例：jpg|MP4。 文件类型不区分大小写，即：jpg和JPG代表同一种文件类型，多个文件类型用“|”分割。
    /// </summary>

    std::string getFileTypeSetting() const;
    bool fileTypeSettingIsSet() const;
    void unsetfileTypeSetting();
    void setFileTypeSetting(const std::string& value);

    /// <summary>
    /// 字符总数不能超过512,当file_type_setting等于specific_file时为必选，其余情况为空， 由大小写字母和数字构成，文件类型用竖线分隔，例如jpg|mp4，只有在必选情况下才会对该字段做校验。
    /// </summary>

    std::string getSpecifiedFileType() const;
    bool specifiedFileTypeIsSet() const;
    void unsetspecifiedFileType();
    void setSpecifiedFileType(const std::string& value);

    /// <summary>
    /// 设置用户请求中需要参与鉴权的参数，可选reserve_all_args（保留所有URL参数）、reserve_specific_args（保留指定URL参数）、ignore_all_args（忽略所有URL参数）。
    /// </summary>

    std::string getReserveArgsSetting() const;
    bool reserveArgsSettingIsSet() const;
    void unsetreserveArgsSetting();
    void setReserveArgsSetting(const std::string& value);

    /// <summary>
    /// 当reserve_args_setting等于reserve_specific_args时为必选，其余情况为空，要保留的参数，多个参数用竖线分隔：key1|key2。
    /// </summary>

    std::string getReserveArgs() const;
    bool reserveArgsIsSet() const;
    void unsetreserveArgs();
    void setReserveArgs(const std::string& value);

    /// <summary>
    /// URL鉴权参数
    /// </summary>

    std::vector<CustomArgs>& getAddCustomArgsRules();
    bool addCustomArgsRulesIsSet() const;
    void unsetaddCustomArgsRules();
    void setAddCustomArgsRules(const std::vector<CustomArgs>& value);

    /// <summary>
    /// 设置用户请求中参与鉴权请求头，可选reserve_all_headers（保留所有请求头参数）、reserve_specific_headers（保留指定请求头参数）、ignore_all_headers（忽略所有请求头参数）。
    /// </summary>

    std::string getReserveHeadersSetting() const;
    bool reserveHeadersSettingIsSet() const;
    void unsetreserveHeadersSetting();
    void setReserveHeadersSetting(const std::string& value);

    /// <summary>
    /// 请求头鉴权参数
    /// </summary>

    std::vector<CustomArgs>& getAddCustomHeadersRules();
    bool addCustomHeadersRulesIsSet() const;
    void unsetaddCustomHeadersRules();
    void setAddCustomHeadersRules(const std::vector<CustomArgs>& value);

    /// <summary>
    /// 设置鉴权成功时远程鉴权服务器返回给CDN节点的状态码。取值范围：2xx/3xx。
    /// </summary>

    std::string getAuthSuccessStatus() const;
    bool authSuccessStatusIsSet() const;
    void unsetauthSuccessStatus();
    void setAuthSuccessStatus(const std::string& value);

    /// <summary>
    /// 设置鉴权失败时远程鉴权服务器返回给CDN节点的状态码。取值范围：4xx/5xx。
    /// </summary>

    std::string getAuthFailedStatus() const;
    bool authFailedStatusIsSet() const;
    void unsetauthFailedStatus();
    void setAuthFailedStatus(const std::string& value);

    /// <summary>
    /// 设置鉴权失败时CDN节点返回给用户的状态码。取值范围：2xx/3xx/4xx/5xx。
    /// </summary>

    std::string getResponseStatus() const;
    bool responseStatusIsSet() const;
    void unsetresponseStatus();
    void setResponseStatus(const std::string& value);

    /// <summary>
    /// 设置鉴权超时时间，即从CDN转发鉴权请求开始，到CDN节点收到远程鉴权服务器返回的结果的时间。单位为毫秒，值为0或50-3000。
    /// </summary>

    int32_t getTimeout() const;
    bool timeoutIsSet() const;
    void unsettimeout();
    void setTimeout(int32_t value);

    /// <summary>
    /// 设置鉴权超时后，CDN节点如何处理用户请求。 pass(鉴权失败放过)：鉴权超时后允许用户请求，返回对应的资源。 forbid(鉴权失败拒绝)：鉴权超时后拒绝用户请求，返回配置的响应自定义状态码给用户。
    /// </summary>

    std::string getTimeoutAction() const;
    bool timeoutActionIsSet() const;
    void unsettimeoutAction();
    void setTimeoutAction(const std::string& value);

    /// <summary>
    /// 当reserve_headers_setting等于reserve_specific_headers时为必选，其余情况为空，要保留的请求头，多个请求头用竖线分隔：key1|key2。
    /// </summary>

    std::string getReserveHeaders() const;
    bool reserveHeadersIsSet() const;
    void unsetreserveHeaders();
    void setReserveHeaders(const std::string& value);


protected:
    std::string authServer_;
    bool authServerIsSet_;
    std::string requestMethod_;
    bool requestMethodIsSet_;
    std::string fileTypeSetting_;
    bool fileTypeSettingIsSet_;
    std::string specifiedFileType_;
    bool specifiedFileTypeIsSet_;
    std::string reserveArgsSetting_;
    bool reserveArgsSettingIsSet_;
    std::string reserveArgs_;
    bool reserveArgsIsSet_;
    std::vector<CustomArgs> addCustomArgsRules_;
    bool addCustomArgsRulesIsSet_;
    std::string reserveHeadersSetting_;
    bool reserveHeadersSettingIsSet_;
    std::vector<CustomArgs> addCustomHeadersRules_;
    bool addCustomHeadersRulesIsSet_;
    std::string authSuccessStatus_;
    bool authSuccessStatusIsSet_;
    std::string authFailedStatus_;
    bool authFailedStatusIsSet_;
    std::string responseStatus_;
    bool responseStatusIsSet_;
    int32_t timeout_;
    bool timeoutIsSet_;
    std::string timeoutAction_;
    bool timeoutActionIsSet_;
    std::string reserveHeaders_;
    bool reserveHeadersIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_RemoteAuthRule_H_
