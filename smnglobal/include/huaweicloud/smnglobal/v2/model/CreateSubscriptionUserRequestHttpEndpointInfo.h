
#ifndef HUAWEICLOUD_SDK_SMNGLOBAL_V2_MODEL_CreateSubscriptionUserRequestHttpEndpointInfo_H_
#define HUAWEICLOUD_SDK_SMNGLOBAL_V2_MODEL_CreateSubscriptionUserRequestHttpEndpointInfo_H_


#include <huaweicloud/smnglobal/v2/SmnglobalExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Smnglobal {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_SMNGLOBAL_V2_EXPORT  CreateSubscriptionUserRequestHttpEndpointInfo
    : public ModelBase
{
public:
    CreateSubscriptionUserRequestHttpEndpointInfo();
    virtual ~CreateSubscriptionUserRequestHttpEndpointInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateSubscriptionUserRequestHttpEndpointInfo members

    /// <summary>
    /// 终端地址。必须以“http://”开头。
    /// </summary>

    std::string getEndpoint() const;
    bool endpointIsSet() const;
    void unsetendpoint();
    void setEndpoint(const std::string& value);

    /// <summary>
    /// http协议订阅用户的自定义请求头。http协议订阅用户可以自定义请求头。
    /// </summary>

    std::map<std::string, std::string>& getHeader();
    bool headerIsSet() const;
    void unsetheader();
    void setHeader(const std::map<std::string, std::string>& value);


protected:
    std::string endpoint_;
    bool endpointIsSet_;
    std::map<std::string, std::string> header_;
    bool headerIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMNGLOBAL_V2_MODEL_CreateSubscriptionUserRequestHttpEndpointInfo_H_
