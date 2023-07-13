
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_ShowAomMappingRuleResponse_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_ShowAomMappingRuleResponse_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/AomMappingRuleResp.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  ShowAomMappingRuleResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAomMappingRuleResponse();
    virtual ~ShowAomMappingRuleResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowAomMappingRuleResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<AomMappingRuleResp>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<AomMappingRuleResp>& value);


protected:
    std::vector<AomMappingRuleResp> body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_ShowAomMappingRuleResponse_H_
