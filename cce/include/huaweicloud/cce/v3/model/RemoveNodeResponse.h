
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_RemoveNodeResponse_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_RemoveNodeResponse_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/RemoveNodesSpec.h>
#include <string>
#include <huaweicloud/cce/v3/model/TaskStatus.h>

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
class HUAWEICLOUD_CCE_V3_EXPORT  RemoveNodeResponse
    : public ModelBase, public HttpResponse
{
public:
    RemoveNodeResponse();
    virtual ~RemoveNodeResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RemoveNodeResponse members

    /// <summary>
    /// API版本，固定值“v3”。
    /// </summary>

    std::string getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetapiVersion();
    void setApiVersion(const std::string& value);

    /// <summary>
    /// API类型，固定值“RemoveNodesTask”。
    /// </summary>

    std::string getKind() const;
    bool kindIsSet() const;
    void unsetkind();
    void setKind(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    RemoveNodesSpec getSpec() const;
    bool specIsSet() const;
    void unsetspec();
    void setSpec(const RemoveNodesSpec& value);

    /// <summary>
    /// 
    /// </summary>

    TaskStatus getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const TaskStatus& value);


protected:
    std::string apiVersion_;
    bool apiVersionIsSet_;
    std::string kind_;
    bool kindIsSet_;
    RemoveNodesSpec spec_;
    bool specIsSet_;
    TaskStatus status_;
    bool statusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_RemoveNodeResponse_H_
