
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListDevServerPublicIPResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListDevServerPublicIPResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/modelarts/v1/model/ServerPublicIp.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListDevServerPublicIPResponse
    : public ModelBase, public HttpResponse
{
public:
    ListDevServerPublicIPResponse();
    virtual ~ListDevServerPublicIPResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDevServerPublicIPResponse members

    /// <summary>
    /// **参数解释**：EIP相关信息的数组。
    /// </summary>

    std::vector<ServerPublicIp>& getPublicIps();
    bool publicIpsIsSet() const;
    void unsetpublicIps();
    void setPublicIps(const std::vector<ServerPublicIp>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::vector<ServerPublicIp> publicIps_;
    bool publicIpsIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListDevServerPublicIPResponse_H_
