
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_CreateIpGroupRequestBody_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_CreateIpGroupRequestBody_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ga/v1/model/CreateIpGroupOption.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// create ip group request
/// </summary>
class HUAWEICLOUD_GA_V1_EXPORT  CreateIpGroupRequestBody
    : public ModelBase
{
public:
    CreateIpGroupRequestBody();
    virtual ~CreateIpGroupRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateIpGroupRequestBody members

    /// <summary>
    /// 
    /// </summary>

    CreateIpGroupOption getIpGroup() const;
    bool ipGroupIsSet() const;
    void unsetipGroup();
    void setIpGroup(const CreateIpGroupOption& value);


protected:
    CreateIpGroupOption ipGroup_;
    bool ipGroupIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_CreateIpGroupRequestBody_H_
