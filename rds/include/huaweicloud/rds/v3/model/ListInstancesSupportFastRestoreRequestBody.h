
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListInstancesSupportFastRestoreRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListInstancesSupportFastRestoreRequestBody_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

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
class HUAWEICLOUD_RDS_V3_EXPORT  ListInstancesSupportFastRestoreRequestBody
    : public ModelBase
{
public:
    ListInstancesSupportFastRestoreRequestBody();
    virtual ~ListInstancesSupportFastRestoreRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListInstancesSupportFastRestoreRequestBody members

    /// <summary>
    /// 要恢复的时间点，格式为“yyyy-mm-ddThh:mm:ssZ”。 其中，T指某个时间的开始；Z指时区偏移量，例如北京时间偏移显示为+0800。
    /// </summary>

    std::string getRestoreTime() const;
    bool restoreTimeIsSet() const;
    void unsetrestoreTime();
    void setRestoreTime(const std::string& value);

    /// <summary>
    /// 实例id列表。
    /// </summary>

    std::vector<std::string>& getInstanceIds();
    bool instanceIdsIsSet() const;
    void unsetinstanceIds();
    void setInstanceIds(const std::vector<std::string>& value);


protected:
    std::string restoreTime_;
    bool restoreTimeIsSet_;
    std::vector<std::string> instanceIds_;
    bool instanceIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListInstancesSupportFastRestoreRequestBody_H_
