
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_UpdateExpirationTimeResponse_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_UpdateExpirationTimeResponse_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  UpdateExpirationTimeResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateExpirationTimeResponse();
    virtual ~UpdateExpirationTimeResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateExpirationTimeResponse members

    /// <summary>
    /// 成功修改过期时间的备份数量。
    /// </summary>

    int32_t getAffectedBackupsCount() const;
    bool affectedBackupsCountIsSet() const;
    void unsetaffectedBackupsCount();
    void setAffectedBackupsCount(int32_t value);

    /// <summary>
    /// 修改后的备份过期时间，格式：YYYY-MM-DD。
    /// </summary>

    std::string getNewExpirationDay() const;
    bool newExpirationDayIsSet() const;
    void unsetnewExpirationDay();
    void setNewExpirationDay(const std::string& value);

    /// <summary>
    /// 任务ID
    /// </summary>

    std::string getOperationLogId() const;
    bool operationLogIdIsSet() const;
    void unsetoperationLogId();
    void setOperationLogId(const std::string& value);


protected:
    int32_t affectedBackupsCount_;
    bool affectedBackupsCountIsSet_;
    std::string newExpirationDay_;
    bool newExpirationDayIsSet_;
    std::string operationLogId_;
    bool operationLogIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_UpdateExpirationTimeResponse_H_
