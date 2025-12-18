
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListTopTableVolumesResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListTopTableVolumesResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdbforopengauss/v3/model/TableVolumeResult.h>
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
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ListTopTableVolumesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListTopTableVolumesResponse();
    virtual ~ListTopTableVolumesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTopTableVolumesResponse members

    /// <summary>
    /// **参数解释**: 数据库表占用空间列表。 
    /// </summary>

    std::vector<TableVolumeResult>& getTableVolumes();
    bool tableVolumesIsSet() const;
    void unsettableVolumes();
    void setTableVolumes(const std::vector<TableVolumeResult>& value);

    /// <summary>
    /// **参数解释**: 总数。 **取值范围**: 不涉及。 
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// **参数解释**: 任务状态。 **取值范围**: - RUNNING：运行中。 - ERROR：运行异常。 - FINISHED： 运行结束。 
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);


protected:
    std::vector<TableVolumeResult> tableVolumes_;
    bool tableVolumesIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;
    std::string state_;
    bool stateIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListTopTableVolumesResponse_H_
