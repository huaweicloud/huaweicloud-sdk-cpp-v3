
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_RepoFileDOV5Page_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_RepoFileDOV5Page_H_


#include <huaweicloud/codeartsartifact/v2/CodeArtsArtifactExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsartifact/v2/model/RepoFileDOV5.h>
#include <huaweicloud/codeartsartifact/v2/model/BasePaginationResponseEntityV5.h>
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
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  RepoFileDOV5Page
    : public ModelBase
{
public:
    RepoFileDOV5Page();
    virtual ~RepoFileDOV5Page();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RepoFileDOV5Page members

    /// <summary>
    /// **参数解释**: 总记录数。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getTotalRecords() const;
    bool totalRecordsIsSet() const;
    void unsettotalRecords();
    void setTotalRecords(int32_t value);

    /// <summary>
    /// **参数解释**: 总页数。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getTotalPages() const;
    bool totalPagesIsSet() const;
    void unsettotalPages();
    void setTotalPages(int32_t value);

    /// <summary>
    /// **参数解释**: 文件列表。 **取值范围**: 不涉及。 
    /// </summary>

    std::vector<RepoFileDOV5>& getData();
    bool dataIsSet() const;
    void unsetdata();
    void setData(const std::vector<RepoFileDOV5>& value);


protected:
    int32_t totalRecords_;
    bool totalRecordsIsSet_;
    int32_t totalPages_;
    bool totalPagesIsSet_;
    std::vector<RepoFileDOV5> data_;
    bool dataIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_RepoFileDOV5Page_H_
