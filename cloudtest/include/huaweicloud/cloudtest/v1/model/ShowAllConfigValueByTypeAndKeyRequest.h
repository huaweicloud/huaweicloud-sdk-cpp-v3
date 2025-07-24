
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowAllConfigValueByTypeAndKeyRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowAllConfigValueByTypeAndKeyRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ShowAllConfigValueByTypeAndKeyRequest
    : public ModelBase
{
public:
    ShowAllConfigValueByTypeAndKeyRequest();
    virtual ~ShowAllConfigValueByTypeAndKeyRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAllConfigValueByTypeAndKeyRequest members

    /// <summary>
    /// 服务id
    /// </summary>

    std::string getServiceId() const;
    bool serviceIdIsSet() const;
    void unsetserviceId();
    void setServiceId(const std::string& value);

    /// <summary>
    /// 配置项key
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// 配置项类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    std::string serviceId_;
    bool serviceIdIsSet_;
    std::string key_;
    bool keyIsSet_;
    std::string type_;
    bool typeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowAllConfigValueByTypeAndKeyRequest& dereference_from_shared_ptr(std::shared_ptr<ShowAllConfigValueByTypeAndKeyRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowAllConfigValueByTypeAndKeyRequest_H_
