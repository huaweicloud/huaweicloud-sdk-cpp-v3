
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_CommitStatsDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_CommitStatsDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  CommitStatsDto
    : public ModelBase
{
public:
    CommitStatsDto();
    virtual ~CommitStatsDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CommitStatsDto members

    /// <summary>
    /// **参数解释：** 增加行数。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getAdditions() const;
    bool additionsIsSet() const;
    void unsetadditions();
    void setAdditions(int32_t value);

    /// <summary>
    /// **参数解释：** 删除行数。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getDeletions() const;
    bool deletionsIsSet() const;
    void unsetdeletions();
    void setDeletions(int32_t value);

    /// <summary>
    /// **参数解释：** 变更行数。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    int32_t additions_;
    bool additionsIsSet_;
    int32_t deletions_;
    bool deletionsIsSet_;
    int32_t total_;
    bool totalIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_CommitStatsDto_H_
