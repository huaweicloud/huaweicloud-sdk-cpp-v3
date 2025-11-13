
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListReplicationProfilesResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListReplicationProfilesResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/ListReplicationProfilesResult.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  ListReplicationProfilesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListReplicationProfilesResponse();
    virtual ~ListReplicationProfilesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListReplicationProfilesResponse members

    /// <summary>
    /// 配置文件列表。
    /// </summary>

    std::vector<ListReplicationProfilesResult>& getProfiles();
    bool profilesIsSet() const;
    void unsetprofiles();
    void setProfiles(const std::vector<ListReplicationProfilesResult>& value);

    /// <summary>
    /// 配置文件总数。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<ListReplicationProfilesResult> profiles_;
    bool profilesIsSet_;
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

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListReplicationProfilesResponse_H_
