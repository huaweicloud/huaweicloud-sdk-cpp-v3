
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListMsdtcHostsResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListMsdtcHostsResponse_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/DBSInstanceHostInfoResult.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  ListMsdtcHostsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListMsdtcHostsResponse();
    virtual ~ListMsdtcHostsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListMsdtcHostsResponse members

    /// <summary>
    /// host总数
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// host列表
    /// </summary>

    std::vector<DBSInstanceHostInfoResult>& getHosts();
    bool hostsIsSet() const;
    void unsethosts();
    void setHosts(const std::vector<DBSInstanceHostInfoResult>& value);


protected:
    int32_t totalCount_;
    bool totalCountIsSet_;
    std::vector<DBSInstanceHostInfoResult> hosts_;
    bool hostsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListMsdtcHostsResponse_H_
