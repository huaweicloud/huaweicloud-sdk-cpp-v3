
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_UpdateIpGroupRequestBody_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_UpdateIpGroupRequestBody_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ga/v1/model/UpdateIpGroupOption.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// update ip group request
/// </summary>
class HUAWEICLOUD_GA_V1_EXPORT  UpdateIpGroupRequestBody
    : public ModelBase
{
public:
    UpdateIpGroupRequestBody();
    virtual ~UpdateIpGroupRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateIpGroupRequestBody members

    /// <summary>
    /// 
    /// </summary>

    UpdateIpGroupOption getIpGroup() const;
    bool ipGroupIsSet() const;
    void unsetipGroup();
    void setIpGroup(const UpdateIpGroupOption& value);


protected:
    UpdateIpGroupOption ipGroup_;
    bool ipGroupIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_UpdateIpGroupRequestBody_H_
