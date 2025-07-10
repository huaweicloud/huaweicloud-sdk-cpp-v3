
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_UpdateRuleNewRequest_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_UpdateRuleNewRequest_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cdn/v2/model/UpdateRuleRequest.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  UpdateRuleNewRequest
    : public ModelBase
{
public:
    UpdateRuleNewRequest();
    virtual ~UpdateRuleNewRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateRuleNewRequest members

    /// <summary>
    /// **参数解释：** 加速域名 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getDomainName() const;
    bool domainNameIsSet() const;
    void unsetdomainName();
    void setDomainName(const std::string& value);

    /// <summary>
    /// **参数解释：** 规则ID，可以通过查询规则引擎列表接口获取 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getRuleId() const;
    bool ruleIdIsSet() const;
    void unsetruleId();
    void setRuleId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateRuleRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateRuleRequest& value);


protected:
    std::string domainName_;
    bool domainNameIsSet_;
    std::string ruleId_;
    bool ruleIdIsSet_;
    UpdateRuleRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateRuleNewRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateRuleNewRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_UpdateRuleNewRequest_H_
