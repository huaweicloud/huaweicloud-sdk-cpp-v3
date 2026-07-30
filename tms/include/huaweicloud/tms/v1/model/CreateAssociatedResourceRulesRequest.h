
#ifndef HUAWEICLOUD_SDK_TMS_V1_MODEL_CreateAssociatedResourceRulesRequest_H_
#define HUAWEICLOUD_SDK_TMS_V1_MODEL_CreateAssociatedResourceRulesRequest_H_


#include <huaweicloud/tms/v1/TmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/tms/v1/model/ReqCreateAssociatedResourceRules.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_TMS_V1_EXPORT  CreateAssociatedResourceRulesRequest
    : public ModelBase
{
public:
    CreateAssociatedResourceRulesRequest();
    virtual ~CreateAssociatedResourceRulesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateAssociatedResourceRulesRequest members

    /// <summary>
    /// 
    /// </summary>

    ReqCreateAssociatedResourceRules getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ReqCreateAssociatedResourceRules& value);


protected:
    ReqCreateAssociatedResourceRules body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateAssociatedResourceRulesRequest& dereference_from_shared_ptr(std::shared_ptr<CreateAssociatedResourceRulesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TMS_V1_MODEL_CreateAssociatedResourceRulesRequest_H_
