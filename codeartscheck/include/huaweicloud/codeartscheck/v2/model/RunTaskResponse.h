
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_RunTaskResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_RunTaskResponse_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  RunTaskResponse
    : public ModelBase, public HttpResponse
{
public:
    RunTaskResponse();
    virtual ~RunTaskResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RunTaskResponse members

    /// <summary>
    /// **参数解释:** 1次代码检查对应的执行记录ID。 **取值范围:** 32位UUID。
    /// </summary>

    std::string getExecId() const;
    bool execIdIsSet() const;
    void unsetexecId();
    void setExecId(const std::string& value);


protected:
    std::string execId_;
    bool execIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_RunTaskResponse_H_
