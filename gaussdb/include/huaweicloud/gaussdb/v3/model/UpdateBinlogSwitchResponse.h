
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateBinlogSwitchResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateBinlogSwitchResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  UpdateBinlogSwitchResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateBinlogSwitchResponse();
    virtual ~UpdateBinlogSwitchResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateBinlogSwitchResponse members

    /// <summary>
    /// **参数解释**:  开启或关闭Binlog日志开关操作结果。  **取值范围**：  - SUCCESS：成功。 - FAILED：失败。
    /// </summary>

    std::string getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::string& value);

    /// <summary>
    /// **参数解释**:  任务ID。  **取值范围**：  不涉及。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);


protected:
    std::string result_;
    bool resultIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateBinlogSwitchResponse_H_
