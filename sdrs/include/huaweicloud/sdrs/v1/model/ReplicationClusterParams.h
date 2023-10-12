
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_ReplicationClusterParams_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_ReplicationClusterParams_H_


#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 复制集群相关参数
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  ReplicationClusterParams
    : public ModelBase
{
public:
    ReplicationClusterParams();
    virtual ~ReplicationClusterParams();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReplicationClusterParams members

    /// <summary>
    /// 可用区名称。
    /// </summary>

    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);


protected:
    std::string availabilityZone_;
    bool availabilityZoneIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_ReplicationClusterParams_H_
