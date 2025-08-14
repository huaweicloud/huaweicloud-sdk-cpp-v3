
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_FileLocation_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_FileLocation_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/iotda/v5/model/ObsLocation.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 升级包的位置
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  FileLocation
    : public ModelBase
{
public:
    FileLocation();
    virtual ~FileLocation();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FileLocation members

    /// <summary>
    /// 
    /// </summary>

    ObsLocation getObsLocation() const;
    bool obsLocationIsSet() const;
    void unsetobsLocation();
    void setObsLocation(const ObsLocation& value);


protected:
    ObsLocation obsLocation_;
    bool obsLocationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_FileLocation_H_
