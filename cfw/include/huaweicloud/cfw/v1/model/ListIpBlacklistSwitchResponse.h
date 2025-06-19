
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ListIpBlacklistSwitchResponse_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ListIpBlacklistSwitchResponse_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/IpBlacklistSwitchInfoVo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  ListIpBlacklistSwitchResponse
    : public ModelBase, public HttpResponse
{
public:
    ListIpBlacklistSwitchResponse();
    virtual ~ListIpBlacklistSwitchResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListIpBlacklistSwitchResponse members

    /// <summary>
    /// 
    /// </summary>

    IpBlacklistSwitchInfoVo getData() const;
    bool dataIsSet() const;
    void unsetdata();
    void setData(const IpBlacklistSwitchInfoVo& value);


protected:
    IpBlacklistSwitchInfoVo data_;
    bool dataIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ListIpBlacklistSwitchResponse_H_
