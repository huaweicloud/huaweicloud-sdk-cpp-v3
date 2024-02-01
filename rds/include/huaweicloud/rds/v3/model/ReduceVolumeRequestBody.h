
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ReduceVolumeRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ReduceVolumeRequestBody_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/ReduceVolumeObject.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ReduceVolumeRequestBody
    : public ModelBase
{
public:
    ReduceVolumeRequestBody();
    virtual ~ReduceVolumeRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReduceVolumeRequestBody members

    /// <summary>
    /// 
    /// </summary>

    ReduceVolumeObject getReduceVolume() const;
    bool reduceVolumeIsSet() const;
    void unsetreduceVolume();
    void setReduceVolume(const ReduceVolumeObject& value);


protected:
    ReduceVolumeObject reduceVolume_;
    bool reduceVolumeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ReduceVolumeRequestBody_H_
