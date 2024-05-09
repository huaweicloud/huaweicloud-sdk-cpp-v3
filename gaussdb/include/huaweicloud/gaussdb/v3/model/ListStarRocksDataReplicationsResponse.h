
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListStarRocksDataReplicationsResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListStarRocksDataReplicationsResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/StarRocksReplicationInfo.h>
#include <string>
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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ListStarRocksDataReplicationsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListStarRocksDataReplicationsResponse();
    virtual ~ListStarRocksDataReplicationsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListStarRocksDataReplicationsResponse members

    /// <summary>
    /// 查询数据同步任务数。
    /// </summary>

    std::string getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(const std::string& value);

    /// <summary>
    /// 数据同步任务信息。
    /// </summary>

    std::vector<StarRocksReplicationInfo>& getReplications();
    bool replicationsIsSet() const;
    void unsetreplications();
    void setReplications(const std::vector<StarRocksReplicationInfo>& value);

    /// <summary>
    /// 扩展字段。
    /// </summary>

    std::string getExtText() const;
    bool extTextIsSet() const;
    void unsetextText();
    void setExtText(const std::string& value);


protected:
    std::string totalCount_;
    bool totalCountIsSet_;
    std::vector<StarRocksReplicationInfo> replications_;
    bool replicationsIsSet_;
    std::string extText_;
    bool extTextIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListStarRocksDataReplicationsResponse_H_
