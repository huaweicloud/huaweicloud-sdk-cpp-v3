
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ListMavenListRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ListMavenListRequest_H_


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
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  ListMavenListRequest
    : public ModelBase
{
public:
    ListMavenListRequest();
    virtual ~ListMavenListRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListMavenListRequest members

    /// <summary>
    /// **参数解释**: 是否返回默认仓库。 **约束限制**: 不涉及。 **取值范围**: true or false。 **默认取值**: false。
    /// </summary>

    bool isDefault() const;
    bool defaultIsSet() const;
    void unsetdefault();
    void setDefault(bool value);

    /// <summary>
    /// **参数解释**: 仓库类型：snapshot 或 release。 **约束限制**: 不涉及。 **取值范围**: snapshot or releases。 **默认取值**: 不涉及。
    /// </summary>

    std::string getPolicy() const;
    bool policyIsSet() const;
    void unsetpolicy();
    void setPolicy(const std::string& value);

    /// <summary>
    /// **参数解释**: 仓库id，多个仓库id用英文逗号间隔。仓库id格式为{region}_{domainId}_{format}_{sequence}。可以从私有依赖库首页-&gt;仓库概览-&gt;仓库地址 url 中获取，最后两个\&quot;/\&quot;中间的字符串即为仓库id。 **约束限制**: 不涉及。 **取值范围**: 最大长度512。 **默认取值**: 不涉及。
    /// </summary>

    std::string getRepoIds() const;
    bool repoIdsIsSet() const;
    void unsetrepoIds();
    void setRepoIds(const std::string& value);

    /// <summary>
    /// **参数解释**: 权限过滤设置，允许过滤读(r)和读写(rw)权限。 **约束限制**: 不涉及。 **取值范围**: r or rw。 **默认取值**: r。
    /// </summary>

    std::string getAccess() const;
    bool accessIsSet() const;
    void unsetaccess();
    void setAccess(const std::string& value);


protected:
    bool default_;
    bool defaultIsSet_;
    std::string policy_;
    bool policyIsSet_;
    std::string repoIds_;
    bool repoIdsIsSet_;
    std::string access_;
    bool accessIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListMavenListRequest& dereference_from_shared_ptr(std::shared_ptr<ListMavenListRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ListMavenListRequest_H_
