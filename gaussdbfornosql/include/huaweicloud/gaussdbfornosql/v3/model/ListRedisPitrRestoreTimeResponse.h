
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListRedisPitrRestoreTimeResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListRedisPitrRestoreTimeResponse_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  ListRedisPitrRestoreTimeResponse
    : public ModelBase, public HttpResponse
{
public:
    ListRedisPitrRestoreTimeResponse();
    virtual ~ListRedisPitrRestoreTimeResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListRedisPitrRestoreTimeResponse members

    /// <summary>
    /// Redis可恢复时间点列表。 yyyy-mm-ddThh:mm:ssZ字符串格式，T指某个时间的开始，Z指时区偏移量。
    /// </summary>

    std::vector<std::string>& getRestoreTime();
    bool restoreTimeIsSet() const;
    void unsetrestoreTime();
    void setRestoreTime(const std::vector<std::string>& value);

    /// <summary>
    /// Redis实例可恢复时间点总数。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<std::string> restoreTime_;
    bool restoreTimeIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListRedisPitrRestoreTimeResponse_H_
