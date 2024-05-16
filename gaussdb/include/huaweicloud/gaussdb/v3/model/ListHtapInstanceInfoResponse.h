
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListHtapInstanceInfoResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListHtapInstanceInfoResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/HtapInstanceList_instances.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ListHtapInstanceInfoResponse
    : public ModelBase, public HttpResponse
{
public:
    ListHtapInstanceInfoResponse();
    virtual ~ListHtapInstanceInfoResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListHtapInstanceInfoResponse members

    /// <summary>
    /// HTAP实例个数。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// HTAP实例信息。
    /// </summary>

    std::vector<HtapInstanceList_instances>& getInstances();
    bool instancesIsSet() const;
    void unsetinstances();
    void setInstances(const std::vector<HtapInstanceList_instances>& value);

    /// <summary>
    /// 最大HTAP实例个数。
    /// </summary>

    int32_t getMaxHtapInstanceNumOfTaurus() const;
    bool maxHtapInstanceNumOfTaurusIsSet() const;
    void unsetmaxHtapInstanceNumOfTaurus();
    void setMaxHtapInstanceNumOfTaurus(int32_t value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<HtapInstanceList_instances> instances_;
    bool instancesIsSet_;
    int32_t maxHtapInstanceNumOfTaurus_;
    bool maxHtapInstanceNumOfTaurusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListHtapInstanceInfoResponse_H_
