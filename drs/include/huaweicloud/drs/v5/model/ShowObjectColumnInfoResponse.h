
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowObjectColumnInfoResponse_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowObjectColumnInfoResponse_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/ObjectWithColumnInfo.h>
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
class HUAWEICLOUD_DRS_V5_EXPORT  ShowObjectColumnInfoResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowObjectColumnInfoResponse();
    virtual ~ShowObjectColumnInfoResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowObjectColumnInfoResponse members

    /// <summary>
    /// 和列信息相关的对象
    /// </summary>

    std::vector<ObjectWithColumnInfo>& getObjectWithColumnInfos();
    bool objectWithColumnInfosIsSet() const;
    void unsetobjectWithColumnInfos();
    void setObjectWithColumnInfos(const std::vector<ObjectWithColumnInfo>& value);


protected:
    std::vector<ObjectWithColumnInfo> objectWithColumnInfos_;
    bool objectWithColumnInfosIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowObjectColumnInfoResponse_H_
