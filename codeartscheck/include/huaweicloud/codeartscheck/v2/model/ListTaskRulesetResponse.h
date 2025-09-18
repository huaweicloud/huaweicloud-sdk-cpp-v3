
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ListTaskRulesetResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ListTaskRulesetResponse_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartscheck/v2/model/TaskRulesetInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  ListTaskRulesetResponse
    : public ModelBase, public HttpResponse
{
public:
    ListTaskRulesetResponse();
    virtual ~ListTaskRulesetResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTaskRulesetResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<TaskRulesetInfo>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<TaskRulesetInfo>& value);


protected:
    std::vector<TaskRulesetInfo> body_;
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

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ListTaskRulesetResponse_H_
