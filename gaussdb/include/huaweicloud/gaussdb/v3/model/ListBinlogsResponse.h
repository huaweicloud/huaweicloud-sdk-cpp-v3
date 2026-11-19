
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListBinlogsResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListBinlogsResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/BinlogInfo.h>
#include <vector>

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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ListBinlogsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListBinlogsResponse();
    virtual ~ListBinlogsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListBinlogsResponse members

    /// <summary>
    /// **参数解释**：  Binlog日志文件总数。   **取值范围**：  不涉及。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// **参数解释**：  Binlog日志文件列表。
    /// </summary>

    std::vector<BinlogInfo>& getBinlogs();
    bool binlogsIsSet() const;
    void unsetbinlogs();
    void setBinlogs(const std::vector<BinlogInfo>& value);


protected:
    int32_t totalCount_;
    bool totalCountIsSet_;
    std::vector<BinlogInfo> binlogs_;
    bool binlogsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListBinlogsResponse_H_
