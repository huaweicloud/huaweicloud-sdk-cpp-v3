
#ifndef HUAWEICLOUD_SDK_AAD_V1_MODEL_BatchDeleteInstanceIpRuleResponse_H_
#define HUAWEICLOUD_SDK_AAD_V1_MODEL_BatchDeleteInstanceIpRuleResponse_H_


#include <huaweicloud/aad/v1/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_AAD_V1_EXPORT  BatchDeleteInstanceIpRuleResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchDeleteInstanceIpRuleResponse();
    virtual ~BatchDeleteInstanceIpRuleResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteInstanceIpRuleResponse members

    /// <summary>
    /// 数量
    /// </summary>

    int32_t getSuccessNum() const;
    bool successNumIsSet() const;
    void unsetsuccessNum();
    void setSuccessNum(int32_t value);


protected:
    int32_t successNum_;
    bool successNumIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V1_MODEL_BatchDeleteInstanceIpRuleResponse_H_
