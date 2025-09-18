
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ShowMavenInfoRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ShowMavenInfoRequest_H_


#include <huaweicloud/codeartsartifact/v2/CodeArtsArtifactExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  ShowMavenInfoRequest
    : public ModelBase
{
public:
    ShowMavenInfoRequest();
    virtual ~ShowMavenInfoRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowMavenInfoRequest members

    /// <summary>
    /// snapshot or releases
    /// </summary>

    std::string getPolicy() const;
    bool policyIsSet() const;
    void unsetpolicy();
    void setPolicy(const std::string& value);

    /// <summary>
    /// r or rw
    /// </summary>

    std::string getAccess() const;
    bool accessIsSet() const;
    void unsetaccess();
    void setAccess(const std::string& value);

    /// <summary>
    /// 是否返回默认仓库 true or false
    /// </summary>

    std::string getDefault() const;
    bool defaultIsSet() const;
    void unsetdefault();
    void setDefault(const std::string& value);

    /// <summary>
    /// 仓库id 多个仓库id用英文逗号间隔
    /// </summary>

    std::string getIds() const;
    bool idsIsSet() const;
    void unsetids();
    void setIds(const std::string& value);


protected:
    std::string policy_;
    bool policyIsSet_;
    std::string access_;
    bool accessIsSet_;
    std::string default_;
    bool defaultIsSet_;
    std::string ids_;
    bool idsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowMavenInfoRequest& dereference_from_shared_ptr(std::shared_ptr<ShowMavenInfoRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ShowMavenInfoRequest_H_
