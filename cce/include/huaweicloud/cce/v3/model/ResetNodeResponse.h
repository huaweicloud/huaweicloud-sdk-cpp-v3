
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ResetNodeResponse_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ResetNodeResponse_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ResetNodeResponse
    : public ModelBase, public HttpResponse
{
public:
    ResetNodeResponse();
    virtual ~ResetNodeResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResetNodeResponse members

    /// <summary>
    /// **参数解释**： 提交任务成功后返回的任务ID，用户可以使用该ID对任务执行情况进行查询。 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及 
    /// </summary>

    std::string getJobid() const;
    bool jobidIsSet() const;
    void unsetjobid();
    void setJobid(const std::string& value);


protected:
    std::string jobid_;
    bool jobidIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ResetNodeResponse_H_
