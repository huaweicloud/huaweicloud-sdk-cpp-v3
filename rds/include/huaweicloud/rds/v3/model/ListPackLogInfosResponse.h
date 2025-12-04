
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListPackLogInfosResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListPackLogInfosResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/PackLogInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListPackLogInfosResponse
    : public ModelBase, public HttpResponse
{
public:
    ListPackLogInfosResponse();
    virtual ~ListPackLogInfosResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListPackLogInfosResponse members

    /// <summary>
    /// **参数解释**：  binlog合并下载文件数量。  **约束限制**：  不涉及。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// **参数解释**：  binlog合并下载文件信息。  **约束限制**：  不涉及。
    /// </summary>

    std::vector<PackLogInfo>& getPackLogInfos();
    bool packLogInfosIsSet() const;
    void unsetpackLogInfos();
    void setPackLogInfos(const std::vector<PackLogInfo>& value);


protected:
    int32_t totalCount_;
    bool totalCountIsSet_;
    std::vector<PackLogInfo> packLogInfos_;
    bool packLogInfosIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListPackLogInfosResponse_H_
