
#ifndef HUAWEICLOUD_SDK_TMS_V1_MODEL_CreateAssociatedResourceRulesResponse_H_
#define HUAWEICLOUD_SDK_TMS_V1_MODEL_CreateAssociatedResourceRulesResponse_H_


#include <huaweicloud/tms/v1/TmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/tms/v1/model/AssociatedResourceRule.h>
#include <vector>
#include <huaweicloud/tms/v1/model/ErrorInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_TMS_V1_EXPORT  CreateAssociatedResourceRulesResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateAssociatedResourceRulesResponse();
    virtual ~CreateAssociatedResourceRulesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateAssociatedResourceRulesResponse members

    /// <summary>
    /// 本次操作的规则信息
    /// </summary>

    std::vector<AssociatedResourceRule>& getRules();
    bool rulesIsSet() const;
    void unsetrules();
    void setRules(const std::vector<AssociatedResourceRule>& value);

    /// <summary>
    /// 操作的错误信息
    /// </summary>

    std::vector<ErrorInfo>& getErrors();
    bool errorsIsSet() const;
    void unseterrors();
    void setErrors(const std::vector<ErrorInfo>& value);


protected:
    std::vector<AssociatedResourceRule> rules_;
    bool rulesIsSet_;
    std::vector<ErrorInfo> errors_;
    bool errorsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TMS_V1_MODEL_CreateAssociatedResourceRulesResponse_H_
