
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_UpdateAntiVirusSwitchResponse_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_UpdateAntiVirusSwitchResponse_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/ResponseData.h>

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
class HUAWEICLOUD_CFW_V1_EXPORT  UpdateAntiVirusSwitchResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateAntiVirusSwitchResponse();
    virtual ~UpdateAntiVirusSwitchResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateAntiVirusSwitchResponse members

    /// <summary>
    /// 
    /// </summary>

    ResponseData getData() const;
    bool dataIsSet() const;
    void unsetdata();
    void setData(const ResponseData& value);


protected:
    ResponseData data_;
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

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_UpdateAntiVirusSwitchResponse_H_
