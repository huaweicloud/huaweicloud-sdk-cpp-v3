
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ServiceRequestBody_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ServiceRequestBody_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 新测试类型服务信息
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ServiceRequestBody
    : public ModelBase
{
public:
    ServiceRequestBody();
    virtual ~ServiceRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServiceRequestBody members

    /// <summary>
    /// 测试类型名称，用于界面显示，不能使用当前保留名，长度小于等于16位字符
    /// </summary>

    std::string getServiceName() const;
    bool serviceNameIsSet() const;
    void unsetserviceName();
    void setServiceName(const std::string& value);

    /// <summary>
    /// server_host是由用户提供的域名。 我们会通过此域名进行接口调用，请以https/http开头,长度小于等于128位字符。 TestHub将会通过此域名下的接口，保证服务数据与用户系统数据的一致性。
    /// </summary>

    std::string getServerHost() const;
    bool serverHostIsSet() const;
    void unsetserverHost();
    void setServerHost(const std::string& value);


protected:
    std::string serviceName_;
    bool serviceNameIsSet_;
    std::string serverHost_;
    bool serverHostIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ServiceRequestBody_H_
