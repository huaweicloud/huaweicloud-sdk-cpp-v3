
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ModifyRepositoryRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ModifyRepositoryRequest_H_


#include <huaweicloud/codeartsartifact/v2/CodeArtsArtifactExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartsartifact/v2/model/IDERepositoryPair.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  ModifyRepositoryRequest
    : public ModelBase
{
public:
    ModifyRepositoryRequest();
    virtual ~ModifyRepositoryRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifyRepositoryRequest members

    /// <summary>
    /// tab_id
    /// </summary>

    std::string getTabId() const;
    bool tabIdIsSet() const;
    void unsettabId();
    void setTabId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    IDERepositoryPair getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const IDERepositoryPair& value);


protected:
    std::string tabId_;
    bool tabIdIsSet_;
    IDERepositoryPair body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ModifyRepositoryRequest& dereference_from_shared_ptr(std::shared_ptr<ModifyRepositoryRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ModifyRepositoryRequest_H_
