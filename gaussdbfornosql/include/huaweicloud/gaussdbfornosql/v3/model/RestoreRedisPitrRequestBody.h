
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_RestoreRedisPitrRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_RestoreRedisPitrRequestBody_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  RestoreRedisPitrRequestBody
    : public ModelBase
{
public:
    RestoreRedisPitrRequestBody();
    virtual ~RestoreRedisPitrRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RestoreRedisPitrRequestBody members

    /// <summary>
    /// 恢复的指定时间点, 格式为yyyy-mm-ddThh:mm:ssZ字符串格式，T指某个时间的开始，Z指时区偏移量。  获取方法请参见 查询Redis可恢复时间点 中响应“restore_time”字段下参数的值。
    /// </summary>

    std::string getRestoreTime() const;
    bool restoreTimeIsSet() const;
    void unsetrestoreTime();
    void setRestoreTime(const std::string& value);


protected:
    std::string restoreTime_;
    bool restoreTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_RestoreRedisPitrRequestBody_H_
