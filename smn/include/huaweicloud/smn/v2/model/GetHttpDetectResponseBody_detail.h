
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_GetHttpDetectResponseBody_detail_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_GetHttpDetectResponseBody_detail_H_


#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 终端探测详情
/// </summary>
class HUAWEICLOUD_SMN_V2_EXPORT  GetHttpDetectResponseBody_detail
    : public ModelBase
{
public:
    GetHttpDetectResponseBody_detail();
    virtual ~GetHttpDetectResponseBody_detail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GetHttpDetectResponseBody_detail members

    /// <summary>
    /// 探测终端返回的http返回码，0代表用户在黑名单无法发送，-1代表用户终端超过5秒未响应，-2代表队列已满，Http探测任务未执行。其他httpcode为终端实际返回值。
    /// </summary>

    int32_t getHttpCode() const;
    bool httpCodeIsSet() const;
    void unsethttpCode();
    void setHttpCode(int32_t value);

    /// <summary>
    /// 终端探测响应体，如果httpCode为0，-1，-2, 2xx时响应体内容固定，由SMN定义。其余httpCode的响应体内容为终端返回内容。
    /// </summary>

    std::string getHttpResponse() const;
    bool httpResponseIsSet() const;
    void unsethttpResponse();
    void setHttpResponse(const std::string& value);


protected:
    int32_t httpCode_;
    bool httpCodeIsSet_;
    std::string httpResponse_;
    bool httpResponseIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_GetHttpDetectResponseBody_detail_H_
