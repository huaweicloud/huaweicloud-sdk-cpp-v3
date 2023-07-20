
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowDirtyDataResponse_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowDirtyDataResponse_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/drs/v5/model/DirtyData.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ShowDirtyDataResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowDirtyDataResponse();
    virtual ~ShowDirtyDataResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowDirtyDataResponse members

    /// <summary>
    /// 总数。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 异常数据列表。
    /// </summary>

    std::vector<DirtyData>& getDirtyDataList();
    bool dirtyDataListIsSet() const;
    void unsetdirtyDataList();
    void setDirtyDataList(const std::vector<DirtyData>& value);


protected:
    int32_t count_;
    bool countIsSet_;
    std::vector<DirtyData> dirtyDataList_;
    bool dirtyDataListIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowDirtyDataResponse_H_
