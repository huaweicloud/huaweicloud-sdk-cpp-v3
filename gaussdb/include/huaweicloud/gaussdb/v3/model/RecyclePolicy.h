
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_RecyclePolicy_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_RecyclePolicy_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 回收站策略。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  RecyclePolicy
    : public ModelBase
{
public:
    RecyclePolicy();
    virtual ~RecyclePolicy();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RecyclePolicy members

    /// <summary>
    /// 保留天数，1-7天。
    /// </summary>

    std::string getRetentionPeriodInDays() const;
    bool retentionPeriodInDaysIsSet() const;
    void unsetretentionPeriodInDays();
    void setRetentionPeriodInDays(const std::string& value);


protected:
    std::string retentionPeriodInDays_;
    bool retentionPeriodInDaysIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_RecyclePolicy_H_
