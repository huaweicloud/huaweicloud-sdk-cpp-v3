
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowObjectMappingResponse_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowObjectMappingResponse_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/DbObjectInfo.h>
#include <vector>

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
class HUAWEICLOUD_DRS_V5_EXPORT  ShowObjectMappingResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowObjectMappingResponse();
    virtual ~ShowObjectMappingResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowObjectMappingResponse members

    /// <summary>
    /// 总数。
    /// </summary>

    int64_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int64_t value);

    /// <summary>
    /// 同步映射数据列表。
    /// </summary>

    std::vector<DbObjectInfo>& getObjectMappingList();
    bool objectMappingListIsSet() const;
    void unsetobjectMappingList();
    void setObjectMappingList(const std::vector<DbObjectInfo>& value);


protected:
    int64_t count_;
    bool countIsSet_;
    std::vector<DbObjectInfo> objectMappingList_;
    bool objectMappingListIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowObjectMappingResponse_H_
