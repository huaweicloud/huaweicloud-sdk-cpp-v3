
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_SpecificCommitInfo_stats_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_SpecificCommitInfo_stats_H_


#include <huaweicloud/codeartsrepo/v3/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 变更行数
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V3_EXPORT  SpecificCommitInfo_stats
    : public ModelBase
{
public:
    SpecificCommitInfo_stats();
    virtual ~SpecificCommitInfo_stats();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SpecificCommitInfo_stats members

    /// <summary>
    /// 变更增加的行数
    /// </summary>

    int32_t getAdditions() const;
    bool additionsIsSet() const;
    void unsetadditions();
    void setAdditions(int32_t value);

    /// <summary>
    /// 变更删除的行数
    /// </summary>

    int32_t getDeletions() const;
    bool deletionsIsSet() const;
    void unsetdeletions();
    void setDeletions(int32_t value);

    /// <summary>
    /// 变更的总行数
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

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_SpecificCommitInfo_stats_H_
