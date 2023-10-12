
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ShowShardingBalancerResponse_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ShowShardingBalancerResponse_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dds/v3/model/BalancerActiveWindow.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  ShowShardingBalancerResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowShardingBalancerResponse();
    virtual ~ShowShardingBalancerResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowShardingBalancerResponse members

    /// <summary>
    /// 集群均衡是否打开。
    /// </summary>

    bool isIsOpen() const;
    bool isOpenIsSet() const;
    void unsetisOpen();
    void setIsOpen(bool value);

    /// <summary>
    /// 
    /// </summary>

    BalancerActiveWindow getActiveWindow() const;
    bool activeWindowIsSet() const;
    void unsetactiveWindow();
    void setActiveWindow(const BalancerActiveWindow& value);


protected:
    bool isOpen_;
    bool isOpenIsSet_;
    BalancerActiveWindow activeWindow_;
    bool activeWindowIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ShowShardingBalancerResponse_H_
