
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowSessionOverviewResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowSessionOverviewResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ShowSessionOverviewResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowSessionOverviewResponse();
    virtual ~ShowSessionOverviewResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowSessionOverviewResponse members

    /// <summary>
    /// **参数解释**: 实时会话的活跃会话数。 **取值范围**: 不涉及。
    /// </summary>

    std::string getActiveNum() const;
    bool activeNumIsSet() const;
    void unsetactiveNum();
    void setActiveNum(const std::string& value);

    /// <summary>
    /// **参数解释**: 实时会话的总会话数。 **取值范围**: 不涉及。
    /// </summary>

    std::string getTotalNum() const;
    bool totalNumIsSet() const;
    void unsettotalNum();
    void setTotalNum(const std::string& value);

    /// <summary>
    /// **参数解释**: 实时会话中的慢SQL数量。 **取值范围**: 不涉及。
    /// </summary>

    std::string getSlowSqlNum() const;
    bool slowSqlNumIsSet() const;
    void unsetslowSqlNum();
    void setSlowSqlNum(const std::string& value);

    /// <summary>
    /// **参数解释**: 实时会话中的锁等会话数。 **取值范围**: 不涉及。
    /// </summary>

    std::string getLockNum() const;
    bool lockNumIsSet() const;
    void unsetlockNum();
    void setLockNum(const std::string& value);


protected:
    std::string activeNum_;
    bool activeNumIsSet_;
    std::string totalNum_;
    bool totalNumIsSet_;
    std::string slowSqlNum_;
    bool slowSqlNumIsSet_;
    std::string lockNum_;
    bool lockNumIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowSessionOverviewResponse_H_
