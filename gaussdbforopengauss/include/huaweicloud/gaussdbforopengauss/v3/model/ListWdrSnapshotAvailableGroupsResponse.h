
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListWdrSnapshotAvailableGroupsResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListWdrSnapshotAvailableGroupsResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/WdrSnapshotGroupResult.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ListWdrSnapshotAvailableGroupsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListWdrSnapshotAvailableGroupsResponse();
    virtual ~ListWdrSnapshotAvailableGroupsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListWdrSnapshotAvailableGroupsResponse members

    /// <summary>
    /// **参数解释**: 分组数量。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int64_t value);

    /// <summary>
    /// **参数解释**: 分组记录列表。
    /// </summary>

    std::vector<WdrSnapshotGroupResult>& getGroups();
    bool groupsIsSet() const;
    void unsetgroups();
    void setGroups(const std::vector<WdrSnapshotGroupResult>& value);


protected:
    int64_t totalCount_;
    bool totalCountIsSet_;
    std::vector<WdrSnapshotGroupResult> groups_;
    bool groupsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListWdrSnapshotAvailableGroupsResponse_H_
