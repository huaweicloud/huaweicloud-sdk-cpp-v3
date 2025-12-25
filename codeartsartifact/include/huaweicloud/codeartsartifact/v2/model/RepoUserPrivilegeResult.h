
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_RepoUserPrivilegeResult_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_RepoUserPrivilegeResult_H_


#include <huaweicloud/codeartsartifact/v2/CodeArtsArtifactExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsartifact/v2/model/RepoUserPrivilegeV5.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  RepoUserPrivilegeResult
    : public ModelBase
{
public:
    RepoUserPrivilegeResult();
    virtual ~RepoUserPrivilegeResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RepoUserPrivilegeResult members

    /// <summary>
    /// **参数解释**: 用户数量。 **取值范围**: 不涉及。 
    /// </summary>

    int64_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int64_t value);

    /// <summary>
    /// **参数解释**: 用户列表。 **取值范围**: 不涉及。 
    /// </summary>

    std::vector<RepoUserPrivilegeV5>& getList();
    bool listIsSet() const;
    void unsetlist();
    void setList(const std::vector<RepoUserPrivilegeV5>& value);


protected:
    int64_t total_;
    bool totalIsSet_;
    std::vector<RepoUserPrivilegeV5> list_;
    bool listIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_RepoUserPrivilegeResult_H_
