
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateAomMappingRulesRequest_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateAomMappingRulesRequest_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/UpdateAomMappingRequest.h>

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
class HUAWEICLOUD_LTS_V2_EXPORT  UpdateAomMappingRulesRequest
    : public ModelBase
{
public:
    UpdateAomMappingRulesRequest();
    virtual ~UpdateAomMappingRulesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateAomMappingRulesRequest members

    /// <summary>
    /// 
    /// </summary>

    UpdateAomMappingRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateAomMappingRequest& value);


protected:
    UpdateAomMappingRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateAomMappingRulesRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateAomMappingRulesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateAomMappingRulesRequest_H_
