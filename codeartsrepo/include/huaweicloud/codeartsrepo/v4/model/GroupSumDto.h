
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_GroupSumDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_GroupSumDto_H_


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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  GroupSumDto
    : public ModelBase
{
public:
    GroupSumDto();
    virtual ~GroupSumDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GroupSumDto members

    /// <summary>
    /// 打开状态MR计数
    /// </summary>

    int32_t getOpenMergeRequestsCount() const;
    bool openMergeRequestsCountIsSet() const;
    void unsetopenMergeRequestsCount();
    void setOpenMergeRequestsCount(int32_t value);


protected:
    int32_t openMergeRequestsCount_;
    bool openMergeRequestsCountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_GroupSumDto_H_
