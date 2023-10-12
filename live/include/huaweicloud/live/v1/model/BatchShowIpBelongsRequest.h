
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_BatchShowIpBelongsRequest_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_BatchShowIpBelongsRequest_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  BatchShowIpBelongsRequest
    : public ModelBase
{
public:
    BatchShowIpBelongsRequest();
    virtual ~BatchShowIpBelongsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchShowIpBelongsRequest members

    /// <summary>
    /// IP地址列表，最多20个。
    /// </summary>

    std::vector<std::string>& getIp();
    bool ipIsSet() const;
    void unsetip();
    void setIp(const std::vector<std::string>& value);


protected:
    std::vector<std::string> ip_;
    bool ipIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchShowIpBelongsRequest& dereference_from_shared_ptr(std::shared_ptr<BatchShowIpBelongsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_BatchShowIpBelongsRequest_H_
