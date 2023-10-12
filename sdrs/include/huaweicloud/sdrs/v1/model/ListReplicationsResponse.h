
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_ListReplicationsResponse_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_ListReplicationsResponse_H_


#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sdrs/v1/model/ShowReplicationParams.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  ListReplicationsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListReplicationsResponse();
    virtual ~ListReplicationsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListReplicationsResponse members

    /// <summary>
    /// 复制对列表。
    /// </summary>

    std::vector<ShowReplicationParams>& getReplications();
    bool replicationsIsSet() const;
    void unsetreplications();
    void setReplications(const std::vector<ShowReplicationParams>& value);

    /// <summary>
    /// 列表中包含的复制对个数。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);


protected:
    std::vector<ShowReplicationParams> replications_;
    bool replicationsIsSet_;
    int32_t count_;
    bool countIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_ListReplicationsResponse_H_
