
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ListAttentionPageResult_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ListAttentionPageResult_H_


#include <huaweicloud/codeartsartifact/v2/CodeArtsArtifactExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsartifact/v2/model/BasePaginationResponseEntity.h>
#include <huaweicloud/codeartsartifact/v2/model/ListAttentionResult.h>
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
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  ListAttentionPageResult
    : public ModelBase
{
public:
    ListAttentionPageResult();
    virtual ~ListAttentionPageResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAttentionPageResult members

    /// <summary>
    /// **参数解释**： 总记录数。 **取值范围**： 不涉及。 
    /// </summary>

    int32_t getTotalRecords() const;
    bool totalRecordsIsSet() const;
    void unsettotalRecords();
    void setTotalRecords(int32_t value);

    /// <summary>
    /// **参数解释**： 总页数。 **取值范围**： 不涉及。 
    /// </summary>

    int32_t getTotalPages() const;
    bool totalPagesIsSet() const;
    void unsettotalPages();
    void setTotalPages(int32_t value);

    /// <summary>
    /// **参数解释**： 关注列表。 **取值范围**： 不涉及。 
    /// </summary>

    std::vector<ListAttentionResult>& getData();
    bool dataIsSet() const;
    void unsetdata();
    void setData(const std::vector<ListAttentionResult>& value);


protected:
    int32_t totalRecords_;
    bool totalRecordsIsSet_;
    int32_t totalPages_;
    bool totalPagesIsSet_;
    std::vector<ListAttentionResult> data_;
    bool dataIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ListAttentionPageResult_H_
