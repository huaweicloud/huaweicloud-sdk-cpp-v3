
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_BinlogClearPolicyRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_BinlogClearPolicyRequestBody_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  BinlogClearPolicyRequestBody
    : public ModelBase
{
public:
    BinlogClearPolicyRequestBody();
    virtual ~BinlogClearPolicyRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BinlogClearPolicyRequestBody members

    /// <summary>
    /// 取值范围0-7*24
    /// </summary>

    int64_t getBinlogRetentionHours() const;
    bool binlogRetentionHoursIsSet() const;
    void unsetbinlogRetentionHours();
    void setBinlogRetentionHours(int64_t value);


protected:
    int64_t binlogRetentionHours_;
    bool binlogRetentionHoursIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_BinlogClearPolicyRequestBody_H_
