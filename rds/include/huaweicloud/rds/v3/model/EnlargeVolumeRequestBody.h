
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_EnlargeVolumeRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_EnlargeVolumeRequestBody_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/EnlargeVolumeObject.h>

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
class HUAWEICLOUD_RDS_V3_EXPORT  EnlargeVolumeRequestBody
    : public ModelBase
{
public:
    EnlargeVolumeRequestBody();
    virtual ~EnlargeVolumeRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EnlargeVolumeRequestBody members

    /// <summary>
    /// 
    /// </summary>

    EnlargeVolumeObject getEnlargeVolume() const;
    bool enlargeVolumeIsSet() const;
    void unsetenlargeVolume();
    void setEnlargeVolume(const EnlargeVolumeObject& value);


protected:
    EnlargeVolumeObject enlargeVolume_;
    bool enlargeVolumeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_EnlargeVolumeRequestBody_H_
