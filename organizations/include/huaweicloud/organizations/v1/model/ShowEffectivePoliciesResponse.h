
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ShowEffectivePoliciesResponse_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ShowEffectivePoliciesResponse_H_


#include <huaweicloud/organizations/v1/OrganizationsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  ShowEffectivePoliciesResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowEffectivePoliciesResponse();
    virtual ~ShowEffectivePoliciesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowEffectivePoliciesResponse members

    /// <summary>
    /// 有效策略最后更新时间。
    /// </summary>

    utility::datetime getLastUpdatedAt() const;
    bool lastUpdatedAtIsSet() const;
    void unsetlastUpdatedAt();
    void setLastUpdatedAt(const utility::datetime& value);

    /// <summary>
    /// 有效策略文本内容。
    /// </summary>

    std::string getPolicyContent() const;
    bool policyContentIsSet() const;
    void unsetpolicyContent();
    void setPolicyContent(const std::string& value);

    /// <summary>
    /// 策略类型的名称。tag_policy标签策略。
    /// </summary>

    std::string getPolicyType() const;
    bool policyTypeIsSet() const;
    void unsetpolicyType();
    void setPolicyType(const std::string& value);

    /// <summary>
    /// 根、组织单元或账号的唯一标识符（ID）。
    /// </summary>

    std::string getEntityId() const;
    bool entityIdIsSet() const;
    void unsetentityId();
    void setEntityId(const std::string& value);


protected:
    utility::datetime lastUpdatedAt_;
    bool lastUpdatedAtIsSet_;
    std::string policyContent_;
    bool policyContentIsSet_;
    std::string policyType_;
    bool policyTypeIsSet_;
    std::string entityId_;
    bool entityIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ShowEffectivePoliciesResponse_H_
