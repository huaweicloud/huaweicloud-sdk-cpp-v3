
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_HttpDetectRequestBody_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_HttpDetectRequestBody_H_


#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/smn/v2/model/HttpDetectRequestBody_extension.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Http探测请求参数，包含protocol，endpoint，extension字段，详细限制见参数描述。
/// </summary>
class HUAWEICLOUD_SMN_V2_EXPORT  HttpDetectRequestBody
    : public ModelBase
{
public:
    HttpDetectRequestBody();
    virtual ~HttpDetectRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HttpDetectRequestBody members

    /// <summary>
    /// 协议类型，当前仅支持http/https，不可为空
    /// </summary>

    std::string getProtocol() const;
    bool protocolIsSet() const;
    void unsetprotocol();
    void setProtocol(const std::string& value);

    /// <summary>
    /// 待探测的终端地址，当前仅支持以http:// 或https://开头，不可为空
    /// </summary>

    std::string getEndpoint() const;
    bool endpointIsSet() const;
    void unsetendpoint();
    void setEndpoint(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    HttpDetectRequestBody_extension getExtension() const;
    bool extensionIsSet() const;
    void unsetextension();
    void setExtension(const HttpDetectRequestBody_extension& value);


protected:
    std::string protocol_;
    bool protocolIsSet_;
    std::string endpoint_;
    bool endpointIsSet_;
    HttpDetectRequestBody_extension extension_;
    bool extensionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_HttpDetectRequestBody_H_
