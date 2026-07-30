
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolStatistics_statistics_status_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolStatistics_statistics_status_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数描述**： 不同状态下的资源池统计信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PoolStatistics_statistics_status
    : public ModelBase
{
public:
    PoolStatistics_statistics_status();
    virtual ~PoolStatistics_statistics_status();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PoolStatistics_statistics_status members

    /// <summary>
    /// **参数描述**： 正在创建中的资源池统计信息。 **取值范围**： 不涉及。
    /// </summary>

    int32_t getCreating() const;
    bool creatingIsSet() const;
    void unsetcreating();
    void setCreating(int32_t value);

    /// <summary>
    /// **参数描述**： 创建成功的资源池数量。 **取值范围**： 不涉及。
    /// </summary>

    int32_t getCreated() const;
    bool createdIsSet() const;
    void unsetcreated();
    void setCreated(int32_t value);

    /// <summary>
    /// **参数描述**： 最近三天内创建失败的资源池数量，最大值为500。 **取值范围**： 不涉及。
    /// </summary>

    int32_t getFailed() const;
    bool failedIsSet() const;
    void unsetfailed();
    void setFailed(int32_t value);

    /// <summary>
    /// **参数描述**： 等待中的资源池数量，通常是未支付的包周期资源池。 **取值范围**： 不涉及。
    /// </summary>

    int32_t getPending() const;
    bool pendingIsSet() const;
    void unsetpending();
    void setPending(int32_t value);


protected:
    int32_t creating_;
    bool creatingIsSet_;
    int32_t created_;
    bool createdIsSet_;
    int32_t failed_;
    bool failedIsSet_;
    int32_t pending_;
    bool pendingIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolStatistics_statistics_status_H_
