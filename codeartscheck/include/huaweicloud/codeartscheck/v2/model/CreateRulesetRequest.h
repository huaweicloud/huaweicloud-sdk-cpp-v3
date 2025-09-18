
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_CreateRulesetRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_CreateRulesetRequest_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartscheck/v2/model/Ruleset.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  CreateRulesetRequest
    : public ModelBase
{
public:
    CreateRulesetRequest();
    virtual ~CreateRulesetRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateRulesetRequest members

    /// <summary>
    /// 
    /// </summary>

    Ruleset getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const Ruleset& value);


protected:
    Ruleset body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateRulesetRequest& dereference_from_shared_ptr(std::shared_ptr<CreateRulesetRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_CreateRulesetRequest_H_
