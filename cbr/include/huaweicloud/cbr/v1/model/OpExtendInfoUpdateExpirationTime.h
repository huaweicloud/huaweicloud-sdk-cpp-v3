
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_OpExtendInfoUpdateExpirationTime_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_OpExtendInfoUpdateExpirationTime_H_


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
/// 
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  OpExtendInfoUpdateExpirationTime
    : public ModelBase
{
public:
    OpExtendInfoUpdateExpirationTime();
    virtual ~OpExtendInfoUpdateExpirationTime();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OpExtendInfoUpdateExpirationTime members

    /// <summary>
    /// 本次任务受影响的备份个数
    /// </summary>

    int32_t getAffectedBackupsCount() const;
    bool affectedBackupsCountIsSet() const;
    void unsetaffectedBackupsCount();
    void setAffectedBackupsCount(int32_t value);

    /// <summary>
    /// 本次任务预期过期日期，格式：YYYY-MM-DD。
    /// </summary>

    std::string getExpirationDay() const;
    bool expirationDayIsSet() const;
    void unsetexpirationDay();
    void setExpirationDay(const std::string& value);


protected:
    int32_t affectedBackupsCount_;
    bool affectedBackupsCountIsSet_;
    std::string expirationDay_;
    bool expirationDayIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_OpExtendInfoUpdateExpirationTime_H_
