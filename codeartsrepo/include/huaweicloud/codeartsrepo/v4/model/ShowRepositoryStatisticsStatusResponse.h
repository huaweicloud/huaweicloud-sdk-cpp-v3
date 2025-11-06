
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowRepositoryStatisticsStatusResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowRepositoryStatisticsStatusResponse_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartsrepo/v4/model/StatisticEventsDto.h>

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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ShowRepositoryStatisticsStatusResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowRepositoryStatisticsStatusResponse();
    virtual ~ShowRepositoryStatisticsStatusResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowRepositoryStatisticsStatusResponse members

    /// <summary>
    /// **参数解释：** 是否能被统计。 **取值范围：** - true，可以被统计。 - false，不可被统计。
    /// </summary>

    bool isCanStatistics() const;
    bool canStatisticsIsSet() const;
    void unsetcanStatistics();
    void setCanStatistics(bool value);

    /// <summary>
    /// **参数解释：** 是否能被统计。 **取值范围：** - 0，表示用户次数和仓库次数都没用完。 - 1，表示仓库次数用完。 - 2，表示用户次数用完。 - 3, 表示仓库次数和用户次数都用完
    /// </summary>

    int32_t getReason() const;
    bool reasonIsSet() const;
    void unsetreason();
    void setReason(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    StatisticEventsDto getEvent() const;
    bool eventIsSet() const;
    void unsetevent();
    void setEvent(const StatisticEventsDto& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXTotal() const;
    bool xTotalIsSet() const;
    void unsetxTotal();
    void setXTotal(const std::string& value);


protected:
    bool canStatistics_;
    bool canStatisticsIsSet_;
    int32_t reason_;
    bool reasonIsSet_;
    StatisticEventsDto event_;
    bool eventIsSet_;
    std::string xTotal_;
    bool xTotalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowRepositoryStatisticsStatusResponse_H_
