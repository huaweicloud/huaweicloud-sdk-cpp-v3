
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_AddProtectRequest_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_AddProtectRequest_H_


#include <huaweicloud/codehub/v3/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v3/model/AddProtectAccessLevel.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V3_EXPORT  AddProtectRequest
    : public ModelBase
{
public:
    AddProtectRequest();
    virtual ~AddProtectRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddProtectRequest members

    /// <summary>
    /// 
    /// </summary>

    AddProtectAccessLevel getAccessLevel() const;
    bool accessLevelIsSet() const;
    void unsetaccessLevel();
    void setAccessLevel(const AddProtectAccessLevel& value);


protected:
    AddProtectAccessLevel accessLevel_;
    bool accessLevelIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_AddProtectRequest_H_
