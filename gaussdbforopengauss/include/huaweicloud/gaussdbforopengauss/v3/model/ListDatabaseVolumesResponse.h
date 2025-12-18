
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListDatabaseVolumesResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListDatabaseVolumesResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/DatabaseVolumeResult.h>
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
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ListDatabaseVolumesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListDatabaseVolumesResponse();
    virtual ~ListDatabaseVolumesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDatabaseVolumesResponse members

    /// <summary>
    /// **参数解释**: 数据库占用空间列表。 
    /// </summary>

    std::vector<DatabaseVolumeResult>& getDatabaseVolumes();
    bool databaseVolumesIsSet() const;
    void unsetdatabaseVolumes();
    void setDatabaseVolumes(const std::vector<DatabaseVolumeResult>& value);

    /// <summary>
    /// **参数解释**: 总数。 **取值范围**: 不涉及。 
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<DatabaseVolumeResult> databaseVolumes_;
    bool databaseVolumesIsSet_;
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

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListDatabaseVolumesResponse_H_
