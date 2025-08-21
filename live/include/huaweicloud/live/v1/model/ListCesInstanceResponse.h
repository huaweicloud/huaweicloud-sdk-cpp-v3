
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListCesInstanceResponse_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListCesInstanceResponse_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/live/v1/model/ListCesInstanceRspBody_instances.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  ListCesInstanceResponse
    : public ModelBase, public HttpResponse
{
public:
    ListCesInstanceResponse();
    virtual ~ListCesInstanceResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListCesInstanceResponse members

    /// <summary>
    /// 实例
    /// </summary>

    std::vector<ListCesInstanceRspBody_instances>& getInstances();
    bool instancesIsSet() const;
    void unsetinstances();
    void setInstances(const std::vector<ListCesInstanceRspBody_instances>& value);

    /// <summary>
    /// 总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<ListCesInstanceRspBody_instances> instances_;
    bool instancesIsSet_;
    int32_t total_;
    bool totalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListCesInstanceResponse_H_
