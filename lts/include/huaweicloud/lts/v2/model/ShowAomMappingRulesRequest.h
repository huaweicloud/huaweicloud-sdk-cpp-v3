
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_ShowAomMappingRulesRequest_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_ShowAomMappingRulesRequest_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  ShowAomMappingRulesRequest
    : public ModelBase
{
public:
    ShowAomMappingRulesRequest();
    virtual ~ShowAomMappingRulesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowAomMappingRulesRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowAomMappingRulesRequest& dereference_from_shared_ptr(std::shared_ptr<ShowAomMappingRulesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_ShowAomMappingRulesRequest_H_