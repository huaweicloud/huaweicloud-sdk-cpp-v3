
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ListAllRepositoriesResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ListAllRepositoriesResponse_H_


#include <huaweicloud/codeartsartifact/v2/CodeArtsArtifactExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsartifact/v2/model/ListAllRepositoriesResult.h>
#include <string>
#include <huaweicloud/codeartsartifact/v2/model/StandarBaseResponseV5.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  ListAllRepositoriesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAllRepositoriesResponse();
    virtual ~ListAllRepositoriesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAllRepositoriesResponse members

    /// <summary>
    /// **参数解释**： 请求成功或失败状态。 **取值范围**： - success：请求成功。 - error：请求失败。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**： 请求ID，当前请求唯一标识。 **取值范围**： 数字及中划线（-）组成的字符串。
    /// </summary>

    std::string getTraceId() const;
    bool traceIdIsSet() const;
    void unsettraceId();
    void setTraceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ListAllRepositoriesResult getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const ListAllRepositoriesResult& value);


protected:
    std::string status_;
    bool statusIsSet_;
    std::string traceId_;
    bool traceIdIsSet_;
    ListAllRepositoriesResult result_;
    bool resultIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ListAllRepositoriesResponse_H_
