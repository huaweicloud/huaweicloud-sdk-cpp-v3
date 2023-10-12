
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_UpdateRuleAclUsingPutResponse_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_UpdateRuleAclUsingPutResponse_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/RuleId.h>

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
class HUAWEICLOUD_CFW_V1_EXPORT  UpdateRuleAclUsingPutResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateRuleAclUsingPutResponse();
    virtual ~UpdateRuleAclUsingPutResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateRuleAclUsingPutResponse members

    /// <summary>
    /// 
    /// </summary>

    RuleId getData() const;
    bool dataIsSet() const;
    void unsetdata();
    void setData(const RuleId& value);


protected:
    RuleId data_;
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

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_UpdateRuleAclUsingPutResponse_H_
