
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListRepositoryNavigationReferencesResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListRepositoryNavigationReferencesResponse_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartsrepo/v4/model/DefEntryDto.h>
#include <huaweicloud/codeartsrepo/v4/model/RefEntryDto.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ListRepositoryNavigationReferencesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListRepositoryNavigationReferencesResponse();
    virtual ~ListRepositoryNavigationReferencesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListRepositoryNavigationReferencesResponse members

    /// <summary>
    /// **参数解释：** 结果标识。 **约束限制：** 不涉及。
    /// </summary>

    std::string getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::string& value);

    /// <summary>
    /// **参数解释：** 结果消息。 **约束限制：** 不涉及。
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// **参数解释：** def信息。 **约束限制：** 不涉及。
    /// </summary>

    std::vector<DefEntryDto>& getDefs();
    bool defsIsSet() const;
    void unsetdefs();
    void setDefs(const std::vector<DefEntryDto>& value);

    /// <summary>
    /// **参数解释：** 索引信息列表。 **约束限制：** 不涉及。
    /// </summary>

    std::vector<RefEntryDto>& getRefs();
    bool refsIsSet() const;
    void unsetrefs();
    void setRefs(const std::vector<RefEntryDto>& value);


protected:
    std::string result_;
    bool resultIsSet_;
    std::string message_;
    bool messageIsSet_;
    std::vector<DefEntryDto> defs_;
    bool defsIsSet_;
    std::vector<RefEntryDto> refs_;
    bool refsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListRepositoryNavigationReferencesResponse_H_
