
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_UpdateServiceResponse_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_UpdateServiceResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  UpdateServiceResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateServiceResponse();
    virtual ~UpdateServiceResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateServiceResponse members

    /// <summary>
    /// 接口调用成功返回的服务名
    /// </summary>

    std::string getServiceName() const;
    bool serviceNameIsSet() const;
    void unsetserviceName();
    void setServiceName(const std::string& value);

    /// <summary>
    /// 接口调用成功返回的服务id
    /// </summary>

    int32_t getServiceId() const;
    bool serviceIdIsSet() const;
    void unsetserviceId();
    void setServiceId(int32_t value);

    /// <summary>
    /// 接口调用成功不返回，调用失败错误码
    /// </summary>

    std::string getErrorCode() const;
    bool errorCodeIsSet() const;
    void unseterrorCode();
    void setErrorCode(const std::string& value);

    /// <summary>
    /// 接口调用成功不返回，调用失败错误信息
    /// </summary>

    std::string getErrorMsg() const;
    bool errorMsgIsSet() const;
    void unseterrorMsg();
    void setErrorMsg(const std::string& value);


protected:
    std::string serviceName_;
    bool serviceNameIsSet_;
    int32_t serviceId_;
    bool serviceIdIsSet_;
    std::string errorCode_;
    bool errorCodeIsSet_;
    std::string errorMsg_;
    bool errorMsgIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_UpdateServiceResponse_H_
