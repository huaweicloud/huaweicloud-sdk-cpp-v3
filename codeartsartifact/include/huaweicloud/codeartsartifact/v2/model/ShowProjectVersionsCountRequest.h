
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ShowProjectVersionsCountRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ShowProjectVersionsCountRequest_H_


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
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  ShowProjectVersionsCountRequest
    : public ModelBase
{
public:
    ShowProjectVersionsCountRequest();
    virtual ~ShowProjectVersionsCountRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowProjectVersionsCountRequest members

    /// <summary>
    /// **参数解释**： 发布库版本的名称。 **约束限制**： 不涉及。 **取值范围**： 英文字母、数字、特殊字符支持中划线、下划线和英文句号，长度为1-128个字符。 **默认取值**： 不涉及。
    /// </summary>

    std::string getBuildVersion() const;
    bool buildVersionIsSet() const;
    void unsetbuildVersion();
    void setBuildVersion(const std::string& value);


protected:
    std::string buildVersion_;
    bool buildVersionIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowProjectVersionsCountRequest& dereference_from_shared_ptr(std::shared_ptr<ShowProjectVersionsCountRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ShowProjectVersionsCountRequest_H_
