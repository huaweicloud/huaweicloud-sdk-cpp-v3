
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListStarrocksInstanceInfoResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListStarrocksInstanceInfoResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/StarRocksInstanceInfo_instances.h>
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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ListStarrocksInstanceInfoResponse
    : public ModelBase, public HttpResponse
{
public:
    ListStarrocksInstanceInfoResponse();
    virtual ~ListStarrocksInstanceInfoResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListStarrocksInstanceInfoResponse members

    /// <summary>
    /// 实例信息。
    /// </summary>

    std::vector<StarRocksInstanceInfo_instances>& getInstances();
    bool instancesIsSet() const;
    void unsetinstances();
    void setInstances(const std::vector<StarRocksInstanceInfo_instances>& value);


protected:
    std::vector<StarRocksInstanceInfo_instances> instances_;
    bool instancesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListStarrocksInstanceInfoResponse_H_
