
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_RegisterRegionReqBody_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_RegisterRegionReqBody_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// the request body of RegisterRegion
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  RegisterRegionReqBody
    : public ModelBase
{
public:
    RegisterRegionReqBody();
    virtual ~RegisterRegionReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RegisterRegionReqBody members

    /// <summary>
    /// 局点ID
    /// </summary>

    std::string getRegionId() const;
    bool regionIdIsSet() const;
    void unsetregionId();
    void setRegionId(const std::string& value);


protected:
    std::string regionId_;
    bool regionIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_RegisterRegionReqBody_H_
