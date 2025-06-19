
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ListIpBlacklistSwitchRequest_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ListIpBlacklistSwitchRequest_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  ListIpBlacklistSwitchRequest
    : public ModelBase
{
public:
    ListIpBlacklistSwitchRequest();
    virtual ~ListIpBlacklistSwitchRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListIpBlacklistSwitchRequest members

    /// <summary>
    /// 防火墙ID，可通过[防火墙ID获取方式](cfw_02_0028.xml)获取
    /// </summary>

    std::string getFwInstanceId() const;
    bool fwInstanceIdIsSet() const;
    void unsetfwInstanceId();
    void setFwInstanceId(const std::string& value);


protected:
    std::string fwInstanceId_;
    bool fwInstanceIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListIpBlacklistSwitchRequest& dereference_from_shared_ptr(std::shared_ptr<ListIpBlacklistSwitchRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ListIpBlacklistSwitchRequest_H_
